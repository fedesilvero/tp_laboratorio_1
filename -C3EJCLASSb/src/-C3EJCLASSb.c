/*
 ============================================================================
 Name        : -C3EJCLASSb.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int suma (int a, int b); // prototipo de función suma.
int resta (int a, int b); // prototipo de función resta.


int main(void) {
	setbuf(stdout, NULL);

	int numero1;
	int numero2;
	int resultado;

	char operacion;

	// solicito el ingreso de numeros y los asigno a las variables numero1 y numero2.
	printf("\nIngrese un número: ");
	scanf("%d", &numero1);
		while (numero1 < 10 || numero1 > 100){  // valido que esté entre 10 y 100.
			printf("\nNúmero inválido. Inténtelo nuevamente: ");
			scanf("%d", &numero1);
		}

	printf("\nIngrese otro número: ");
	scanf("%d", &numero2);
		while (numero2 < 10 || numero2 > 100){	// valido que esté entre 10 y 100.
				printf("\nNúmero inválido. Inténtelo nuevamente: ");
				scanf("%d", &numero2);
		}


		// solicito ingreso de tipo de operación y la asigno a la variable operación.
		printf("\nIngrese operación ('s' para sumar o 'r' para restar): ");
		fflush(stdin);
		scanf("%c", &operacion);

			while(operacion != 's' && operacion != 'r'){	// valido que sea s o r.
				printf("\nOperación inválida. Reingrese operación: ");
				fflush(stdin);
				scanf("%c", &operacion);
			}


			if (operacion == 's'){

				resultado = suma (numero1, numero2); // invoco a la función suma.
			} else {
				resultado = resta (numero1, numero2); // invoco a la función resta.
			}


printf("\nEl resultado es: %d", resultado);

	return EXIT_SUCCESS;
}

// desarrollo de la función suma.
int suma (int a, int b){
	int total;
		total= a + b;
		return total;

}

// desarrollo de la función resta.

int resta (int a, int b){
	int total;
		total = a - b;
		return total;
}



/*

 b-Funciones
- Limpie la pantalla (Listo)
- Asigne a las variables numero1 y numero2 los valores solicitados al usuario (Listo)
- Valide los mismos entre 10 y 100 (Listo)
- Asigne a la variable operacion el valor solicitado al usuario (Listo)
- Valide el mismo 's'-sumar, 'r'-restar (Listo)
- Realice la operación de dichos valores a través de una función (Listo)
- Muestre el resultado por pantalla. (Listo)

 */
