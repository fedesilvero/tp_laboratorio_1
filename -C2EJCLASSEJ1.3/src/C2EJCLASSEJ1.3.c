/*
 ============================================================================
 Name        : 3.c
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
	int numero3;
	int numeroMedio;



		printf("Ingrese 3 n�meros: ");
		scanf("%d", &numero1);

		printf("Ingrese 2 n�meros m�s: ");
		scanf("%d", &numero2);

		printf("Ingrese un �ltimo n�mero: ");
		scanf("%d", &numero3);



	if((numero1 < numero2 && numero1 > numero3) || (numero1>numero2 && numero1<numero3) ){
				numeroMedio= numero1;
				printf("\nEl n�mero medio es el: %d", numeroMedio);

			} else if ((numero2 < numero1 && numero2 > numero3) || (numero2>numero1 && numero2<numero3)){
				numeroMedio= numero2;
				printf("\nEl n�mero medio es el: %d", numeroMedio);

			} else if ((numero3 < numero1 && numero3 > numero2) || (numero3>numero1 && numero3<numero1)){
				numeroMedio= numero3;
				printf("\nEl n�mero medio es el: %d", numeroMedio);

			} else {
				printf("\nNo existe n�mero medio.");
			}


	return 0;
}



/*
Ejercicio 1-3: ingresar 3 n�meros y mostrar el n�mero del medio, s�lo si existe. En caso de que no
exista tambi�n informarlo.
*/
