/*
 * estructuras.c
 *
 *  Created on: 14 mar. 2019
 *      Author: ibai
 */
#include  "estructuras.h"
// #include "../nombreCarp/nombreArch.h" --> Saldriamos de la carpeta src y avanzariamos hasta "nombreCarp" y luego al nombre del archivo

	// Para llamar a Point1 se tendrá que hacer así:
	struct Point1 punto1;
	// Para llamar a Point2 se tendrá que hacer así:
	Point2 punto2;

	// Para llamar a Recta, una estructura encadenada a point:
	Rect rect = { {5,6} , {3,2} };


void accederAComponentes(){

	// Se crea una copia de lo que hay en punto 1
	// Las modificaciones realizadas solo se guardarán
	// En este método, fuera de él la variable seguirá igual
	punto1.x = 0;
	punto1.y = 1;


	// Se duplica la variable punto2 a punto3
	Point2 punto3 = punto2;

	// Se duplica la variable punto1 a punto4
	struct Point1 punto4 = punto1;


	// Modifico la estructura punto3
	modificar(&punto3);


	// Se duplica la variable punto3 a punto2
	// Atención, tienen que ser de la misma
	// Estructura
	punto2 = punto3;

	// No existe la igualdad entre estructuras
	// if(punto2 == punto3);

	// Hay que comparar los elementos uno por uno
	if(punto2.x == punto3.x && punto2.y == punto3.y);

	// Se puede inicializar una estructura en su declaración
	Point2 punto5 = {5,7};

	struct Point1 punto6 = {5,7};

	rect.p1.x = 5;
	rect.p2.x = 6;

}

void modificar(Point2 *punt){
	// Accedo a la dirección que apunta el puntero
	// Las modificaciones de punt se aplican dentro y
	// Fuera del método

	punt->x =  3;
	punt->y = 5;
}


