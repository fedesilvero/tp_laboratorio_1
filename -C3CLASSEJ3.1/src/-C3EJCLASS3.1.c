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

int par (int a); // prototipo de la función par.

int main(void) {
	setbuf(stdout, NULL);
	int a;
	int resultado;

		printf("\nIngrese un número: ");
		scanf("%d", &a);

		resultado = par (a);	// invoco la función par.
		printf("%d", resultado);



	return EXIT_SUCCESS;
}

// desarrollo de la función par.

int par (int a){

	if (a %2 == 0){

		return 1;

	}else {

		return 0;
	}
}


/*
Ejercicio 3-1:

Crear una función que permita determinar si un número es par o no.
La función retorna 1 en caso afirmativo y 0 en caso contrario. Probar en el main.

*/
