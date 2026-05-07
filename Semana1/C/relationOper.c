#include <stdio.h>  


/*
Los operadores relacionales que se usan en C, son simbolos que se usan para comparar entre dos valores para entender 
el tipo de relacion que comparten estos dos valores el resultado que obtenemos de esta comparacion, es de un tipo booleano
*/
int main(){

    /*
    igual a == la cual debe de comparar si o si cierta condicion, ejemplo: 5==5 retorna verdadero
    No igual a != si cierto valor no cumple cierta condicion, ejemplo 5 != 5 es un valor falso
    mayor que > si un valor es mayor a cierto valor sin incluir el primero, retornara algo, ejemplo: 6>5 retorna verdadero
    Menor que < misma idea que el mayor, ejemplo 6<5 retorna falso
    Mayor igual a >=, al igual que con mayor a, solo que en esta ocasion incluimos el valor inicial 5>=5 retorna verdadero
    Menor igual a <= misma idea que mayor igual a, ejemplo: 5<=5 retorna verdadero
    A continuacion codigo mas completo
    */
    int a = 10, b = 4;
    if(a > b){
        printf ("a es mayor que b\n");
    }else{
        printf("a no es mayor que b\n");
    }

    if (a>=b){
        printf("a es igual o mayor que b\n");
    }else{
        printf("a no es mayor o igual que b\n");
    }

    if (a<b){
        printf("a es menor que b\n");
    }else{
        printf("a no es menor que b\n");
    }

    if (a<=b){
        printf("a es menor o igual que b\n");
    }else{
        printf ("a no es menor o igual a b\n");
    }

    if (a==b){
        printf("a es igual a b\n");
    }else {
        printf ("a no es igual a b\n");
    }

    if (a!=b){
        printf("a no es igual a b\n");
    }else{
        printf("a es igual a b\n");
    }



    return 0;
}