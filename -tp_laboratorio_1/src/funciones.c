#include <stdio.h>
#include <stdlib.h>


int sumar(int operador1, int operador2, int* pResultadoSuma)

{
	int resultado;

	resultado = operador1 +operador2;

	*pResultadoSuma = resultado;

	return 0;
}



int restar(int operador1, int operador2, int* pResultadoResta)

{
	int resultado;

	resultado = operador1 - operador2;

	*pResultadoResta = resultado;

	return 0;
}




int dividir(int operador1, int operador2, float* pResultadoDivision){

	float resultado;

	if (operador2 != 0){

		resultado = (float) operador1 / operador2;
		*pResultadoDivision = resultado;

		return 1;

	}else {
		return 0;
	}

}




int multiplicar (int operador1, int operador2, int* pResultadoMultiplicacion)

{
	int resultado;

	resultado = operador1 * operador2;

	*pResultadoMultiplicacion = resultado;

	return 0;
}




int factorial (int numero1, int numero2 , int* pFactorial1, int* pFactorial2, int* errorFac1, int*errorFac2 ) {


	int factorial1 = 1;
	int factorial2 = 1;


				if (numero1 >= 1){
						for (int i=1; i <= numero1 ; i++){
							factorial1 = factorial1 * i;
						}

					*pFactorial1 = factorial1;

				} else {
					*errorFac1 = 0;
				}



				if (numero2 >= 1){
						for (int i=1; i<= numero2 ; i++){
							factorial2 = factorial2 * i;
						}

					*pFactorial2 = factorial2;

				} else {
					*errorFac2 = 0;
				}

return 0;


}


