/*
 ============================================================================
 Name        : -C5ARRAY1.c
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

int numeros [5];
int resultado= 0;


// pido el ingreso de 5 números y calculo la suma.
	for (int i=0; i<5; i++){


		printf("\nIngrese 5 numeros: ");
		scanf("%d", &numeros[i]);

		resultado = resultado + numeros [i];
	}


	// muestro los números ingresados.
		for (int i=0; i<5; i++){

				printf("\nLos números ingresados son: %d", numeros[i]);
			}



	printf("\nLa suma de los 5 números es: %d", resultado);


	return EXIT_SUCCESS;
}

/*

Ejercicio 5-1:Pedir el ingreso de 5 números. Mostrarlos y calcular la sumatoria de los mismos.

 */
