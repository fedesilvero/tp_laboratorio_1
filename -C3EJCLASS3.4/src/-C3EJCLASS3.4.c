/*
 ============================================================================
 Name        : 4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int Sumar1(int number1, int number2); // prototipo 1
int Sumar2(void);	// prototipo 2
void Sumar3(int a, int b); // prototipo 3
void Sumar4(void);	// prototipo 4


int main(void) {
	setbuf(stdout, NULL);

	int numero1;
	int numero2;
	int totalFuno;
	int totalFdos;

// para funcion 1
printf("\nIngrese un número entero: ");
scanf("%d", &numero1);

printf("\nIngrese otro número entero: ");
scanf("%d", &numero2);


	totalFuno = Sumar1 (numero1, numero2);	// invoco a la funcion 1

printf("\nEl total de la suma de la primera funcion es: %d", totalFuno);




// para funcion 2
	totalFdos = Sumar2();	// invoco a la funcion 2

printf("\nEl total de la suma de la segunda funcion es: %d", totalFdos);



// para funcion 3

printf("\nIngrese un numero entero: ");
scanf("%d", &numero1);

printf("\nIngrese otro numero entero: ");
scanf("%d", &numero2);

Sumar3(numero1, numero2);


// para funcion 4


Sumar4();




	return EXIT_SUCCESS;
}


//desarollos de funciones

int Sumar1(int number1, int number2)	// desarrollo funcion 1
{
	int resultado;

	resultado = number1+number2;

	return resultado;
}


int Sumar2(void)		// desarrollo funcion 2
{
	int number1;
	int number2;
	int resultado;

	printf("\nIngrese un número entero: ");
	scanf("%d", &number1);

	printf("\nIngrese otro número entero: ");
	scanf("%d", &number2);

	resultado = number1+number2;

	return resultado;
}



void Sumar3(int a, int b)		// desarrollo funcion 3 REVISAR/FUNCIONÓ
{
	int resultado;


	resultado = a + b;
	printf("\nLa suma de la tercera funcion es: %d", resultado);
}



void Sumar4(void)		// desarrollo de la funcion 4
{

	int number1;
	int number2;
	int resultado;

	printf("\nIngrese un numero entero: ");
	scanf("%d", &number1);

	printf("\nIngrese otro numero entero: ");
	scanf("%d", &number2);

	resultado = number1 + number2;
	printf("\nEl resultado de la funcion 4 es: %d", resultado);

}



/*
Ejercicio 3-4:

Realizar un programa en donde se puedan utilizar los prototipos de la función Sumar en sus 4 combinaciones.
int Sumar1(int, int);
int Sumar2(void);
void Sumar3(int, int);
void Sumar4(void);

 */
