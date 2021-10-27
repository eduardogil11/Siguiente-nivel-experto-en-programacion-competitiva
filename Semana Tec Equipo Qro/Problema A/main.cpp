// =========================================================
// File: main.cpp
// Author: Manolo_Edu_Mich
// Date: 26/10/2021
// =========================================================

#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    int t;
    cin >> t;
    ios::sync_with_stdio(false);

    while(t--) {
        cin >> s;
        set <char> n;
        
        for(int i = 0, j; i < (int)s.length(); i = j + 1) {
            j = i;

            for(; j < (int)s.length(); j++) {
                if(s[j] != s[i]) {
                    j--;
                    break;
                }
            }
            j = min((int)s.length() - 1, j);
            if((j - i + 1) %2)
            n.insert(s[i]);
        }

        for(auto x: n)
        cout << x; cout << endl;
    }

    return 0;
}