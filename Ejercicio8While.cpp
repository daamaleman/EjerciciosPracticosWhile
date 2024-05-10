/*Crea un programa que permita al usuario ingresar 
dos vectores de la misma longitud y luego calcule su producto punto. 
Muestra el resultado al finalizar el cálculo.*/

#include <iostream>

using namespace std;

int main() {
    int longitud;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> longitud;

    int vect1[longitud];
    int vect2[longitud];
    int produc = 0;

    int i = 0;
    while (i < longitud) {
        cout << "Ingrese el elemento " << i + 1 << " del primer vector: ";
        cin >> vect1[i];
        i++;
    }

    i = 0;
    while (i < longitud) {
        cout << "Ingrese el elemento " << i + 1 << " del segundo vector: ";
        cin >> vect2[i];
        i++;
    }

    i = 0;
    while (i < longitud) {
        produc += vect1[i] * vect2[i];
    }

    cout << "El producto de los 2 vectores es: " << produc << endl;

    return 0;
}
