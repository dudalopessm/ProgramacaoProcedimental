#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Leia um valor inteiro em segundos e imprima-o em horas, minutos e segundos.

int main ()
{
    double h, min, t;
    printf("Digite o tempo em segundos:\n");
    scanf("%lf", &t);

    h = t/3600;
    min = t/60;

    printf("O valor %.4lf segundos em horas equivale a %.4lf em horas e %.4lf em minutos.\n", t, h, min);

    system("pause");
    return 0;
}