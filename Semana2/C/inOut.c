#include <stdio.h>


/*
La entrada y salida de  es siempre manejada por la biblioteca estandar, sin importar donde fue originada
o hacia donde se dirige, se tratan como flujos (streams) de caracteres, Un flujo de texto es una secuencia de caracteres divididos
entre lineas  siempre iniciando desde el caracteer cero, hasta varios mas
las funciones mas simples para leer y escribir caracteres suelen ser bastante variadas
siendo getchar() y putcahr().

*/

int main (){
    /*int c;
    c = getchar();

    Cada que se invoca a a getchar, este se encarga de leer el siguiente caracter de entrada de una secuencia de texto
    y lo devuelve como su valor
    la variable c contiene el siguiente caracter de entrada 
    mientras que la variable putchar se encarga de escribir el siguiente caracter cada que se invoca
    

    putchar(c);

    
    en este caso se encarga de escribir c como caracter de texto generalmente en pantalla,
    las llamdas en putchar y printf suelen ser alternadas la salida se realizara segun el orden de invocacion
    

    realicemos un programa simple de copia la entrada y la salida

    lee un caracter
    while (caracter no es indicador del fin del archivo)
        manda a la salida del caracter leido 
        lee un caracter
    */

    int c;

    
    while ((c = getchar()) != EOF){ //EOF significa final del archivo (End of File)
        putchar(c);
    }

    /*
    Lo que aparece en pantalla, al igual que todo programa escrito es un patron de bits 
    si bien se podria usar char para poder guardar el valor de c, sin embargo el tipo EOF nos impide que esto suceda
    debido a que se deberia de declarar un valor suficientemente grande en char para mantener eof
    el while obtiene un caracter, lo asigna a c y entonces prueba si el caracter fue señal de fin del archivo, de no serlo, 
    el mismo while se ejecuta escribiendo el caracter y se repite
    Luego cuando se alcanza el final de la entrada el programa termina 

    Esta version del programa centraliza la entrada y reduce el programa bastante  siendo asi que el programa sea compacto
    y mas facil de leer una vez 
    
    hay varias maneras de poder escribir la proposicion dentro del while, por lo que:
    c = (getchar() != EOF)
    es igual a:
    c = getchar() != EOF

    Esto hace que 

    */

    return 0;
}