

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

	int flagValidacion1 = 0;
	int flagValidacion2 = 0;

	int seguir = 1;



		// muestro al usuario las opciones del menu afuera del bucle para que se vean una sola vez.
		printf("\n*Seleccione una opción del menú: \n");

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
	fflush(stdin);			// la escribo porque las opciones son de tipo char
	scanf("%c", &opcion);	// la asigno a la variable opcion





	// escribo un bloque de código para cada opcion que ingrese el usuario
	switch (opcion){

		case '1':

			printf("\nIngrese un número entero: \n");
			scanf("%d", &a);
			printf("\nUsted ingresó el número: %d .\n", a);
			printf("\nSeleccione otra opción del menú para continuar...\n");
			flagValidacion1 = 1;
			break;



		case '2':

			printf("\nIngrese otro número entero: \n");
			scanf("%d", &b);
			printf("\nUsted ingresó el número: %d .\n", b);
			printf("\nSeleccione otra opción del menú para continuar...\n");
			flagValidacion2 = 1;
			break;



		case '3':

		if (flagValidacion1 == 1 && flagValidacion2 == 1){		// si no ingrese ambos nº, dara error y no voy a dejar continuar
			sumar (a, b, &resultadoSuma);
			restar (a, b, &resultadoResta);
			errorDivision = dividir(a, b, &resultadoDivision);
			multiplicar (a, b, &resultadoMultiplicacion);
			factorial (a, b, &resultadoFactorialA, &resultadoFactorialB, &errorFacmain1, &errorFacmain2);

			printf("\nRealizó todas las operaciones...\n");
			printf("\nSeleccione otra opción del menú para continuar...\n");

			 flagSuma = 1;
			 flagResta = 1;
			 flagDivision = 1;
			 flagMultiplicacion = 1;
			 flagFactorial = 1;

			}else {
				printf("\nError. No se pueden realizar las operaciones si no se ingresaron los 2 números anteriormente. \n");
			}

			 break;


			case 'a':	// calcular la suma (funciona)

				if (flagValidacion1 == 1 && flagValidacion2 == 1){
				sumar (a, b, &resultadoSuma);
				flagSuma = 1;

				printf("\nRealizó una suma...\n");
				printf("\nSeleccione otra opción del menú para continuar...\n");

				}else {
					printf("\nError. No se pueden realizar las operaciones si no se ingresaron los 2 números anteriormente. \n");
				}
				break;


			case 'b':	// calcular la resta (funciona)

				if (flagValidacion1 == 1 && flagValidacion2 == 1){

					restar (a, b, &resultadoResta);
					flagResta = 1;

					printf("\nRealizó una resta...\n");
					printf("\nSeleccione otra opción del menú para continuar...\n");

				}else {

					printf("\nError. No se pueden realizar las operaciones si no se ingresaron los 2 números anteriormente. \n");
				}

				break;




			case 'c':	// calcular la división (funciona)

				if (flagValidacion1 == 1 && flagValidacion2 == 1){

					errorDivision = dividir(a, b, &resultadoDivision);
					flagDivision = 1;

					printf("\nRealizó una división...\n");
					printf("\nSeleccione otra opción del menú para continuar...\n");

				}else {

					printf("\nError. No se pueden realizar las operaciones si no se ingresaron los 2 números anteriormente. \n");
				}

				break;


			case 'd':		// calcular la multiplicacion (funciona)

				if (flagValidacion1 == 1 && flagValidacion2 == 1){

					multiplicar (a, b, &resultadoMultiplicacion);
					flagMultiplicacion = 1;

					printf("\nRealizó una multiplicación...\n");
					printf("\nSeleccione otra opción del menú para continuar...\n");

				}else {

					printf("\nError. No se pueden realizar las operaciones si no se ingresaron los 2 números anteriormente. \n");
				}

				break;


			case 'e':		// calcular el factorial (funciona)

				if (flagValidacion1 == 1 && flagValidacion2 == 1){

					factorial (a, b, &resultadoFactorialA, &resultadoFactorialB, &errorFacmain1, &errorFacmain2);
					flagFactorial = 1;

					printf("\nRealizó el factorial...\n");
					printf("\nSeleccione otra opción del menú para continuar...\n");

				}else {

					printf("\nError. No se pueden realizar las operaciones si no se ingresaron los 2 números anteriormente. \n");
				}

				break;




		case '4':		// mostrar los resultados (funciona)

	if (flagValidacion1 == 1 && flagValidacion2 == 1){

			if(flagSuma){	// valido que haya hecho la suma
				printf("\n a)El resultado de A + B es: %d", resultadoSuma);
			}



			if (flagResta){	// valido que haya hecho la resta
				printf("\n b)El resultado de A - B: %d", resultadoResta);
			}



			if (flagDivision){		// valido que haya hecho la division

					if(errorDivision == 0){		// valido que no haya ingresado un 0

						printf("\n c)No se puede dividir por 0.");
					}
					else {
						printf("\n c)El resultado de la division es: %.2f", resultadoDivision);
					}
			}


			if(flagMultiplicacion){		// valido que haya hecho la multiplicacion
				printf("\n d)El resultado de la multiplicacion es: %d", resultadoMultiplicacion);
			}


			if (flagFactorial == 1){			// valido que haya hecho el factorial


					if(errorFacmain1 == 0){		// valido que no haya ingresado un 0

						printf("\n e.1)No se puede sacar el factorial de 0 o de un número negativo.");

					}
					 else {
							printf("\n e.1)El factorial de A es: %d", resultadoFactorialA);
					}



					if(errorFacmain2 == 0){

						printf("\n e.2)No se puede sacar el factorial de 0 o de un número negativo.\n");

					} else {
							printf("\n e.2)El factorial de B es: %d \n", resultadoFactorialB);
					}

			}


					 flagSuma = 0;
					 flagResta = 0;
					 flagDivision = 0;
					 flagMultiplicacion = 0;
					 flagFactorial = 0;
					 printf("\nSeleccione otra opción del menú para continuar...\n");
	}

	else {

		printf("\nError. No se pueden mostrar las operaciones si no se ingresaron los 2 números anteriormente. \n");
	}

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

*/
