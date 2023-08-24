#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Implemente um programa em C que calcule o ano de nascimento de uma pessoa a partir de sua idade e do ano atual.

int main ()
{
    int a, i, nasc;
    printf("Digite a idade da pessoa:\n");
    scanf("%d", &i);

    printf("Digite o ano atual:\n");
    scanf("%d", &a);

    nasc = a - i;

    printf("O ano de nascimento da pessoa eh %d.\n", nasc);

    system("pause");
    return 0;
}