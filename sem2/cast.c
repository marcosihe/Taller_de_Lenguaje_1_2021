#include <stdio.h>

int main()
{
    int a = 300;
    unsigned int b = 1;
    float c = 3.2;

    int varInt = 11;
    long int varLongInt = 1.2; // Se hace el cast automático y no considera la parte decimal pues es un long int
    float varFloat = 3.2;

    //Promoción
    printf("*** Promoción ***\n");
    varFloat = varInt + varLongInt;
    printf("int varFloat = %lf", varFloat);

    // Degradación
    printf("\n\n*** Degradación ***");
    a = b + c;
    printf("\nint a = %d", a);
    printf("\nsuma  d + c = %.2f", b + c);

    char d = a;
    printf("\nd = %d", d);

    // Recorte de bits
    printf("\n\n*** Recorte de bits ***");
    char e = 300;
    printf("\ne = %d", e);
    /*
    Se esperaría que imprimiera por pantalla e = 300, sin embargo, al ser de tipo char, solo puede almacenar 
    hasta el valor 255, entonces se efectúa un truncamiento, eliminando los bits más significativos (en binario), 
    quedando un número en binario el cual en este caso corresponde al 44 en decimal.
    */
    getchar();

    return 0;
}