/*
 ============================================================================
 Name        : 2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

float flotante (float a); // prototipo de funci�n flotante.

int main(void) {
	setbuf(stdout, NULL);
	float numero;

	printf("Ingrese un n�mero flotante: ");
	scanf("%f", &numero);

	numero = flotante(numero);	// invoco a la funci�n.



	return EXIT_SUCCESS;
}

// desarrollo de la funci�n flotante.
float flotante (float a){

	float numeroFlotante;
	numeroFlotante = a;
	printf("%.2f", numeroFlotante);

	return numeroFlotante;
}

/*
Ejercicio 3-2:

Crear una funci�n que muestre por pantalla el n�mero flotante que recibe como par�metro.

*/
