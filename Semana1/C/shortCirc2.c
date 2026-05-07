#include <stdio.h>  

/*
Los operadores logico OR xomo se indica en la explicacion anterior, siempre que uno de los operadores
tenga output 1, la salida sera siempre sera verdadera, pero si la primera es verdadera, la segunda no se operara
Esto se debe a que incluso si los demas operando son falsos, la salida original sera verdadera
*/

int main()
{
    int a = 10, b = 5, c = 1;

    //C es verdadero, por lo que (a/b) no se realiza
    if (c || (a = a / b))
        printf("This will be printed\n");
    printf("%d\n", a);


    int i = 1;
    if (i++ && (i == 1))
        printf("GrilionX\n");
    else
        printf("Coding\n");
    /*
    explicacion de la salida "Coding":
    i tiene comom valor inicial 1,
    i++ aumenta de 1 en uno, cuando aumenta pasa a ser 2
    en la segunda condicion, se indica que i debe de ser igual a 1
    se evalua con los relacionales, es falso, la salida es falsa e imprime el else 
    */
    
    return 0;
}