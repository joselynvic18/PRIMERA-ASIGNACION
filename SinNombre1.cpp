#include <iostream>
using namespace std;

int main() {
    int n, cont1 = 0, cont2 = 0, cont3 = 0;
    float precio;
    char repetir;

    do {
        cont1 = cont2 = cont3 = 0;
        cout << "Ingrese el numero de ventas realizadas: ";
        cin >> n;

        for (int i = 0; i < n; i++) {
            cout << "Precio del vehiculo #" << i + 1 << ": ";
            cin >> precio;

            if (precio < 25000)
                cont1++;
            else if (precio <= 120000)
                cont2++;
            else
                cont3++;
        }

        cout << "\nVehiculos menores a 25.000$: " << cont1;
        cout << "\nEntre 25.000$ y 120.000$: " << cont2;
        cout << "\nMayores a 120.000$: " << cont3 << endl;

        cout << "\nDesea repetir? (s/n): ";
        cin >> repetir;
    } while (repetir == 's' || repetir == 'S');

    return 0;
}
