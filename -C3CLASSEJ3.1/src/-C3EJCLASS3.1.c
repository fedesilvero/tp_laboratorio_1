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

int par (int a); // prototipo de la funci�n par.

int main(void) {
	setbuf(stdout, NULL);
	int a;
	int resultado;

		printf("\nIngrese un n�mero: ");
		scanf("%d", &a);

		resultado = par (a);	// invoco la funci�n par.
		printf("%d", resultado);



	return EXIT_SUCCESS;
}

// desarrollo de la funci�n par.

int par (int a){

	if (a %2 == 0){

		return 1;

	}else {

		return 0;
	}
}


/*
Ejercicio 3-1:

Crear una funci�n que permita determinar si un n�mero es par o no.
La funci�n retorna 1 en caso afirmativo y 0 en caso contrario. Probar en el main.

*/
