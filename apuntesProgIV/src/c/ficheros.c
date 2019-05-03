/*
 * ficheros.c
 *
 *  Created on: 25 mar. 2019
 *      Author: ibai
 */

#include <stdio.h>
#include <stdlib.h>

void crearFichero(){
	FILE* archivo= fopen("prueba.txt","w");
	fprintf(archivo, "Escribiendo 10 nums: \n"); // con fprintf escribo en el fichero
	for(int e =0; e<10; e++ ){
		fprintf(archivo, "%i \n",e+1);
	}
	fclose(archivo);
}

void leerFichero(){
	FILE* archivo= fopen("prueba.txt","r");

	char caracter;
	int numLinea=0;

	while( (caracter=fgetc(archivo)) != EOF){	// leemos el fichero caracter a caracter
		if(caracter=='\n') numLinea++;
		printf("%c", caracter);
	}
	printf("Fichero con tamaño de %i lineas", numLinea);
	fclose((archivo));
}
