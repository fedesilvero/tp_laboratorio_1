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

	int numeroCliente;
	char estadoCivil;
	int edad;
	float temperatura;
	char sexo;

	int contadorViudos=0;

	int numeroMujerSolJov;
	int edadMujerSolJov;
	int mujerSolJov=0;
	int flag=1;

	float costoTotal;
	int acumuladorTotal=0;
	int flag2=1;

	int contadorPasajeros=0;
	int contadorMayores=0;
	int mitadDelTotal;
	float descuento;
	char seguir;

	do{
		printf("\nIngrese n�mero de cliente: "); // toma de datos.
		scanf("%d", &numeroCliente);

		printf("\nIngrese estado civil ('s' para soltero, 'c' para casado, 'v' para viudo): ");
		fflush(stdin);
		scanf("%c", &estadoCivil);

		printf("\nIngrese edad (solo mayor a 17): ");
		scanf("%d", &edad);
			while (edad < 18){				// valido edad.
				printf("\nEdad inv�lida. Int�ntelo nuevamente: ");
				scanf("%d", &edad);
			}

		printf("\nIngrese temperatura: ");
		scanf("%f", &temperatura);
			while (temperatura < 34 || temperatura > 43){	// valido temperatura.
				printf("\nTemperatura inv�lida. Int�ntelo nuevamente: ");
				scanf("%f", &temperatura);
			}



		printf("\nIngrese sexo ('f' para femenino, 'm'para masculino, 'o' para no binario): ");
		fflush(stdin);
		scanf("%c", &sexo);
			while(sexo !='f' && sexo !='m' && sexo !='o'){
				printf("\nSexo inv�lido. Int�ntelo nuevamente: ");
				fflush(stdin);
				scanf("%c", &sexo);
			}



			//a) La cantidad de personas con estado "viudo" de m�s de 60 a�os.
			//d) Cuento la cantidad de personas mayores a 60.

			if (edad > 60){

				contadorMayores++;


				if(estadoCivil=='v'){
					contadorViudos++;
				}
			}


			//b) el n�mero de cliente y edad de la mujer soltera m�s joven.

			if (estadoCivil== 's' && sexo== 'f'){

				if(flag){
				numeroMujerSolJov= numeroCliente;
				edadMujerSolJov= edad;
				mujerSolJov++;

				flag=0;

				} else if (edad < edadMujerSolJov) {
					numeroMujerSolJov= numeroCliente;
					edadMujerSolJov= edad;
				}
			}

			//c) cu�nto sale el viaje total sin descuento.

			//costoTotal;
			//acumuladorTotal

			if (flag2){
				acumuladorTotal= 600;
				costoTotal= acumuladorTotal;
				flag2=0;
			} else {
				acumuladorTotal= acumuladorTotal + 600;
				costoTotal= acumuladorTotal;
			}

			//d) si hay m�s del 50% de los pasajeros que tiene m�s de 60 a�os,
			//el precio final tiene un descuento del 25%, que solo mostramos si corresponde.


			contadorPasajeros= contadorPasajeros + 1;




		printf("\nDesea continuar?: ");
		fflush(stdin);
		scanf("%c",&seguir);
	} while (seguir =='s');

	costoTotal= acumuladorTotal;


	mitadDelTotal= contadorPasajeros/2;




//Muestro la informaci�n solo si corresponde.


if(contadorViudos > 0){
	printf("\nLa cantidad de personas con estado viudo de m�s de 60 a�os es: %d", contadorViudos);
}

if (mujerSolJov > 0){
printf("\nEl n�de c de mujer soltera m�s joven es: %d y su edad es: %d ",numeroMujerSolJov,edadMujerSolJov);
}

printf("\nEl viaje sin descuento tiene un valor de: $ %.2f", costoTotal);


if (contadorMayores > mitadDelTotal ){

	descuento= costoTotal * 0.25;
	costoTotal= costoTotal - descuento;

	printf("\nEl costo total con descuento es: %.2f", costoTotal);

	}


	return 0;
}

/*
 Ejercicio 2-3:
Debemos alquilar el servicio de transporte para llegar a Mar del Plata con un grupo de personas,
de cada persona
debemos obtener los siguientes datos:

-n�mero de cliente,
-estado civil ('s' para soltero, 'c' para casado, 'v' para viudo),
-edad( solo mayores de edad, m�s de 17),
-temperatura corporal (validar por favor)
-sexo ('f' para femenino, 'm'para masculino, 'o' para no binario).

NOTA: el precio por pasajero es de $600.

Se debe informar (solo si corresponde):

a) La cantidad de personas con estado "viudo" de m�s de 60 a�os.
b) el n�mero de cliente y edad de la mujer soltera m�s joven.
c) cu�nto sale el viaje total sin descuento.
d) si hay m�s del 50% de los pasajeros que tiene m�s de 60 a�os ,
el precio final tiene un descuento del 25%, que solo mostramos si corresponde.

 */
