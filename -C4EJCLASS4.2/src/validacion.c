
#include <stdio.h>
#include <stdlib.h>

int validacionFah (int a){

	int grados;
	grados = a;

		while (grados < 32 || grados > 212){
			printf("\nTemperatura inv�lida. Ingrese una temperatura entre el punto de congelaci�n y ebullici�n del agua: \n");
			scanf("%d", &grados);
		}

	return 0;
}




int validacionCel (int a){

	int grados;
	grados = a;

		while (grados < 0 || grados > 100){
			printf("\nTemperatura inv�lida. Ingrese una temperatura entre el punto de congelaci�n y ebullici�n del agua: \n");
			scanf("%d", &grados);
		}

	return 0;
}
