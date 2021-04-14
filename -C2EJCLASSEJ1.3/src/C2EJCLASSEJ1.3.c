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



		printf("Ingrese 3 números: ");
		scanf("%d", &numero1);

		printf("Ingrese 2 números más: ");
		scanf("%d", &numero2);

		printf("Ingrese un último número: ");
		scanf("%d", &numero3);



	if((numero1 < numero2 && numero1 > numero3) || (numero1>numero2 && numero1<numero3) ){
				numeroMedio= numero1;
				printf("\nEl número medio es el: %d", numeroMedio);

			} else if ((numero2 < numero1 && numero2 > numero3) || (numero2>numero1 && numero2<numero3)){
				numeroMedio= numero2;
				printf("\nEl número medio es el: %d", numeroMedio);

			} else if ((numero3 < numero1 && numero3 > numero2) || (numero3>numero1 && numero3<numero1)){
				numeroMedio= numero3;
				printf("\nEl número medio es el: %d", numeroMedio);

			} else {
				printf("\nNo existe número medio.");
			}


	return 0;
}



/*
Ejercicio 1-3: ingresar 3 números y mostrar el número del medio, sólo si existe. En caso de que no
exista también informarlo.
*/
