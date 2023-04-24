#include <stdio.h>
#include <math.h>
/* Suma cuadrados.
El programa, al recibir como datos un grupo de enteros positivos, obtiene el
➥cuadrado de los mismos y la suma correspondiente a dichos cuadrados. */
int main(void)
{
    int num;
    long cua, suc = 0;
    printf("\nIngrese un número entero  para terminar: ");
    scanf("%d", &num);
    while (num)
    /* Observa que la condición es verdadera mientras el entero es diferente de cero. */
    {
        cua = pow(num, 2);
        printf("%d al cuadrado es %ld\n", num, cua);
        suc = suc + cua;
        printf("Ingrese un número entero -0 para terminar-: ");
        scanf("%d", &num);
    }
    printf("\nLa suma de los cuadrados es %ld\n", suc);
    return 0;
}