#include <iostream>
#include <string>
using namespace std;
int main() {
    int numestudiantes;
    string nombrestudiantes;
    double nota;
    double menornota;
    double mayornota=0;
    double suma=0, promedio;
 char calcular;
 
do{
        
   cout << "introduce numero de estudiantes: " <<endl;
   cin >> numestudiantes;
   
    for (int i = 0; i < numestudiantes; ++i){
        
   cout << "introduce nombre del estudiante: " <<endl;
   cin >> nombrestudiantes;
   
   cout << "Introduce la nota: "<< endl;
   cin >> nota;       
   
   if(i==0){
       menornota=nota;
   }

if (mayornota < nota){
    mayornota= nota;
    
}

    if(nota < menornota){
    menornota= nota;
    
    }
    
   suma +=nota;
        
    }
    
    promedio = suma/numestudiantes;
     cout << "El promedio del salon es: " << promedio << endl;
     cout << "La mayor nota es: " << mayornota << endl;
     cout << "La menor nota es: " << menornota << endl;
 
 cout<<"desea calcular ota cuenta ( s=1;n=2)"<<endl;
 cin>> calcular;
    
    } while(calcular =='S' || calcular =='s');

    return 0;

}

