#include <stdio.h>
/* Nómina.
El programa, al recibir los salarios de 15 profesores, obtiene el total de la
➥nómina de la universidad.
I: variable de tipo entero.
SAL y NOM: variables de tipo real. */


int main(void)
{
    int i;
    float sal, nom;
    nom = 0;
    for (i = 1; i <= 15; i++)
    {
        printf("Ingrese el salario del profesor %d: ", i);
        scanf("%f", &sal);
        nom = nom + sal;
    }
    printf("\nEl total de la nómina es: %.2f\n", nom);
    return 0;
}
