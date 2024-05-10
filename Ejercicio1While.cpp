/*Dado un número natural n se desea calcular la suma de los
números naturales desde 1 hasta n.
Codifica el programa que resuelva este planteamiento.*/

#include <iostream>

using namespace std;

#define TAM 10000
int numeros[TAM];
int posicion = 0;

int main()
{
    int op = 0, cont, suma = 0;
    while (op == 0)
    {
        cout << "Ingrese un numero: ";
        cin >> numeros[posicion];
        posicion++;
        cout << "Desea ingresar otro numero? 1= Salir 0= Continuar ";
        cin >> op;
    }
    cont = 0;
    while (cont < posicion)
    {
        suma = 0;
        int num = numeros[cont];
        for (int i = 1; i <= num; i++)
        {
            suma = suma + i;
        }
        cout << numeros[cont] << "= " << suma << endl;
        cont++;
    }
    return 0;
}
