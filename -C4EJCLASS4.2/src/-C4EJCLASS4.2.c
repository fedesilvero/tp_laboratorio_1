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
			printf("\nLa temperatura es: %d � Fahrenheit \n", temperaturaFahrenheit);

	}
	else{
		printf("\nElegiste trabajar con Celsius. \n");
		printf("\nIngrese cantidad de grados: \n");

		scanf("%d", &temperaturaCelsius);
			validacionCel(temperaturaCelsius);

		printf("\nLa temperatura es de: %d � Celsius \n", temperaturaCelsius);
	}




	return 0;
}





/*
Ejercicio 4-2:

Realizar un programa que permita la carga de temperaturas en celsius y fahrenheit , validando que las temperaturas ingresadas
est�n entre el punto de congelaci�n y ebullici�n del agua para cada tipo de escala.
Las validaciones se hacen en una biblioteca.
Las funciones de transformaci�n de fahrenheit a celsius y de celsius a fahrenheit se hacen en otra biblioteca.

Fahrenheit:
El punto de congelaci�n del agua en Fahrenheit es: 32 Fahrenheit
El punto de ebullici�n del agua en Fahrenheit es: 212 Fahrenheit

Celsius:

El punto de congelaci�n del agua en Celsius es:  0 grados (cent�grados)
El punto de ebullici�n del agua en Celsius es: 100 grados (cent�grados)

*/
