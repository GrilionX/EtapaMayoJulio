#include <stdio.h> 

/*
Pequeño ejemplo del operando &&
Si el primero operando de la condicion ess falsa, entonces no se evaluara la condicion, asi que siermpre devolvera falso
*/

int main()
{
    int a = 10, b = 5, c = 0;

    // c es falso, por lo que la operacion (a/b), no se evaluara
    if (c && (a = a / b))
        printf("Esto no se imprime\n");
    printf("%d", a);
    return 0;
}