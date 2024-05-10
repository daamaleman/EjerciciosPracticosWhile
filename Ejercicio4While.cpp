/*Realice un programa que permita calcular y dar como salida el
promedio general de una sección, tomando en cuenta que está compuesta por
10 estudiantes y que se tiene la nota de cada uno de ellos.*/

#include <iostream>

using namespace std;

int main()
{
    int numAlum = 10;
    int sumNotas = 0;
    int nota;
    int i = 1;
    int prom;
    while (i <= numAlum)
    {
        cout << "Ingrese las notas de los estudiantes: " << i << ": ";
        cin >> nota;
        sumNotas += nota;
        i++;
    }
    prom = sumNotas / numAlum;

    cout << "El promedio de nota de la seccion es: " << prom << endl;
    return 0;
}
