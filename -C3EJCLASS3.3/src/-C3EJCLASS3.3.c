/*
 ============================================================================
 Name        : 3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int entero (int a);	// prototipo de la funci�n.

int main(void) {
	setbuf(stdout, NULL);
	int numero;
	int resultado;


	resultado = entero (numero); // invoco a la funci�n.

	printf("\nEl resultado es: %d", resultado);



	return EXIT_SUCCESS;
}

// desarrollo de la funci�n.
int entero (int a){

	int numeroEntero;

	printf("\nIngrese un n�mero entero: ");
	scanf("%d", &a);

	numeroEntero = a;

	return numeroEntero;

}


/*

Ejercicio 3-3:

Crear una funci�n que pida el ingreso de un entero y lo retorne.

 */
