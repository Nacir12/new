#include <stdio.h>
/* Suma positivos. 
El programa, al recibir como datos N números enteros, obtiene la suma de los
➥enteros positivos. 
I, N, NUM, SUM: variables de tipo entero. */


int main(void)
{
    int i, n, num, sum;
    sum = 0;
    printf("Ingrese el número de datos: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("Ingrese el dato número %d: ", i);
        scanf("%d", &num);
        if (num > 0)
            sum = sum + num;
    }
    printf("\nLa suma de los números positivos es: %d\n", sum);
    return 0;
}
