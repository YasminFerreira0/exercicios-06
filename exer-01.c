#include <stdio.h>
void main ()
/*Faça um programa que imprima os valores pares de 0 (zero) a 10 (dez).*/
{
    int i = 0;

    while (i <= 10) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
        i++;
    }
}
