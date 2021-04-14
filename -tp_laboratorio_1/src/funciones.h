
#ifndef FUNCIONES_H_
#define FUNCIONES_H_


/* brief Calcula la suma de dos numeros recibidos por parametro
 * parametro1 recibe un número entero para sumar
 * parametro2 recibe un número entero para sumar
 * parametro3 recibe la dirección de memoria de una var y devuelve el resultado de la suma almacenándolo allí
 * retorno devuelve 0
 */
int sumar(int numero1, int numero2, int* pResultadoSuma);


/* brief Calcula la resta de dos numeros recibidos por parametro
 * parametro1 recibe un número entero para restar
 * parametro2 recibe un número entero para restar
 * parametro3 recibe la dirección de memoria de una var y devuelve el resultado de la resta almacenándolo allí
 * retorno devuelve 0
 */
int restar(int operador1, int operador2, int* pResultadoResta); // funcion restar



/* brief Calcula la división de dos numeros recibidos por parametro
 * parametro1 recibe un número entero para dividir
 * parametro2 recibe un número entero para dividir
 * parametro3 recibe la dirección de memoria de una var y devuelve el resultado de la división almacenándolo allí
 * retorno devuelve 0 si la funcion falló, o devuelve 1 si funcionó correctamente
 */
int dividir(int operador1, int operador2, float* pResultadoDivision); // funcion dividir



/* brief Calcula la multiplicacion de dos numeros recibidos por parametro
 * parametro1 recibe un número entero para multiplicar
 * parametro2 recibe un número entero para multiplicar
 * parametro3 recibe la dirección de memoria de una var y devuelve el resultado de la multiplicación almacenándolo allí
 * retorno devuelve 0
 */
int multiplicar (int operador1, int operador2, int* pResultadoMultiplicacion); // funcion multiplicar



/* brief Calcula el factorial de dos numeros recibidos por parametro
 * parametro1 recibe un número entero para calcular el factorial
 * parametro2 recibe un número entero para calcular el factorial
 * parametro3 recibe la dirección de memoria de una var y devuelve el resultado del factorial almacenándolo allí
 * parametro4 recibe la dirección de memoria de una var y devuelve el resultado del factorial almacenándolo allí
 * parametro5 recibe la dirección de memoria de una var y devuelve 0 si el factorial 1 no se puede calcular, devuelve 1 si sí.
 * parametro6 recibe la dirección de memoria de una var y devuelve 0 si el factorial 2 no se puede calcular, devuelve 1 si sí.
 * retorno devuelve 0
 */
int factorial (int numero1, int numero2 , int* pFactorial1, int* pFactorial2, int* errorFac1, int*errorFac2 ); //funcion factorial


#endif /* FUNCIONES_H_ */
