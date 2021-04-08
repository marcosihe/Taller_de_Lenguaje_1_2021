#include <stdio.h>
#include <stdlib.h>

const DIM = 10;

void main()
{
    int Buff[DIM], i;
    int *pBuff = NULL;

    pBuff = Buff; // = &Buff[0];
    // *** PRIMERA FORMA DE RECCORER UN ARREGLO ***
    printf("*** Primera forma de recorrer una arreglo. Puntero auxiliar pBuff ***\n");
    for (int i = 0; i < DIM; i++)
    {
        // *(pBuff + i) = 10 + rand() % (41); // Asigna un valor aleatorio y muestra el puntero
        // printf("%4d", *(pBuff + i));       // Lo muestra
        //Lo anterior puedo resumirlo en una sola sentencia:
        printf("%4d ", *(pBuff + i) = 10 + rand() % (41));
    }

    // *** Segunda forma de recorrer un arreglo ***
    printf("\n\n*** Segunda forma de recorrer un arreglo. Subindexada Buff[i] ***\n");
    for (int i = 0; i < DIM; i++)
    {
        printf("%4d ", Buff[i]);
    }
    getchar();

    // *** Tercera forma de recorrer un arreglo ***
    printf("\n\n*** Tercera forma de recorrer un arreglo. Indexada *(Buff + i) ***\n");
    for (int i = 0; i < DIM; i++)
    {
        printf("%4d ", *(Buff + i));
    }
    getchar();
}