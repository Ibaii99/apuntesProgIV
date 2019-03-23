/*
 * reservaMemoria.c
 *
 *  Created on: 16 mar. 2019
 *      Author: ibai
 */

#include <stdlib.h>
#include "estructuras.h" // para no crear nuevas estructuras

void reservaMem(){

	// Reserva dinámica de memoria
	int *p;
	p = malloc(3); // Se reservan 3 bytes --> 24 bits

	int *pp;
	pp = malloc(sizeof(int)); //reservamos 4 bytes. 32 bits que es el tamaño de un entero

	Point2 *punt;
	punt = (Point2*) malloc(sizeof(Point2)); // reservamos el espacio suficiente para que toda la estructura pueda estar en memoria

	// Reserva estática de memoria

	int *x; // C reserva automaticamente un espacio a la variable
	Point2 *punto; // C reserva automaticamente un espacio a la variable


	// Liberación de memoria estática
	// La memoria estática se borra al finalizar el método, y no sera posible volver a accerder a la información fuera de el

	// Liberación de memoria dinámica
	// SOLO se liberan punteros

	// Se liberan los punteros
	free(punt);
	free(pp);
	free(p);

	// Se establecen a NULL los punteros despues de liberarlos
	punt = NULL;
	pp = NULL;
	p = NULL;



	//	 Podemos crear arrays de tamaño dinámico mediante el uso de punteros
	//	 Para ello, multiplicamos el valor del sizeof por el número de bloques
	//	 que queremos reservar.
	int *array; //declaramos un puntero a un entero
	array = malloc(3 * sizeof(int)); //  Se reservan 3 bloques de enteros
	array[0] = 1;	// Primer bloque de entero
	array[1] = 5;	// Segundo bloque de entero
	array[2] = 4;	// Tercer bloque de entero
	free(array);
	array = NULL;



	//En general, p+n, incrementa p para apuntar a n elementos después del actual.
	int array1[5];
	int *array2;
	array2 = &array1[1]; // hacemos que apunte a la segunda posición
	*(array2 - 1) = 3; //asignar 3 a la primera posición
	*array2 = 2; //asignar 2 a la segunda posición
	*(array2 + 1) = 10; //asignar 10 a la tercera posición
	*(array2 + 2) = 4; //asignar 4 a la cuarta posición
	*(array2 + 3) = 5; //asignar 5 a la quinta posición
	int resultadoSuma = (*(array2) + 3) + (*(array2) - 1); // suma = 5 + 3 = 8

	// 14 - 35







}

/*	Durante la ejecución de un programa se reserva espacio en memoria
	para guardar el contenido de las variables utilizadas.

	La cantidad de memoria reservada para una variable depende de
	su tipo (n bytes).

	Existen dos formas de asignar memoria a una variable

		Automática → asignada durante la ejecución del programa para
		las variables declaradas en el programa.
			-- Nada más declarar una variable se le reservan X bytes según su tipo

 	 	Manual → el programador es el encargado de asignar memoria
		dinámicamente. La debe liberar cuando ya no es necesaria
			-- Se reserva en la zona llamada HEAP

	Cuando hemos terminado de utilizar la memoria debemos liberarla. Utilizamos
	la función free a la que se le pasa la dirección (puntero) de la zona de me-
	moria a liberar.

		Si perdemos (mala gestión de memoria) la dirección de la memoria reservada
		no podremos liberarla → se libera al final del programa.

		Recomendable poner a 0 (NULL) los punteros tras liberar la memoria

	Para saber cuantos bytes reservar el operador sizeof permite calcular el número de
	bytes que ocupa un tipo o una variable.
*/
