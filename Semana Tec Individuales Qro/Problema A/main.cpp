// =========================================================
// File: main.cpp
// Author: Eduardo Rodríguez Gil - A01274913
// Date: 26/10/2021
// =========================================================

#include<bits/stdc++.h>

using namespace std;

bool check(string s, string t) {
    int i = s.length() - 1, j = t.length() - 1;

    if(i < j) {
        return false;
    }

    while(i >= 0 && j >= 0) {
        if(s[i] == t[j]) {
            i--, j--;
        }

        else {
            i -= 2;
        }
    }

    if(j == - 1)
    return true; return false;
}

int main() {
    int r;
    cin >> r;

    while(r--) {
        string s = "", t = "";
        cin >> s >> t;

        check(s, t) ? 
        cout << "YES" << endl : cout << "NO" << endl;
    }

    return 0;
}