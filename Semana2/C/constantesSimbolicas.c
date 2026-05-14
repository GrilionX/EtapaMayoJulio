#include <stdio.h>  
#define LOWER 0
#define UPPER 300
#define STEP 20

/*
Con estos mismos defines, hacemos que las lineas de trabajo puedan hacerse mas sencillas, por ejemplo, 
si no trabajaramos directamente con la biblioteca math.h, podriamos definir de manera constante el valor de pi
ademas de que los valores despues de definir nuestra constante global, no solo se limitan numeros, si no tambien llegando a
cadenas de textos pudiendose hacer de mejor manera entre comillas.
Una buena practica de programacion es escribir las constantes Simbolicas en mayusculas para que no cause confusiones
a la hora de escribir codigo

A continuacion se escribira nuvamente el programa de conversion de temperaturas con estas nuevas constantes globales
*/

int main (){
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr += STEP){
        printf (" %3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
    return 0;
}