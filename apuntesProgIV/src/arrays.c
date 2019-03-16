/*
 * arrays.c
 *
 *  Created on: 16 mar. 2019
 *      Author: ibai
 */


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
