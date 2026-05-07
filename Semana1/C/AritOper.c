#include <stdio.h>  

int maint(){
    int a = 10, b = 4, res;

    // Suma
    res = a + b;
    printf("a + b is %d\n", res);

    // Resta
    res = a - b;
    printf("a - b is %d\n", res);

    // Multiplicacion
    res = a * b;
    printf("a * b is %d\n", res);

    // Division
    res = a / b;
    printf("a / b is %d\n", res);

    // Modulo
    res = a % b;
    printf("a %% b is %d\n", res); // escrbir %% dentro del print f nos permite imprimir de manera correcta el simbolo '%'

    /*
Los operadores matematicos en c al igual que en cualquier lenguaje de programacion nos permite realizar operaciones simples como
la suma, la diferencia, la multiplicacio, la division y el modular, que en palabras simples nos ayuda a tener el primer sustracto
de una division entre el primer operando y el segundo operando, estos primeros son conocidos como operadores aritmeticos binarios
Ademas de que todos los operadores aqui mostrados pueden ser usados con float y double, excepto la operacion modulo
*/

    int z = 10, rest;

    rest = z++;

    printf("z is %d, rest is %d\n", z, rest);

    rest = z--;

    printf("z is %d, rest is %d\n", z, rest);

    rest = ++z;

    printf("z is %d, rest is %d\n", z, rest);

    rest = --z;

    printf("z is %d, rest is %d\n", z, rest);

    printf("+z is %d\n", +z);
    printf("-z is %d", -z);

/*
por otro lado, existen los moperadores unitarios, que solo seran 4
-- decremento ejemplo --a o aa--
++ incremento ejemplo ++a o a++
+ retorna el valor del operando +a
- retorna el valor negativo -a
*/

    int var;

    // expresion con multiples operadores
    var = 10 * 20 + 15 / 5;

    printf("%d", var);
    
/*
En c, los operadores respetan la jerarquia de operaciones basicas en matematicas
*/

    return 0;
}

