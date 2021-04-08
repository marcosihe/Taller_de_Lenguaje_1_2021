#include <stdio.h>

int main()
{
    int a = 11;
    unsigned long int d = 1;
    float c = 3.2;
    double e = 1.0;
    long double f = 2.0;

    d = a + d; // a es convertido implícitamente en un unsigned int
    c = a + c; // a es implícitamente convertido en un float
    e = a + e; // a es implícitamente convertido en un double
    f = a + f; // a es implícitamente convertido en un long double

    printf("int a = %ld", a);
    printf("\nunsigned long int d = %ld", d);
    printf("\nfloat c = %f", c);
    printf("\ndouble e = %lf", e);
    printf("\nlong double f = %Lf", f);
    getchar();

    return 0;
}