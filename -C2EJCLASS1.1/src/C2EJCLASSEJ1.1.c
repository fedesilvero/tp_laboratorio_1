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

	int numero1;
	int numero2;
	int resultado;

	printf("Ingrese dos numeros enteros: ");
	fflush(stdin);
	scanf("%d", &numero1);
	scanf("%d", &numero2);

	resultado = numero1 + numero2;

	printf("El resultado es: %d", resultado);

	return EXIT_SUCCESS;
}


/*

Ejercicio 1-1: Ingresar dos números enteros, sumarlos y mostrar el resultado.

*/
