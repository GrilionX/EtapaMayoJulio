#include <stdio.h> 

/*
Vamos a realizar un programa simple de conversion de temperaturas en las cuales de manera simple sera la siguiente manera
0   -17
20  -6
40  4
60  15
80  26
100 37
120 48
140 60
160 71
180 82
200 93
220 104
240 115
260 126
280 137
300 148

Este es elm primer ejercicio de el libro de programacion C, por lo que se usara el metodo ahi usado
*/

int main(){

    printf ("===== CONVERSOR DE TEMPERATURAS FARENHEIT A CELSIUS =====\n");
    //primero declaramos las variables
    float fahr, celsius; //se declara con float para que las temperaturas en celsius sean exactas y las operaciones sean simples
    int lower, upper, step;

    lower = 0; //valor de inicio
    upper = 300; //valor final
    step = 20; //incremento en cada paso

    fahr  = lower; //con esto se da a entender que el valor de inicio de fahr, es lower

    while (fahr <= upper){
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf ("%3.0f %6.1f\n", fahr, celsius);
        fahr += step;

        /*El codigo hace que se ejecute un ciclo while, en el cual mientras que la variable fahr sea menor o igual a upper
        se ejecutara y hara lo que este dentro del bucle, en este casi calculara los celsius del programa 
        una vez se haya calculado mediante la formula de conversion, imprimira ek valor mediante float y llamamos a fahr y celsius*/
    }
}