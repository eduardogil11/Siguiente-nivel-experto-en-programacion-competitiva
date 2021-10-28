/*
* main.cpp
* Michelle Aylin Calzada Montes - A01706202
* Eduardo Rodriguez Gil - A01274913
* Manolo Ramirez Pintor - A01706155
* 
*/

#include <bits/stdc++.h>

using namespace std;

//Calcula una exponenciación modular
long long exp_mod(long long base, long long pot, long long mod) {
    //Variante de las monedas
    long long vari = 1;

    //Al la base se le saca el módulo y ese será su nuevo valor
    base = base % mod;

    //Se va calculando el modulo de las potencias
    while (pot > 0) {
        if (pot & 1) 
          vari = (vari*base) % mod;

        pot = pot >> 1;
        base = (base*base) % mod;
    }

    //Regresa el número de variantes 
    return vari;
}

int main(){
  
  int n;
  long long gnomes, total, a, cas6;

  //Variable de gran tamaño que se utiliza para calcular el módulo y evitar errores
  long long mod = 1000000007;

  //Inserta el número de gnomos dividido entre tres
  cin >> n;

  //Calcula en número de gnomos
  gnomes = 3*n;

  //Saca todos los casos posibles con una exponenciación modular
  total = exp_mod(3, gnomes, mod);
  
  //Saca los casos donde se cumpla la condición ai + ai + n + ai + 2n = 6 con una exponenciación modular
  cas6 = exp_mod(7, n, mod);
  
  //Se resta lo que salió de todos los posibles menos donde se cumplió que ai + ai + n + ai + 2n = 6
  //ya que de ésta condición no se tomará en cuenta para el problema
  long long casos = total - cas6;

  //Saca el módulo de los casos con los que se van a trabajar
  a = casos % mod;

  //Saca todas las maneras posibles de distribuir las monedas primero sacando el módulo del módulo que sacamos anteriormente
  //Después se le suma la variable grande que evita que marque errores
  //ya que lo utilizamos para sacar los casos con los que se trabajaran y se le vuelve a sacar módulo
  long long res = (a % mod + mod) % mod;

  //Imprime el resultado
  cout << res;
 
}