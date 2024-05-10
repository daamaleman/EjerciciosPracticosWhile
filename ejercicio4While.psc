Proceso ejercicio4While
	Definir suma, i, nota, contador como entero;
	suma <- 0;
	contador <- 0;
	mientras contador < 10 hacer
		escribir "Ingrese la nota del estudiante ", contador + 1;
		leer nota;
		suma <- suma + nota;
		contador <- contador + 1;
	finMientras
	escribir "El promedio general de la seccion es: ", suma / 10;
FinProceso
