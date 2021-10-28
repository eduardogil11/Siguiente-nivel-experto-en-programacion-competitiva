// =========================================================
// File: main.cpp
// Author: Eduardo Rodríguez Gil - A01274913
// Date: 28/10/2021
// =========================================================

#include <bits/stdc++.h>
#define ll long long 

using namespace std;

int main() {
    ll n;
    cin >> n;

    while(n--) {
        int p = 2, q = 3;
        ll a, b, c;
        cin >> a >> b >> c;
        ll m = pow(10, c - 1);
        ll x = m, y = m;
        ll X = (ll)pow(10, a - 1), Y = (ll)pow(10, b - 1);

        while(x < X) {
            x *= p;
        }

        while(y < Y) {
            y *= q;
        }

        cout << x << " " << y << endl;
    }
}