/*
 ============================================================================
 Name        : C3CLASSEJa.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int realizarDescuento(int num1);

int main(void) {
	setbuf(stdout, NULL);

	int numero1; // declaro variable numero1.
	int resultado;

	printf("Ingrese un número entre 10 y 100: "); // Aviso al usuario que quiero que ingrese un valor.
	scanf("%d", &numero1); // Asigno a la variable numero1 el valor solicitado al usuario.

	while (numero1 < 10 || numero1 > 100){	// Valido que el nro sea entre 10 y 100.
		printf("Numero inválido. Inténtelo de nuevo: ");
		scanf("%d", &numero1);
	}

	resultado = numero1 - realizarDescuento ();
	printf("El resultado es: %d", resultado);


	return EXIT_SUCCESS;
}

int realizarDescuento(int num1){	// Realizo un descuento del 5% a dicho valor a través de una función.

	int descuento;
	int descuentoResultado;

	descuento = num1 * 5 / 100;

	descuentoResultado = num1 - descuento;
	return descuentoResultado;

}


/*
a-Funciones
- Limpie la pantalla
- Asigne a la variable numero1 un valor solicitado al usuario
- Valide el mismo entre 10 y 100
- Realice un descuento del 5% a dicho valor a través de una función llamada realizarDescuento()
- Muestre el resultado por pantalla

 */
