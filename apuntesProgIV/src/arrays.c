/*
 * arrays.c
 *
 *  Created on: 16 mar. 2019
 *      Author: ibai
 */
#include <string.h>
#include "estructuras.h"
#include <stdio.h>

void Strings(){
	// Si tienes una estructura y hay que agrandar el tama�o
	int *a,*e;
	a = malloc(sizeof(int)*4);
	e = malloc(sizeof(int)*6);
	a = e;
	// para cambiar el array de a y que sea de tama�o 6

	// un estrings es una cadena de chars
	// estático
	char nombre[10];
	// dinámico
	char *apellido1 = (char*) malloc(10*sizeof(char));
	char *apellido2 = (char*) malloc(10*sizeof(char));
	// Todos los estrings tienen \0 al final
	// Apellido tiene 9 caracteres + \0
	// Nombre tiene 10

	*apellido1 = '0';
	*(apellido1 +1) = '5';
	*(apellido1 +2) = '5';
	*(apellido1 +3) = '5';
	*(apellido1 +4) = '5';
	*(apellido1 +5) = '5';

	*apellido2 = 'a';
	*(apellido2 +1) = 'b';
	*(apellido2 +2) = 'b';
	*(apellido2 +3) = 'b';
	*(apellido2 +4) = 'b';
	*(apellido2 +5) = 'b';

	char *apellidoCompleto =  (char*) malloc(20*sizeof(char));


	printf("1- Apellido 1 = %s 	Apellido 2 = %s \nApellido completo = %s\n--\n",apellido1,apellido2,apellidoCompleto);
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	strcpy(&apellidoCompleto, &apellido1); //→ copia el string apellido1 al string apellidocompleto

	printf("2- Apellido 1 = %s 	Apellido 2 = %s \nApellido completo = %s\n--\n",apellido1,apellido2,apellidoCompleto);

	strcpy(&apellidoCompleto, &apellido2); //→ copia el string apellido2 al string apellidocompleto

	printf("3- Apellido 1 = %s 	Apellido 2 = %s \nApellido completo = %s\n--\n",apellido1,apellido2,apellidoCompleto);

	strcpy(&apellidoCompleto,"");

	printf("4- Apellido 1 = %s 	Apellido 2 = %s \nApellido completo = %s\n--\n",apellido1,apellido2,apellidoCompleto);

//	strcpy(&apellido1, &apellido2); // Se copia el elemento apellido2 al elemento apellido1

	printf("5- Apellido 1 = %s 	Apellido 2 = %s \nApellido completo = %s\n--\n",apellido1,apellido2,apellidoCompleto);
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	*apellido1 = '0';
			*(apellido1 +1) = '5';
			*(apellido1 +2) = '5';
			*(apellido1 +3) = '5';
			*(apellido1 +4) = '5';
			*(apellido1 +5) = '5';

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	char *copia1 = (char*) malloc(20*sizeof(char));
	char *copia2 = (char*) malloc(20*sizeof(char));

	*copia1 = strcat(apellidoCompleto, apellido1); // → concatena el string apellido1	al final del string apellidocompleto, devuelve copia1
	printf("6- Apellido 1 = %s 	Apellido 2 = %s \nApellido completo = %s\n--\n",apellido1,apellido2,apellidoCompleto);

	*copia2 = strcat(apellidoCompleto, apellido2); // → concatena el string apellido2 al final del string apellidocompleto, devuelve copia2
	printf("7- Apellido 1 = %s 	Apellido 2 = %s \nApellido completo = %s\n--\n",apellido1,apellido2,apellidoCompleto);


	printf("8- Copia 1 = %s 	copia 2 = %s \n--\n",copia1,copia2);

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	int largura = strlen(apellidoCompleto); // devuelve la longitud de apellidoCompleto sin ontar el \0

	int resul = strcmp(apellido1,apellido2); // compara el estring apellido1 con el estring apellido2
	// si  el resultado es < 0 entonces apellido1 < apellido2
	// si el resultado es 0 apellido1==apellido2
	// si el resultado es > 0 entonces apellido1 > apellido 2


}
void recorrer_array_estruct(){
	Point *p = (Point*) malloc((3*sizeof(Point))+1);
		int a = 5;

		(*p).x = 3333;
		(*p).y = 3333;

		(*(p+1)).x = 444;
		(*(p+1)).y = 444;

		(*(p+2)).x = 555;
		(*(p+2)).y = 555;

		for(int e = 0; e<a; e++){
			printf("Punto%i  %i %i\n", e+1, (*(p+e)).x, (*(p+e)).y);
			fflush(stdout);
		}
}
void suma(int nums[], int tamanyo){
	while(tamanyo){
		nums[tamanyo-1]+= nums[tamanyo];
		-- tamanyo;
	}


void arrays(){
	// No hay ninguna forma de saber el tamaño de un array
	int nums[] = {1,2,3,4,5};
	// Como no hay ninguna forma de sabero se le puede pasar el tamaño como atributo
	suma(nums,5);

	int dosDimensiones [10][10]; // forma estática

	// forma dinámica
	int *DosDimensionesDinamicas[10];
	for (int i = 0; i < 10; i++)DosDimensionesDinamicas[i] = malloc(20 * sizeof(int));

	void funcion1(int (*a)[20]); // Un puntero a un array de punteros [Cada puntero del array de punteros apunta a un entero]

	void funcion2(int *a[20]); // array de 20 punteros a enteros

	int **a; // creación de array de punteros

	int X = 6; // tamaño en X
	int Y = 3; // tamaño en Y

	a = (int **)malloc(X * sizeof(int*)); //inicializar la memoria para el array de punteros a int
	for (int i = 0; i < X; i++)	a[i] = (int*)malloc(Y * sizeof(int)); //inicializar cada array
}
/*
	Un array es un bloque consecutivo en memoria de n variables del mismo tipo.

	Para reservar n variables consecutivas de un tipo:
		-- tipo nombre[n];

	Por ejemplo:
		-- int nombre[4];

	No es posible asignarlos directamente a otro array. Por lo tanto, no pueden
	ser devueltos por una función. Sin embargo, pueden ser pasados como parámetros.

		-- NO pasan información sobre su tamaño → Es necesario indicarlo de
		   otras formas (p.e. otra variable).
 */

// Suma de todos los elementos de un array
}
