/*Desarrolla un programa que solicite al usuario ingresar 
dos vectores de igual longitud y luego calcule la suma de ambos vectores.
El resultado debe mostrarse en un tercer vector.*/

#include <iostream>

using namespace std;

int main() {
    int longitud;
    cout << "Ingrese la longitud de los vectores: ";
    cin >> longitud;

    int vect1[longitud];
    int vect2[longitud];
    int sumVect[longitud];

    int i = 0;
    while (i < longitud) {
        cout << "Ingrese el elemento " << i + 1 << " de el primer vector: ";
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
        sumVect[i] = vect1[i] + vect2[i];
        i++;
    }

    cout << "La suma de los 2 vectores es: ";
    i = 0;
    while (i < longitud) {
        cout << sumVect[i] << " ";
        i++;
    }
    cout << endl;

    return 0;
}