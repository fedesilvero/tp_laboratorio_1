/*
 * menu.c
 *
 *  Created on: 11 abr. 2021
 *      Author: Usuario
 */
#include <stdio.h>
#include <stdlib.h>

int menu (void){

		int opcion;
		int opcion2;
		int seguir = 1;
		int seguir2 = 1;
		int flagLog = 0;
		int flagCompras = 0;
		int flagVentas = 0;
		int cantidadCompras;
		int cantidadVentas;



	do {
		printf("\n1-Loguearse");
		printf("\n2-Comprar");
		printf("\n3-Ver mis compras");
		printf("\n4-Vender");
		printf("\n5-Salir\n");


		printf("\nElija una opci�n: \n");
		scanf("%d", &opcion);

		switch (opcion){

		case 1:

			printf("\nEligi� loguearse.\n");
			flagLog = 1;

			break;


		case 2:

			if (flagLog){
			printf("\nEligi� comprar.\n");

				printf("\nElija cuantas unidades quiere comprar: ");
				scanf("%d", &cantidadCompras);
			flagCompras=1;
			}
			else{
				printf("\nNo est� logueado.\n");
				}

			break;


		case 3:

			if (flagLog){
							if (flagCompras){
								printf("\nEligi� ver mis comprar.\n");
								printf("\nUsted tiene un total de %d unidades", cantidadCompras);

							}else	{
									printf("\nNo puede ver sus compras si no compr� al menos una vez");
									}
			}else	{
					printf("\nNo est� logueado.\n");
					}
			break;



		case 4:

			if (flagLog){
			printf("\nEligi� vender.\n");

			do{

				printf("\n1-Vender");
				printf("\n2-Hacer factura");
				printf("\n3-Volver atr�s");

				scanf("%d", &opcion2);

				switch (opcion2){

				case 1:

					if (flagVentas==0){
						printf("\nEligi� el submen� vender");

						if (cantidadCompras > 0){

							printf("\nCu�ntas unidades desea vender? :");
							scanf("%d", &cantidadVentas);
							printf("\nUsted vendi� %d unidades", cantidadVentas);
							flagVentas=1;
						}
					}else {
						printf("\nNo puede seguir vendiendo");
					}

				    break;

				case 2:
					printf("\nEligi� el submen� hacer factura");
					break;

				case 3:
					printf("\nEligi� el submen� volver atr�s");
					seguir2=0;

					break;
				}

			}while(seguir2==1);


			}
			else{
				printf("\nNo est� logueado.\n");
		    	}

			break;


		case 5:

			if(flagLog){
			printf("\nEligi� salir.\n");
			seguir=0;
			}
			else{
				printf("\nNo est� logueado.\n");
				}

			break;
		}


	} while (seguir==1);

	return 0;
}

