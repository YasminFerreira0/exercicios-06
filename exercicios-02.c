#include <stdio.h>
void main ()
{
    float n1, n2, media;
    do{
        printf("Informe a primeira nota no intervalo de zero a dez: ");
        scanf("%f", &n1);
    }while (n1<0 || n1>10);
    do{
        printf("Informe a segunda nota no intervalo de zero a dez: ");
        scanf("%f", &n2);
    }while (n2<0 || n2>10);

    media = (n1 + n2)/2;
    printf("\nMedia das notas: %g", media);

}
