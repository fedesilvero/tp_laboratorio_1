/*
 ============================================================================
 Name        : -C4EJMenu.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

int main(void) {
	setbuf (stdout, NULL);

	char opcion;

	printf("\nDesea activar el men�? (s/n): ");
	scanf("%c", &opcion);

		if(opcion== 's'){

		menu();


		} else if (opcion == 'n'){
			printf("\nEligi� no activar el menu");
			}


	system ("pause");
	return 0;
}

/*
Se deben hacer los ejercicios en orden. Al ingresar a cada punto de men� se debe indicar d�nde estoy y al apretar una tecla
salir del mismo. es decir que cada opci�n no tiene funcionalidad extra.
En cualquier caso informar que est� sucediendo: Ejemplo: "Primero se debe loguear".


A- Hacer el men� de un programa con las siguientes opciones: 1. Loguearse, 2. Comprar, 3. Ver mis compras, 4. Vender, 5. Salir

B- Al men� anterior chequear que no pueda ingresar a ninguna opci�n si no se logue�.

C- Al men� anterior chequear que no pueda ver sus compras, si no ingres� primero a comprar al menos una vez.

D- Cuando se ingresa a la opci�n vender del men�, debe abrirse otro men� que contenga: 1. Vender 2. Hacer factura 3. Volver atr�s.

E- A lo anterior sumarle que haya compras para poder vender. (Si compr� una vez y vend� una vez no puedo ingresar a vender).

F- Pasar las acciones de men� a funciones y llevarlas a una biblioteca.

 */
