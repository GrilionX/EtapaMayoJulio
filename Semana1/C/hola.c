#include <stdio.h> 
/*
La biblioteca estandar de C se llama stdio.h la cual se encarga de las funciones basicas de C como imprimir o hacer calculos sinmples
ademas de poder tan solo inciar un programa en si, para pdoer incluirla en cualquier programa debe de ser llamada con #include
que puede llamar a cualquier biblioteca que se le indique, tales como math.h, stdbool.h etc
*/

int main (){
    /*
    El corazon de cualquier programa en C es el main, sin una funcion main, el programa simplemente no se incializa y da un error fatale en el sistema
    para ello siempre se debe de incluir un main para que el programa arranque, o en su defecto una funcion void
    */
    printf ("Hello world\n");

    /*
    el printf como su mismo nombre lo indica, tiene como funcion imprimir algo en pantalla, si solo queremos mostrar un mensaje
    lo que debemos de hacer es poner el texto entre comillas y el texto aparecera de manera simple en pantalla, si es una simple linea
    puede ser el mensaje asi mismo, o poner un \n para hacver salto de linea, que mas adelante ayudara a imprimir mas lineas de poco en poco
    */
   printf ("First programm in C\n");
}


/*
otras funciones de la diagonal inversa, es que esta se usa para:
\t tabular
\b para retroceso
\" para comillas
\\ para la propia barra a la inversa
*/
