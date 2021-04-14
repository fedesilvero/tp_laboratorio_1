/*
 ============================================================================
 Name        : -C5ARRAY2.c
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

	int edad [10];
	float sueldo [10];
	float sueldoPromedio;
	float acumSueldo= 0;
	int contadorSueldo =0;


	for (int i=0; i<10; i++){

		// pido edad.
		printf("\nIngrese su edad: ");
		scanf("%d", &edad[i]);

		// pido sueldo.
		printf("\nIngrese su sueldo: ");
					scanf("%f", &sueldo[i]);

					acumSueldo = acumSueldo + sueldo[i];
					contadorSueldo++;

	}


	sueldoPromedio = acumSueldo / contadorSueldo;

printf("\nEl sueldo promedio es: %.2f", sueldoPromedio);


	return EXIT_SUCCESS;
}


/*

Ejercicio array paralelo: de 10 empleados, cargar edad y sueldo.
Se pide ingresar los datos consecutivamente y calcular el sueldo promedio.

 */
