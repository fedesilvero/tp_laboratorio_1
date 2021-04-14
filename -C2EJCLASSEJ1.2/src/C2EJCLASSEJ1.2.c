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

int main(void) {
	setbuf(stdout, NULL);

	int numero;
	int mayor;
	int flag= 1;

	for (int i=0; i < 3; i++){

		printf ("\nIngrese un número: ");
		scanf("%d", &numero);
		if (flag){
			mayor = numero;
			flag=0;

		}else if (numero > mayor){
			mayor = numero;
		}


	}

	printf("\nEl mayor de los tres es: %d", mayor);


	return EXIT_SUCCESS;
}


/*
Ejercicio 1-2: ingresar 3 números y mostrar el mayor de los tres.
*/
