

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"


int main(void) {
	setbuf(stdout, NULL);

	int a;
	int b;
	char opcion;

	int resultadoSuma;
	int resultadoResta;
	int resultadoMultiplicacion;
	int resultadoFactorialA;
	int resultadoFactorialB;
	int errorDivision;
	int errorFacmain1;
	int errorFacmain2;
	float resultadoDivision;

	int flagSuma = 0;
	int flagResta = 0;
	int flagDivision = 0;
	int flagMultiplicacion = 0;
	int flagFactorial = 0;

	int seguir = 1;



	// muestro al usuario las opciones del menu afuera del bucle para que se vean una sola vez.
		printf("\n*Seleccione una opción: \n");

		printf("\n 1. Ingresar 1er operando. \n");
		printf("\n 2. Ingresar 2do operando. \n");
		printf("\n 3. Calcular todas las operaciones. \n");
		printf("\n a) Calcular la suma (A+B). \n");
		printf("\n b) Calcular la resta (A-B). \n");
		printf("\n c) Calcular la division (A/B). \n");
		printf("\n d) Calcular la multiplicacion (A*B). \n");
		printf("\n e) Calcular el factorial (A!). \n");
		printf("\n 4. Informar resultados. \n");
		printf("\n 5. Salir. \n");

do{

	// registro la opcion seleccionada por el usuario.
	fflush(stdin);	// la escribo porque las opciones son de tipo char
	scanf("%c", &opcion);	// la asigno a la variable opcion






	switch (opcion){

		case '1':

			printf("\nIngrese un número entero: \n");
			scanf("%d", &a);
			printf("\nUsted ingresó el número: %d .\n", a);
			break;



		case '2':

			printf("\nIngrese otro número entero: \n");
			scanf("%d", &b);
			printf("\nUsted ingresó el número: %d .\n", b);
			break;



		case '3':


			sumar (a, b, &resultadoSuma);
			restar (a, b, &resultadoResta);
			errorDivision = dividir(a, b, &resultadoDivision);
			multiplicar (a, b, &resultadoMultiplicacion);
			factorial (a, b, &resultadoFactorialA, &resultadoFactorialB, &errorFacmain1, &errorFacmain2);


			 flagSuma = 1;
			 flagResta = 1;
			 flagDivision = 1;
			 flagMultiplicacion = 1;
			 flagFactorial = 1;


			break;


			case 'a':	// calcular la suma (funciona)

				sumar (a, b, &resultadoSuma);	// invoco la funcion suma
				flagSuma = 1;
				break;


			case 'b':	// calcular la resta (funciona)

				restar (a, b, &resultadoResta);		// invoco a la funcion restar
				flagResta = 1;
				break;


			case 'c':	// calcular la división

				errorDivision = dividir(a, b, &resultadoDivision);
				flagDivision = 1;
				break;


			case 'd':		// calcular la multiplicacion (funciona)

				multiplicar (a, b, &resultadoMultiplicacion);
				flagMultiplicacion = 1;
				break;


			case 'e':		// calcular el factorial (funciona)

				factorial (a, b, &resultadoFactorialA, &resultadoFactorialB, &errorFacmain1, &errorFacmain2);
				flagFactorial = 1;
				break;




		case '4':		// mostrar los resultados (funciona)


		if(flagSuma){
			printf("\n a)El resultado de A + B es: %d \n", resultadoSuma);
		}


		if (flagResta){
			printf("\n b)El resultado de A - B: %d \n", resultadoResta);
		}


		if (flagDivision){
				if(errorDivision == 0){
					printf("\n c)No se puede dividir por 0. \n");
				}
				else {
					printf("\n c)El resultado de la division es: %.2f", resultadoDivision);
				}
		}


		if(flagMultiplicacion){
			printf("\n d)El resultado de la multiplicacion es: %d", resultadoMultiplicacion);
		}


		if (flagFactorial){
				if(errorFacmain1 == 0){
					printf("\n e.1)No se puede sacar el factor de 0 o de un número negativo. \n");

				} else  {
							printf("\n e.1)El factorial de A es: %d ", resultadoFactorialA);
						}

				if(errorFacmain2 == 0){
					printf("\n e.2)No se puede sacar el factor de 0 o de un número negativo. \n");

				} else {
							printf("\n e.2)El factorial de B es: %d ", resultadoFactorialB);
					   }
		}

					 flagSuma = 0;
					 flagResta = 0;
					 flagDivision = 0;
					 flagMultiplicacion = 0;
					 flagFactorial = 0;


		break;



		case '5':

			printf("\nEligió salir. \n");
			seguir = 0;
			break;

	}


  } while (seguir == 1);


printf("\nMuchas gracias por haber usado esta calculadora.");


	return 0;
}


/*

*Consigna:

Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:

1. Ingresar 1er operando (A=x)	OK
2. Ingresar 2do operando (B=y)  OK
3. Calcular todas las operaciones OK
a) Calcular la suma (A+B) OK
b) Calcular la resta (A-B) OK
c) Calcular la division (A/B) OK
d) Calcular la multiplicacion (A*B) OK
e) Calcular el factorial (A!) OK

4. Informar resultados OK
a) “El resultado de A+B es: r” OK
b) “El resultado de A-B es: r” OK
c) “El resultado de A/B es: r” o “No es posible dividir por cero” OK
d) “El resultado de A*B es: r” OK
e) “El factorial de A es: r1 y El factorial de B es: r2” OK

5. Salir OK
•
•
•
•
Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
que contenga las funciones para realizar las cinco operaciones. OK

En el menú deberán aparecer los valores actuales cargados en los operandos A y B
(donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado) OK

Deberán contemplarse los casos de error (división por cero, etc) OK


Documentar todas las funciones OK



Pasos:


1-Declarar variables de tipo enteros (int A, int B, int resultado, int opcion).
2-Usar un bucle del tipo entro una vez hasta que el usuario quiera, y que al seleccionar la opcion "salir" se rompa el bucle.

4-Mostrar por pantalla todas las opciones del menu.
5-Pedir al usuario el ingreso de una de las opciones.
6-Crear un bloque de codigo para cada posible opcion elegida.
7-Mostrar resultados cuando se seleccione la opcion "informar resultados".
8-Pasar cada funcion a un archivo .h y otro .c
9-Documentar para que sirve cada funcion en el archivo .h
10-Declarar un flag para cada operacion y antes de mostrar los resultados preguntar; si pase por el flag lo muestro, si no no.
   La razón de esto es para evitar mostrar la basura precargada en las variables.


*/
