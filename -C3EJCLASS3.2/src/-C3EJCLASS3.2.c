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

float flotante (float a); // prototipo de función flotante.

int main(void) {
	setbuf(stdout, NULL);
	float numero;

	printf("Ingrese un número flotante: ");
	scanf("%f", &numero);

	numero = flotante(numero);	// invoco a la función.



	return EXIT_SUCCESS;
}

// desarrollo de la función flotante.
float flotante (float a){

	float numeroFlotante;
	numeroFlotante = a;
	printf("%.2f", numeroFlotante);

	return numeroFlotante;
}

/*
Ejercicio 3-2:

Crear una función que muestre por pantalla el número flotante que recibe como parámetro.

*/
