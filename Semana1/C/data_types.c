#include <stdio.h>  
#include <stdbool.h>  /* para poder explicar de mejor manera todos los tipos de datos primitivos, hacemos uso de 
la biblioteca stdbool.h que es la estandar para manejar tipos de datos booleanos*/

int main(){
    int var = 22;
    printf ("Var = %d\n", var);

    /*En este caso hacemos uso de las variable de enteros que es lo mismo a decir en C int
    guardamos el valor 22 en una variable var, para poder imprimo esto mismo hacemos uso del operador
    %d que se usa normalmente para imprimir valores enteros, y para que identifique que estamos imprimiendo
    fuera de las comillas llamamos a la variable var y el resultado se imprime correctamente*/

    char ch = 'A';
    printf ("ch = %c\n", ch);
    /*En este casi, el identificador char, solo llega a contener un tipo de dato de un caracter el cual
    tiene un peso de entre -128 a 127, y para poder imprimir de manera correcta se coloca el %c*/

    float fl = 3.13;
    printf ("fl = %f", fl);
    /*El tipo de dato float se usa para numeros decimales y para imprimir numeros con decimales (o fraccionarios)
    y se usa el */

    double dl = 4.1345568;
    printf ("dl = %lf.2", dl);

    /* A diferencia de float, double tiene una potencia mayor en la cual puede calcular de manera mas exacta, con una 
    capacidad de 8 bytes, ademasd de que se imprime con %lf, normalmente si queremos un numero determinado de decimales a imprimir
    colocamos un '.' y el numero de decimales aparezcan en pantalla*/

    bool isCProgrammingFunny = true; //se declara unn bool con la asignatura de verdadero
    // bool isFishTasty = false; y una donde sea falso, con otra declaracion

    if (isCProgrammingFunny){
        printf ("C is funny");
    }
    /*En este caso declaramos un bucle if que siempre que se cuumpla que el primer booleano sea verdadero,
    imrpimira el mensaje dentro del if, se puede incluir un bool sin la necesidad de la biblioteca, peros solo
    dara y recibir datos de 0 y 1 ya que tiene peso de un byte, al igual que con int, podemos usar el
    %d para imprimir el valor del booleano*/

    void greet(); //se llama a la funcion void creada

    printf("The size of int: %d\n", sizeof(int));
    printf("The size of char: %d\n", sizeof(char));
    printf("The size of float: %d\n", sizeof(float));
    printf("The size of double: %d", sizeof(double));

    return 0;
}

void greet(){
    printf ("Hello, this an empty function");
    return 0;

    /*La funcion al ser una expresion que devuelve a cero, lo mejor es declararla en void y tenga un espacio vacio
    la cual solo imprimira una expresion simple con printf*/
}