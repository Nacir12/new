#include <stdio.h>
/* Suma pagos.
El programa, al recibir como datos un conjunto de pagos realizados en el último
➥mes, obtiene la suma de los mismos.
PAG y SPA: variables de tipo real. */


int main(void)
{
    float pag, spa;
    spa = 0;
    printf("Ingrese el primer pago: ");
    scanf("%f", &pag);
    while (pag) 
    /* Observa que la condición es verdadera mientras el pago es diferente de cero. */
    {
        spa = spa + pag;
        printf("Ingrese el siguiente pago: ");
        scanf("%f", &pag); 
        /* Observa que la proposición que modifica la condición es una lectura. */
    }
    printf("\nEl total de pagos del mes es: %.2f\n", spa);
    return 0;
}
