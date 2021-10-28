/*
* main.cpp
* Michelle Aylin Calzada Montes - A01706202
* Eduardo Rodriguez Gil - A01274913
* Manolo Ramirez Pintor - A01706155
* 10/27/2021
* 
*/

#include <iostream>

using namespace std;

int main(){

  // Variables iniciales:
  // a: masa del queso a
  // b: masa del queso b
  long int a, b;

  // aOpN: Contadores para las operaciones de a
  int aOp2 = 0, aOp3 = 0, aOp5 = 0;
  
  // bOpN: Contadores para las operaciones de b
  int bOp2 = 0, bOp3 = 0, bOp5 = 0;

  // aResN: Sumadores para los resultados finales
  int abRes2 = 0, abRes3 = 0, abRes5 = 0;

  // Entrada de datos
  cin>>a; // Masa del queso a
  cin>>b; // Masa del queso b

  // Hacemos la primera comprobacion que nos dice si ambos
  // quesos tienen la misma cantidad de masa, para que el zorro
  // no intente repartirlo ya que no tendria sentido.
  if (a == b){
    cout<<"0"<<endl;
  }
  // En caso contrario continuamos con el algoritmo que verificara
  // que cada queso pueda ser repartido en partes iguales con el
  // uso de modulos que entre 2, 3 y 5 sean cero para detener cada
  // contador en secuencia. 
  else{

    // Estos ciclos for seran los contadores para intentar
    // dividir el queso "a" en partes exactamente iguales.
    // Ciclo con modulo de 2
    for(a=a; a%2==0; a=a/2){
      // Se suma uno al num de operaciones
      aOp2++;
    }
    // Ciclo con modulo de 3
    for(a=a; a%3==0; a=a/3){
      // Se suma uno al num de operaciones
      aOp3++;
    }
    // Ciclo con modulo de 5
    for(a=a; a%5==0; a=a/5){
      // Se suma uno al num de operaciones
      aOp5++;
    }


    // Estos ciclos for seran los contadores para intentar
    // dividir el queso "b" en partes exactamente iguales.
    // Ciclo con modulo de 2
    for(b=b; b%2==0; b=b/2){
      // Se suma uno al num de operaciones
      bOp2++;
    }
    // Ciclo con modulo de 3
    for(b=b; b%3==0; b=b/3){
      // Se suma uno al num de operaciones
      bOp3++;
    }
    // Ciclo con modulo de 5
    for(b=b; b%5==0; b=b/5){
      // Se suma uno al num de operaciones
      bOp5++;
    }

    // Si al final las masas de los quesos a y b no son iguales
    // el zorro se habra comido mucho queso, habra enojado
    // mucho a los osos y el -1 significa que se lo comeran. F.
    if(a != b){
      cout<<"-1"<<endl;
    }
    // En caso contrario de que el zorro haya podido dividir
    // las partes perfectamente a la mitad, sucedera lo siguiente.
    else{

      // En este paso se calcularan las veces que tuvo que hacerse 
      // la operacion entre cada queso con el modulo correspondiente
      // y se le dara siempre valor positivo para obtener el valor
      // minimo de operaciones necesarias.
      
      /*
      cout<<aOp2<<endl;
      cout<<aOp3<<endl;
      cout<<aOp5<<endl;

      cout<<endl;

      cout<<bOp2<<endl;
      cout<<bOp3<<endl;
      cout<<aOp5<<endl;

      cout<<endl;
      */
      
      // Nota: El resultado del primer testcase no puede ser 5
      //       mas bien, se restan de acuerdo a la forma mas
      //       optima de repartir el queso y para los resultados
      //       negativos se debe dar un valor absoluto.

      abRes2 = abs(aOp2-bOp2);
      abRes3 = abs(aOp3-bOp3);
      abRes5 = abs(aOp5-bOp5);

      // Al final solo imprimimos la suma de lo que obtuvimos
      // en cada suma absoluta y tendremos nuestro resultado.
      cout<<abRes2 + abRes3 + abRes5<<endl;
    }

  }

}