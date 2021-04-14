/*
 ============================================================================
 Name        : C1EJ-1b.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h> // precargo las bibliotecas que voy a usar.
#include <stdlib.h>

int main(void) {		//inicio el programa.
	setbuf(stdout, NULL);

	float sueldo;		//declaro variable con float porque podrìa ser decimal.
	float aumento;

	printf("Ingrese sueldo: ");	//muestro por mensaje el dato que quiero tomar.
	scanf("%f", &sueldo); 		//tomo el mensaje y lo asigno a la variable sueldo. Recordar el &.

	aumento= (sueldo*10) /100;	//calculo aumento y lo asigno a la variable aumento.

	sueldo= sueldo + aumento;	//asigno a sueldo el valor con el aumento.

	printf("Su sueldo es: %2.f", sueldo);	//muestro el sueldo con aumento, puse el "2" x la cant. de decimales.


	return EXIT_SUCCESS; // le dice a mi programa que salio todo ok.
}



/*

Consigna:

b-Entrada/salida

Pedir el sueldo al usuario. Sumarle un 10% e informarle cuál será su sueldo con aumento.

 */

