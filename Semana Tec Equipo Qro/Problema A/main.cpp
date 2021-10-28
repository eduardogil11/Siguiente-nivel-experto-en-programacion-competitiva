// =========================================================
// File: main.cpp
// Author: Manolo_Edu_Mich
// Date: 27/10/2021
// =========================================================

#include<bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string s;
    int t;
    // Número de casos
    cin >> t;

    while(t--) {
        // Inserta las letras latinas
        cin >> s;
        set <char> n;
        
        // Utilizamos length para usar todos los tipos de datos de serie de caracteres y indicamos que j es igual a i
        for(int i = 0, j; i < (int)s.length(); i = j + 1) {
            j = i;

            // Aqui indicamos que si j es diferente i detenemos la ejecución con el break
            for(; j < (int)s.length(); j++) {
                if(s[j] != s[i]) {
                    j--;
                    break;
                }
            }
            // Aqui utilizamos min para comparar y luego si j resta a i, inserta la letras latinas de i 
            j = min((int)s.length() - 1, j);
            if((j - i + 1) %2)
            n.insert(s[i]);
        }

        // Inicializa la variable
        for(auto x: n)

        //Imprime el resultado
        cout << x; cout << endl;
    }

    return 0;
}