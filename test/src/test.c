/*
 ============================================================================
 Name        : test.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {


	int a;
	float b;
	char c;

	//punteros

	// sizeof() me dice el tamaño en bytes que ocupa el valor.

	printf("\n El size de a es: %d", sizeof(a));
	printf("\n El size de b es: %d", sizeof(b));
	printf("\n El size de a es: %d", sizeof(c));

	// si antepongo el ampersand & a la variable, me muestra el puntero (dirección de mem donde se guarda).
	// toda dirección es un numero entero.
	printf("\n La dirección de a es: %d", &a);
	printf("\n La dirección de b es: %d", &b);
	printf("\n La dirección de a es: %d", &c);


	return EXIT_SUCCESS;
}
