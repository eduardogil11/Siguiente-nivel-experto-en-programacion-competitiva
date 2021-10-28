// =========================================================
// File: main.cpp
// Author: Eduardo Rodríguez Gil - A01274913
// Date: 28/10/2021
// =========================================================

#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    const int a = 1e3 + 5;
    int x[a], y[a][a];

    while(cin >> n) {
        for(int i = 1; i <= n; i++)
        cin >> x[i];
        for(int i = 1; i <= n; i++)
            for(int j = 0; j <= 2; j++)
            y[i][j] = 0x3f3f3f3f;

            y[1][0] = 1;
            if(x[1] == 1) y[1][1] = 0;
            if(x[1] == 2) y[1][2] = 0;
            if(x[1] == 3) y[1][1] = y[1][2] = 0;
            for(int i = 2; i <= n; i++) {
                y[i][0] = min(y[i - 1][0], min(y[i - 1][1], y[i - 1][2])) + 1;
                if(x[i] == 1)
                     y[i][1] = min(y[i - 1][0], min(y[i - 1][1] + 1, y[i - 1][2]));
                else if(x[i] == 2)
                     y[i][2] = min(y[i - 1][0], min(y[i - 1][1], y[i - 1][2] + 1));
                else if(x[i] == 3) {
                     y[i][1] = min(y[i - 1][0], min(y[i - 1][1] + 1, y[i - 1][2]));
                     y[i][2] = min(y[i - 1][0], min(y[i - 1][1], y[i - 1][2] + 1));
                }
            }

            int r = min(y[n][0], min(y[n][1], y[n][2]));
            cout << r << endl;
    }

    return 0;
}