/*
 * Este programa fue realizado como la tarea#11 el 2 de octubre de 2018,
 * para la clase de fundamentos de programación.
 *
 * Su proposito es resolver una ecuacion cuadratica mediante
 * formula general dados los valores de a, b y c por el usuario.
 *
 * Fecha: 2 de octubre de 2018
 * Autor: Eduardo Parga Vela
 * Correo: A01411896@itesm.mx
 */
#include <stdio.h>
#include <math.h> //Biblioteca usada para funciones matematicas
#include <ctype.h> //Biblioteca usada para funciones de caracter.

int main(void) {
    //Declaracion de variables.
    double x1;
    double x2;
    double radical;
    int a;
    int b;
    int c;

    //Se le pide al usuario el valor de las variables a, b y c.
    printf("Escribe el valor de 'a':");
    scanf("%i", &a);
    printf("Escribe el valor de 'b':");
    scanf("%i", &b);
    printf("Escribe el valor de 'c':");
    scanf("%i", &c);

    //Explicacion if: Si alguno de los valores de 'a', 'b' o 'c' no son númericos,
    //el valor que regresara por la funcion isdigit sera 0.
    if(isdigit(a)==0 || isdigit(b)==0 || isdigit(c)==0){

        //Explicacion if: Si el valor de 'a' es igual a 0, no se puede ejecutar
        //ya que no se puede dividir entre 0.
        if(a==0){
            printf("Valor de 'a' en 0, no se puede dividir.");
        } else {

            //Si 'a' no es 0, se calcula el valor del radical y se imprime.
            radical=pow(b,2)-4*a*c;
            printf("radical= %lf\n", radical);

            //Si el valor del radical es negativo, no se ejecuta ya que
            //no se puede sacar raiz de numeros negativos.
            if (radical<0){
                printf("Radical negativo no se puede sacar raiz.");
            } else {
                //Se calcula la ecuacion cuadratica mediante formula general y se
                //imprime en los valores de x1 y x2.
                x1=-b+sqrt(radical)/2*a;
                x2=-b-sqrt(radical)/2*a;

                printf("El valor de x1 es: %lf\n", x1);
                printf("El valor de x2 es: %lf\n", x2);
            }
        }
    } else {
        //Se imprime esta linea si el valor isdigit
        // obtenido de a, b, o c es igual a 1.
        printf("\nAlguno de los valores no es numerico.");
    }

    return 0;
}