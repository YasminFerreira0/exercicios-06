#include <stdio.h>
void main ()
{
    int n1, n2;
    float res;
    printf("Informe o primeiro numero: ");
    scanf("%d", &n1);

    do{
        printf("\nInforme o segundo numero, diferente de zero: ");
        scanf("%d", &n2);
    }while (n2 == 0);
    res = (float) n1/n2;
    printf("\no resultado da divisao e :%g", res);
}
