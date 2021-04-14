/*
 ============================================================================
 Name        : C1EJ-1c.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h> //incluyo las librerias.
#include <stdlib.h>

int main(void) {			// inicio mi programa.
	setbuf(stdout,NULL); 	// por si no muestra nada en consola.

	int edad;				//declaro variable edad y le digo que va a ser tipo numero entero.
	char estadoCivil;		//declaro variable estado y le digo que va a ser tipo charset.

	printf ("Ingrese su edad y estado civil ('c'-casado, 's'-soltero, 'v'-viudo, 'd'-divorciado): ");
	scanf("%d", &edad); 	// pido la edad y la asigno a su variable.
	scanf("%c",&estadoCivil);	//pido estado y lo asigno a su variable.


	if(edad<18 && estadoCivil != 's'){			// creo una condicion.
			printf("\nEs muy pequeño para NO ser soltero");	//muestro mensaje si la condicion es true.
	}



	printf("\nSu edad es: %d", edad);		// muestro la edad.
	printf("\nSu estado civil es: %c", estadoCivil);	// muestro el estado civil.




	return EXIT_SUCCESS;	// aviso a mi programa que todo fue un exito.
}




/*

Consigna:

c-Control de Flujo

Pedirle al usuario su edad y su estado civil ('c'-casado, 's'-soltero, 'v'-viudo, 'd'-divorciado)
Si ingresa una edad menor a 18 años y un estado civil distinto a "Soltero",
mostrar el siguiente mensaje: 'Es muy pequeño para NO ser soltero.'

*/
