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

	// Se establecen a NULL los punteros

	punt = NULL;
	pp = NULL;
	p = NULL;

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
