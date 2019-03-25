/*
 * ficheros.c
 *
 *  Created on: 25 mar. 2019
 *      Author: ibai
 */

#include <stdio.h>
#include <stdlib.h>

void crearFichero(){
	FILE* archivo= fopen("prueba.txt",'w');
	fprintf(archivo, "Escribiendo 10 nums: \n");
	for(int e =0; e<10; e++ ){
		fprintf(archivo, ("%i \n",e));
	}
	fclose(archivo);
}

void leerFichero(){
	FILE* archivo= fopen("prueba.txt",'r');

	char caracter;
	int numLinea=0;

	while( (caracter=getc(archivo)) != EOF){
		if(caracter=='\n') numLinea++;
		printf("%s", caracter);
	}
	fclose((archivo));
}
