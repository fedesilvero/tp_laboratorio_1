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

	int eleccion;
	int temperaturaFahrenheit;
	int temperaturaCelsius;

		printf("\nElija la escala con la que desea trabajar (1-Fahrenheit / 2-Celsius): ");
		scanf("%d", &eleccion);

	if (eleccion == 1){
		printf("\nElegiste trabajar con Fahrenheit.\n");
		printf("\nIngrese cantidad de grados: \n");

		scanf("%d", &temperaturaFahrenheit);
			validacionFah(temperaturaFahrenheit);
			printf("\nLa temperatura es: %d º Fahrenheit \n", temperaturaFahrenheit);

	}
	else{
		printf("\nElegiste trabajar con Celsius. \n");
		printf("\nIngrese cantidad de grados: \n");

		scanf("%d", &temperaturaCelsius);
			validacionCel(temperaturaCelsius);

		printf("\nLa temperatura es de: %d º Celsius \n", temperaturaCelsius);
	}




	return 0;
}





/*
Ejercicio 4-2:

Realizar un programa que permita la carga de temperaturas en celsius y fahrenheit , validando que las temperaturas ingresadas
estén entre el punto de congelación y ebullición del agua para cada tipo de escala.
Las validaciones se hacen en una biblioteca.
Las funciones de transformación de fahrenheit a celsius y de celsius a fahrenheit se hacen en otra biblioteca.

Fahrenheit:
El punto de congelación del agua en Fahrenheit es: 32 Fahrenheit
El punto de ebullición del agua en Fahrenheit es: 212 Fahrenheit

Celsius:

El punto de congelación del agua en Celsius es:  0 grados (centígrados)
El punto de ebullición del agua en Celsius es: 100 grados (centígrados)

*/
