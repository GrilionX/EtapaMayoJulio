#include <stdio.h> 

//Ejercicio proopuesto por el libro: celsius a farenheit

int main (){
    float celsius, fahr;
    int lower, upper, step;

    lower = 0;
    upper = 200;
    step = 10;

    celsius = lower;

    while (celsius <= upper){
        fahr = (celsius * (9.0/5.0)) + 32;
        printf ("%3.0f %6.1f\n ", celsius, fahr);
        celsius += step;
    }
    
}