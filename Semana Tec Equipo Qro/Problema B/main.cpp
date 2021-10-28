/*
*   Michelle Aylin Calzada Montes - A01706202
*   Eduardo Rodriguez Gil - A01274913
*   Manolo Ramirez Pintor - A01706155
*/

#include <bits/stdc++.h>

using namespace std;


int main(){
  int n, k, cases, res = 0;
  string s;

  //Número de casos
  cin >> cases;

  while(cases--){
    
    //Inserta el número de mesas y distancia
    cin >> n >> k;

    //string de mesas ocupadas y desocupadas
    cin >> s;
    
    //Recorre el string
    for (int i = 0; i < s.size(); i++) {

      //si el lugar esta desocupado (o sea, que sea 0)
      //Verá si cumple con las condiciones para que se puedan sentar y ocupar el espacio
      if (s[i] == '0') {

        //a una nueva variable se le suma la cantidad 
        //de lugares recorridos (i) más uno (el siguiente)
        int esp = i + 1;
        
        //Luego mientras que esa variable es menor que el tamaño del string
        //Que la posición del string igual a la variable este vacío
        //y que la distancia (k) sea mayor o igual que la variable menos el contador de lugares
        //A la variable se le va a sumar 1
        while (esp < s.size() && s[esp] == '0' && esp - i <= k) 
          ++esp;
      
        //Después si la variable con los espacios (esp) menos los espacios recorridos (i)
        //es mayor al número de la distancia (k) o si
        //los espacios (esp) son iguales al tamaño del string
        //Significa que el lugar está disponible y se puede ocupar
        //Por lo que al resultado se le suma uno y al contador se le suma la distancia para que pueda seguir recorriendo la mesa
        if (esp - i > k || esp == s.size()) {
          res++;
          i += k;

        //Si no, al contador se le resta el valor de la variable menos 1
        } else 
          i = esp - 1;


        //Si el lugar está ocupado (Igual a '1'), simpemente 
        //al contador se le suma la cantidad del espacio
      } else i += k;
    }

    //Imprime el resultado
    cout << res << endl;

    //Reinicia el resultado para el siguiente caso
    res = 0;
  }
}