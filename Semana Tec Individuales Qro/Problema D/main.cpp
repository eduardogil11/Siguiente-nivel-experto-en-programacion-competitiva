// =========================================================
// File: main.cpp
// Author: Eduardo Rodríguez Gil - A01274913
// Date: 27/10/2021
// =========================================================

#include <bits/stdc++.h>

using namespace std;

int main () {
    int g, n, k, t;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        
        if(n & 1) {
            int s = k -1, m = (k - 1) / (n >> 1);
            g = 1 + (s + m) % n;
    }

    else {
        g = k % n == 0 ? n : k % n;
    }
    
    cout << g << endl;
    }
    
    return 0;
}