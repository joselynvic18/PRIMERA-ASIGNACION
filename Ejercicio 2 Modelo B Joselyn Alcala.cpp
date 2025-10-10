//EJERCICIO 2 MODELO B

#include <iostream>
using namespace std;
int main (){
    float tasa,valor,conversion;
    
    cout << "ingrese un valor de la tasa: ";
    cin >> tasa;
    
    cout << "ingrese un valor del bolivar: ";
    cin >> valor;
    
    conversion = tasa*valor;
    cout << conversion << endl;
   
    return 0;
