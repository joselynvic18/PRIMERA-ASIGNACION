//EJERCICIO N1 MODELO B
#include <iostream>
using namespace std;
int main (){
    int suma=0;
    
    
   for (int i =1; i<=100; i++) {
       if (i % 2 == 0) {
           suma = suma + i;
       }
      
   }
cout<< "LA SUMA DE LOS PRIMEROS 50 NUMEROS PARES ES "<< suma<< endl;


    for (int j =1; j<=20; j++) {
       if (j %  2!= 0) {
           suma = suma + j;
       }
      
   }
cout<< "LA SUMA DE LOS PRIMEROS 10 NUMEROS IMPARES ES "<< suma<< endl;

    return 0;
}
