/*Hacer un programa que sume los números pares 
comprendidos entre 100 y 200.*/

#include <iostream>

using namespace std;

int main() {
    int num = 100;
    int suma = 0;

    while (num <= 200) {
        if (num % 2 == 0) {
            suma += num;
        }
        num++;
    }

    cout << "La suma de los numeros pares entre 100 y 200 es: " << suma << endl;

    return 0;
}
