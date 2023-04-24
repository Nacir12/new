# include <stdio.h>
# include <math.h>
/* Cálculo de P.
El programa obtiene el valor de P aplicando una serie determinada.
I, B, C: variables de tipo entero.
RES: variable de tipo real de doble precisión. */
int main(void)
{
int i = 1, b = 0, c;
double res;
res = 4.0 / i;
c = 1;
while ((fabs(3.1415 - res)) > 0.0005)
{
  i += 2;
  if (b)
  {
    res += (double)(4.0 / i);
    b = 0;
  }
  else
  {
    res -= (double)(4.0 / i);
    b = 1;
  }
  c++;
}
printf("\nNumero de terminos: %d\n", c);

return 0;
}
