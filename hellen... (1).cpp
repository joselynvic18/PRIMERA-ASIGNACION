#include <iostream>
#include <string>
using namespace std;

int main() {
    string palabra;
    string palabraInvertida = ""; 
    char calcular;
do{
    cout << "Ingrese una palabra: ";
    cin >> palabra;

    for (int i = palabra.length() -1;   i >= 0; i--) {
        palabraInvertida = palabra[i] + palabraInvertida;
    }

    if (palabra == palabraInvertida) {
        cout << palabra << " es un palíndromo." << endl;
    } else {
        cout << palabra << " no es un palíndromo." << endl;
    }
    cout<<"desea calcular otra palabra (s=1, n=2)"<<endl;
    cin>> calcular;
}while(calcular=='S' || calcular =='s');

    return 0; 
}
