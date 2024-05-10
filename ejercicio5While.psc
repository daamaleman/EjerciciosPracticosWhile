Proceso ejercicio5While
	Definir suma, i, nota, aprob, reprob como entero;
	suma <- 0;
	aprob <- 0;
	reprob <- 0;
	i <- 1;
	mientras i <= 8 hacer
		escribir "Ingrese la nota del estudiante ", i;
		leer nota;
		si nota >= 70 entonces
			aprob <- aprob + 1;
			suma <- suma + nota;
		sino
			reprob <- reprob + 1;
		finSi
		i <- i + 1;
	finMientras
	si aprob > 0 entonces
		escribir "La cantidad de alumnos aprobados es: ", aprob;
		escribir "El promedio general del grupo es: ", suma / aprob;
	sino
		escribir "No hay alumnos aprobados";
	finSi
	si reprob > 0 entonces
		escribir "La cantidad de alumnos reprobados es: ", reprob;
	finSi	
FinProceso