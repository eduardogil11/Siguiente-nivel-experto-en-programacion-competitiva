// =========================================================
// File: main.cpp
// Author: Manolo_Edu_Mich
// Date: 28/10/2021
// =========================================================

#include<bits/stdc++.h>

using namespace std;

int main() {
    // Variables que utilizaremos
    const long long x = 8e18;
    const int y = 1e5 + 10;
    long long dp[3][y];
    int a[y];
    long long n, p, q, r;

    // Damos los 4 enteros
    cin >> n >> p >> q >> r;

    // Damos n cantidad de números enteros separados por espacios 
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    // Utilizaremos programación dinamica y tendremos varias posiblidades
    dp[0][0] =-x;
    dp[1][0] =-x;
    dp[2][0] =-x;

    // Usamos max para comparar y devolver el mayor número
    for(int i = 1; i <= n; i++) {
        dp[0][i] = max(dp[0][i - 1], p * a[i]);
        dp[1][i] = max(dp[1][i - 1], dp[0][i] + q*a[i]);
        dp[2][i] = max(dp[2][i - 1], dp[1][i] + r*a[i]);
    } 

    // Imprimimos el resultado
    cout << dp[2][n] << endl;
    return 0;
}