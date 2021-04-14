/*
 ============================================================================
 Name        : C2EJCLASS2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(void) {
	setbuf(stdout, NULL);

	int numero;

	int contadorPar = 0;
	int contadorImpar = 0;
	int menorIngresado;
	int flag = 1;

	int mayorPar;
	int flagPar = 1;

	int acumuladorPositivos = 0;


	int productoNegativos;
	int acumuladorNegativos=0;
	int contadorNegativos=0;
	int flagProductoNeg = 1;


	for ( int i=0; i < 10; i++){

		printf("Ingrese 10 numeros enteros distintos a 0: ");
		fflush(stdin);
		scanf("%d", &numero);
			while(numero==0){
				printf("Numero invalido. Ingrese un numero distinto a cero: ");
				fflush(stdin);
				scanf("%d", &numero);
			}


// a) Cantidad de pares e impares. (Funciona)

			if (numero %2==0){

				contadorPar++;
			} else {

				contadorImpar++;
			}





// b) El menor número ingresado. (Funciona)


			if (flag){

				menorIngresado = numero;
				flag=0;

			} else if (numero < menorIngresado) {

				menorIngresado = numero;
			}



// c) De los pares el mayor número ingresado. (Funciona)


			if (numero %2==0){

				if (flagPar){

					mayorPar= numero;
					flagPar=0;

				} else if (numero > mayorPar){
					mayorPar= numero;
				}

			}

// d) Suma de los positivos. (Funciona)


			if (numero > 0){
				acumuladorPositivos= acumuladorPositivos + numero;
			}



// e) Producto de los negativos. (Funciona, pero es la consigna correcta?)



		if(numero < 0){
				if (flagProductoNeg){

					acumuladorNegativos= numero;
					contadorNegativos++;
					flagProductoNeg=0;

				} else {
					acumuladorNegativos+= numero;
					contadorNegativos++;

				}

		}

		productoNegativos= acumuladorNegativos * contadorNegativos;




	}







printf("\nLa cantidad de pares es: %d y la cantidad de impares es: %d", contadorPar, contadorImpar);
printf("\nEl menor numero ingresado es: %d", menorIngresado);
printf("\nEl mayor de los numeros pares que se han ingresaron es: %d", mayorPar);
printf("\nLa suma de los positivos es: %d", acumuladorPositivos);
printf("\nEl producto de los negativos es: %d", productoNegativos);




	return EXIT_SUCCESS;
}
