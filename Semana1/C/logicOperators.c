#include <stdio.h>


/*
se pueden combinar distintos tipos de condiciones que los operadores logicos retornan entre 1 y 0, 
donde 1 es verdadero y 0 es falso
Existen distintos tipos de operadores logicos, a continuacion se muestran:

OPERADOR AND  (&&)
solo retorna a 1 si el resultado no es cero
x   y   x&&y
1   1   1
1   0   0
0   1   0
0   0   0

OPERADOR OR (||)
Retorna a 1 cuando cualquiera de los operandos tiene de entrada 1
X   Y   X||Y
1   1   1
1   0   1
0   1   1
0   0   0

OPERADOR NOT (!)
Nos da en pocas palabras, el opuesto de la entrada
X   !X
1   0
0   1
 */
int main (){
//ejemplos de los operandos en codigo

    int a = 10, b = 20, c = -1, d = 21;

    if (a>0 && b>0){
        printf("Ambos valores son mayores a cero\n");
    }else{
        printf("Ambos valores son menores que cero\n");
    }

    

    if (c > 0 || d > 0){
        printf ("Cualquiera de los dos valores es mayor que cero\n");
    }else{
        printf ("Ambos valores son menores que cero\n");
    }

    if(!(a > 0 &&  b > 0)){
        printf("Ambos valores son mayores que cero\n");
    }else{
        printf("Ambos valores con menores que cero\n");
    }
    //NT: aun es algo confuso, pero practicamente (dejemoslo) en que siemrpe lanzara el else de la condicion dentro del NOT
    return 0;


    return 0;
}