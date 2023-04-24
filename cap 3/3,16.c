#include <stdio.h>
/* Calificaciones.
El programa, al recibir un grupo de calificaciones de un alumno, obtiene el promedio de calificaciones de cada uno de ellos y, además, los alumnos con el mejor
y peor promedio.
I, MAT, MAMAT y MEMAT: variables de tipo entero.
CAL, SUM, MAPRO, MEPRO y PRO: variables de tipo real.*/

int main(void)
{
int I, mat, mat_best, mat_worst;
float sum, avg, grade, best_avg = 0.0, worst_avg = 11.0;
printf("Ingrese la matricula del primer alumno: ");
scanf("%d", &mat);
while (mat)
{
sum = 0;
for (I = 1; I <= 5; I++)
{
printf("\tIngrese la calificacion del alumno %d: ", I);
scanf("%f", &grade);
sum += grade;
}
avg = sum / 5;
printf("\nMatricula: %d\tPromedio: %.2f\n", mat, avg);
if (avg > best_avg)
{
best_avg = avg;
mat_best = mat;
}
if (avg < worst_avg)
{
worst_avg = avg;
mat_worst = mat;
}
printf("\nIngrese la matricula del siguiente alumno: ");
scanf("%d", &mat);
}
printf("\n\nAlumno con mejor promedio: Matricula %d, Promedio %.2f\n", mat_best, best_avg);
printf("Alumno con peor promedio: Matricula %d, Promedio %.2f\n", mat_worst, worst_avg);
}