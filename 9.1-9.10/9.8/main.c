#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Alumnos.
El programa almacena variables de tipo estructura alumno en un archivo. */

typedef struct {
    int matricula;
    char nombre[20];
    int carrera;
    float promedio;
} alumno;

void escribe(FILE *); /* Prototipo de funci�n. */

int main(void)
{
    FILE *ar;
    if ((ar = fopen("ad1.dat", "wb")) != NULL) {
        escribe(ar);
        fclose(ar);
    } else {
        printf("\nEl archivo no se puede abrir");
    }
    return 0;
}

void escribe(FILE *ap)
{
    alumno alu;
    int i = 0, r;
    printf("\n�Desea ingresar informaci�n sobre alumnos? (S�-1 No-0): ");
    scanf("%d", &r);
    while (r) {
        i++;
        printf("Matr�cula del alumno %d: ", i);
        scanf("%d", &alu.matricula);
        printf("Nombre del alumno %d: ", i);
        getchar(); // Limpiar el b�fer de entrada
        fgets(alu.nombre, 20, stdin); // Leer el nombre del alumno
        alu.nombre[strlen(alu.nombre)-1] = '\0'; // Eliminar el car�cter de nueva l�nea
        printf("Carrera del alumno %d: ", i);
        scanf("%d", &alu.carrera);
        printf("Promedio del alumno %d: ", i);
        scanf("%f", &alu.promedio);
        fwrite(&alu, sizeof(alumno), 1, ap);
        printf("\n�Desea ingresar informaci�n sobre m�s alumnos? (S�-1 No-0): ");
        scanf("%d", &r);
    }
}
