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

	printf("\nDesea activar el menú? (s/n): ");
	scanf("%c", &opcion);

		if(opcion== 's'){

		menu();


		} else if (opcion == 'n'){
			printf("\nEligió no activar el menu");
			}


	system ("pause");
	return 0;
}

/*
Se deben hacer los ejercicios en orden. Al ingresar a cada punto de menú se debe indicar dónde estoy y al apretar una tecla
salir del mismo. es decir que cada opción no tiene funcionalidad extra.
En cualquier caso informar que está sucediendo: Ejemplo: "Primero se debe loguear".


A- Hacer el menú de un programa con las siguientes opciones: 1. Loguearse, 2. Comprar, 3. Ver mis compras, 4. Vender, 5. Salir

B- Al menú anterior chequear que no pueda ingresar a ninguna opción si no se logueó.

C- Al menú anterior chequear que no pueda ver sus compras, si no ingresó primero a comprar al menos una vez.

D- Cuando se ingresa a la opción vender del menú, debe abrirse otro menú que contenga: 1. Vender 2. Hacer factura 3. Volver atrás.

E- A lo anterior sumarle que haya compras para poder vender. (Si compré una vez y vendí una vez no puedo ingresar a vender).

F- Pasar las acciones de menú a funciones y llevarlas a una biblioteca.

 */
