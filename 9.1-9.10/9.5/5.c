#include <stdio.h>
#include <stdlib.h>

/* Archivos con variables enteras y reales.
El programa almacena datos de un grupo de alumnos en un archivo. */
int main(void)
{
    int i, j, n, mat;
    float cal;
    FILE *ar;

    // Pedir al usuario el n�mero de alumnos
    printf("\nIngrese el n�mero de alumnos (max 35): ");
    scanf("%d", &n);

    // Validar que el n�mero de alumnos ingresado sea v�lido
    if (n <= 0 || n > 35) {
        printf("N�mero de alumnos inv�lido. Debe ser mayor a cero y menor o igual a 35.\n");
        return 1;
    }

    // Abrir el archivo para escritura
    if ((ar = fopen("arc8.txt", "w")) != NULL) {
        // Escribir el n�mero de alumnos en el archivo
        fprintf(ar, "%d\n", n);

        // Pedir la informaci�n de cada alumno y escribirla en el archivo
        for (i = 0; i < n; i++) {
            printf("\nIngrese la matr�cula del alumno %d: ", i + 1);
            scanf("%d", &mat);
            fprintf(ar, "%d ", mat);

            // Pedir las calificaciones y validar que est�n en el rango de 0 a 10
            for (j = 0; j < 5; j++) {
                do {
                    printf("\nCalificaci�n %d (0-10): ", j + 1);
                    scanf("%f", &cal);
                } while (cal < 0 || cal > 10);

                // Escribir la calificaci�n en el archivo
                fprintf(ar, "%.2f ", cal);
            }
            fprintf(ar, "\n"); // Agregar salto de l�nea despu�s de cada alumno
        }

        fclose(ar);
        printf("Datos guardados correctamente en el archivo 'arc8.txt'\n");
        return 0;
    } else {
        printf("No se puede abrir el archivo.\n");
        return 1;
    }
}
