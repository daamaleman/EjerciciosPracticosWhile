/*Para un grupo de clase de 8 estudiantes, realice un programa que
permita calcular y dar como salida lo siguiente:
1.Cantidad de alumnos aprobados
2.Cantidad de alumnos reprobados
3.Promedio general del grupo*/

#include <iostream>

using namespace std;

int main()
{
    int numEstu = 8;
    int sumNotas = 0;
    int nota;
    int aprob = 0;
    int reprob = 0;
    int prom;

    int i = 1;
    while (i <= numEstu)
    {
        cout << "Ingresa la nota del estudiante " << i << ": ";
        cin >> nota;
        sumNotas += nota;

        if (nota >= 70)
        {
            aprob++;
        }
        else
        {
            reprob++;
        }
        i++;
    }

    prom = sumNotas / numEstu;

    cout << "El numero de los estudiantes aprovados es: " << aprob << endl;
    cout << "El numero de los estudiabres reprobados es: " << reprob << endl;
    cout << "El promedio general es: " << prom << endl;

    return 0;
}
