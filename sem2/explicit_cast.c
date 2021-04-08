#include <stdio.h>>

int main()
{
    int a = 125, b = 65;
    double c;

    c = a / b;
    printf("*** Resultado sin cast ***\n");
    printf("c = %d/%d --> c = %f", a, b, c);

    printf("\n\n*** Resultasdo con cast explícito ***\n");
    c = (double)a / b;
    printf("c = (double)%d/%d --> c = %f", a, b, c);

    getchar();

    return 0;
}