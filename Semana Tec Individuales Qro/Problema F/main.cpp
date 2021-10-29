// =========================================================
// File: main.cpp
// Author: Eduardo Rodríguez Gil - A01274913
// Date: 29/10/2021
// =========================================================

#include <bits/stdc++.h>
# define ld long double

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int x, n, m, a = 0;
        cin >> n >> m;

        for(int i = 0; i < n; i++) {
            cin >> x;
            if(x != i + 1)
            a = i + 1;
        }

        ld s = 0.0;

        while(m--) {
            int r;
            ld p;
            cin >> r >> p;

            if(r >= a) {
                s += (1.0 - s) * p;
            }
        }

        if(a == 0)
        s = 1.0;
        cout << fixed << setprecision(6) << s << endl;
    }

    return 0;
}