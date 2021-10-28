/*
*   Michelle Aylin Calzada Montes - A01706202
*   Eduardo Rodriguez Gil - A01274913
*   Manolo Ramirez Pintor - A01706155
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
  int n;

  //Array con las cantidades de dinero de cada jugador
  long a[100000];

  //Condición que nos dice si pueden ganar un jackpot, ahora se pone en true, lo que dice que si se puede por ahora
  bool jackpot = true;  

  //Inserta número de jugadores
  cin >> n;

  //Inserta cantidades de dinero de los jugadores
  for(int i = 0; i < n; i++){
    cin >> a[i];
  }

  //Variable para guardar la primera cantidad del array, es long porque el array igual lo es
  long prim;

  //Recorre el array que contiene la cantidad de dinero de cada jugador
  for(int i = 0; i < n; i++){
    
    //Si la cantidad se puede dividir exactamente en dos, la cantidad cambia a su mitad
    //Sigue así hasta que ya no se pueda dividir exactamente
    while(a[i]%2 == 0){
	    a[i] /= 2;
    }
	  
    //Si la cantidad se puede dividir exactamente en tres, la cantidad cambia a su tercera parte
    //Sigue así hasta que ya no se pueda dividir exactamente
    while(a[i]%3 == 0){
	    a[i] /= 3;
	  }
	  
    //si es la primera cantidad del array, se guarda en una variable
    if(i == 0){
	    prim = a[i];
	  }
	  
    //Si el dinero de las siguientes cantidades no es igual a la primera y si son más de 1
    //significa que no se pudo obtener el jackpot, así que su condición cambia a falso
    //y termina el recorrido del array
    if(i >= 1 && prim != a[i]){
	    jackpot = false;
	    break;
	  }
  }

  //Si la condición para ganar un jackpot sigue presente, imprime que si se puede 
  if(jackpot){
	  cout<<"Yes";

  //Si no está presente, imprime que no se puede    
	} else {
	  cout<<"No";
	}

}