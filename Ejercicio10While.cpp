/*Implementa un programa que solicite al usuario
ingresar una matriz y luego calcule su transposición.
La transposición de una matriz se realiza intercambiando filas por columnas.
Imprime la matriz transpuesta como salida.*/

#include <iostream>

using namespace std;

int main()
{
    int filas, colum;

    cout << "Ingrese el numero de filas: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas: ";
    cin >> colum;

    int matrix[filas][colum];
    cout << "Ingrese los elementos de la matriz" << endl;
    int i = 0, j = 0;
    while (i < filas)
    {
        j = 0;
        while (j < colum)
        {
            cout << "Ingrese el elemento de la posicion (" << i + 1 << ", " << j + 1 << "): ";
            cin >> matrix[i][j];
            j++;
        }
        i++;
    }

    int result[colum][filas];

    i = 0;
    while (i < colum)
    {
        j = 0;
        while (j < filas)
        {
            result[i][j] = matrix[j][i];
            j++;
        }
        i++;
    }

    cout << "La transposicion de la matriz es:" << endl;
    i = 0;
    while (i < colum)
    {
        j = 0;
        while (j < filas)
        {
            cout << result[i][j] << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
