#include <stdio.h>
void main ()
{
    int x, n, r, i;
    printf("Infoeme o valor dda base: ");
    scanf("%d", &x);

    printf("\nInforme o numero do expoente: ");
    scanf("%d", &n);

    r = 1;
    i = 1;
    while (i<=n)
    {
        r = r*x;
        i++;
    }
    printf("\nresultado: %d", r);

}
