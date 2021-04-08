#include <stdio.h>>

int main()
{
    int a = 13;   // Integer a
    char b = 'g'; // Character b
    a = b;        // b convierte implícitamente a int según la tabla ascii a 103

    printf("a = %ld", a);
    getchar();
    return 0;
}