/*Escriba el programa para calcular la suma
de los cuadrados de los números entre 1 y 100.*/

#include <iostream>

using namespace std;

int main()
{
    int num = 1;
    int sum = 0;
    while (num <= 100)
    {
        sum += num * num;
        num++;
    }
    cout << "La suma de los cuadrados de los números entre 1 y 100 es: " << sum << endl;
    return 0;
}