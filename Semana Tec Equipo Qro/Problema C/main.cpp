// =========================================================
// File: main.cpp
// Author: Manolo_Edu_Mich
// Date: 26/10/2021
// =========================================================

#include<bits/stdc++.h>

using namespace std;

int main() {
  string s;
  int a, t;
  cin >> t;

  while(t--) {
    map <char, int> n;
    a = -1;
    cin >> s;

    for(int i = 0; i < s.length(); i++)
    n[s[i]]++;
    for(int x = 0; x <= 9; x++) {
      for(int y = 0; y <= 9; y++) {
        int p = 0, q = 0;
        for(int i = 0; i < s.length(); i++) {
          if(s[i] - '0' == x && q == 0) {
            q = 1;
            p++;
          }

          else if(s[i] - '0' == y && q == 1) {
            q = 0;
            p++;
          }
        }

        if(p %2 == 1)
        p--;
        a = max(p, a);
      }
    }

    int m = -1;
    for(int i = 0; i < s.length(); i++) {
      m = max(m, n[s[i]]);
    }

    int r = min(s.length() - a, s.length() - m); 
    cout << r << endl;
  }
}