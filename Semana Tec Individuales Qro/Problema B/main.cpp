// =========================================================
// File: main.cpp
// Author: Eduardo Rodríguez Gil - A01274913
// Date: 26/10/2021
// =========================================================

#include <bits/stdc++.h>

using namespace std;

int l, w;
int a[100010], b[100010];
int f(int i, int j) {
    int x = i + l;

    if(x >= w)
    return j;

    while(a[x] <= 0 && x > i) {
        b[x] = b[b[x]];
        x = b[x];
    }

    if(x <= i)
    return 0;

    int n = f(x, min(j, a[x]));
    a[x] -= n;

    if(a[x] == 0)
    b[x] = b[x -1];
    return n;
}

int main() {
    int n = 0, m = 0;
    cin >> w >> l;
    a[0] = -1;

    for(int i = 1; i < w; i++) {
        cin >> a[i];

        if(a[i] == 0)
        b[i] = b[i -1];
        else
        b[i] = i;
    }

    while(1) {
        m = f(0, 100000);
        if(m == 0)
        break;
        n += m;
    }
    
    cout << n << endl;
    return 0;
}