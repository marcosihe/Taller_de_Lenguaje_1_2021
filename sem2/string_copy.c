#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char Buff[] = "cadena";
    char Buff2[7];

    char *strcpy(Buff2, Buff);

    printf("La cadena copiada es: %s", Buff2);
    return 0;
}