/*
 ============================================================================
 Name        : C2EJCLASS.c
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
	int acumulador=0;
	float promedio;



for ( int i=0; i < 5 ; i++){

	printf("Ingrese 5 numeros enteros: ");
	fflush(stdin);
	scanf("%d", &numero);
	acumulador= acumulador + numero;


}

	promedio= (float) acumulador / 5;

	printf("El promedio es: %.2f", promedio);

	return EXIT_SUCCESS;
}
