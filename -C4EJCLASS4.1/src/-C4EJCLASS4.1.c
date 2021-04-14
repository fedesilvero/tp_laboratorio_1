/*
 ============================================================================
 Name        : 1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int numero;	// guarda el numero ingresado por el usuario
	int factorial=1;	//inicializo en 1 porque si lo hago en 0 todas las multiplicaciones darian 0.

		printf("\nIngrese un número para calcular el factorial: ");
		scanf("%d", &numero);

			for (int i=1; i <= numero ; i++){	// inicializo i en 1 para poder usarla como multiplicacion

				factorial = factorial * i;	// asigno a factorial la multiplicacion de el por lo que vale i en cada iteracion
			}								// es decir: 1,2,3,4... y asi hasta llegar al numero ingresado por el usuario
											// por eso hay que usar i<=numero
	printf("\nEl factorial es: %d", factorial);		//muestro el factorial


	return 0;
}

/*

Ejercicio 4-1:

Realizar un programa EN EL MAIN que permita calcular y mostrar el factorial de un número.
Por ejemplo:

5! = 5*4*3*2*1 = 120

 */
