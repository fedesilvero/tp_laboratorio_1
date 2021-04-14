/*
 ============================================================================
 Name        : C2EJ1.c
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
	int numero;

	printf("\nIngrese un numero: ");
	fflush(stdin);

	scanf("%d", &numero);



	if(numero %2==0) {

		printf("\nEl numero es par");
	}
	else{
		printf("\nEl numero es impar");
		}



	return EXIT_SUCCESS;
}



/*
 Aplicando el concepto de Operadores Lógicos con valores booleanos en el condicional:

	Solicitar un número al usuario
	Informar si el mismo es par o impar.
 */
