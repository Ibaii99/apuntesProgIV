/*
 * punteros.c
 *
 *  Created on: 14 mar. 2019
 *      Author: ibai
 */

// Los punteros solo se liberan con free.
// Los elementos estáticos se eliminan al salir de la función.


int a = 7;
int b = 6;

void punteros(){
	// Crear un puntero con la dirección de memoria de algo --> c adquiere lo que tenga a en forma de puntero
	// NO:
	// int *c = a;
	// int c = a; --> no es puntero, sino estaría bien, es un duplicado de variable

	// Se puede declarar por separado
	int *c;
	*c = &a;
	// O tod junto
	int *cc = &a;  // un puntero es una dirección de memoria

	// Se puede declarar por separado
	int *dd;
	*dd = &a;
	// O tod junto
	int *d = &b;  // un puntero es una dirección de memoria


	printf("%i\n", *c);
	printf("%i\n", a);

	operar(&c, &d);

}

void operar(int *c, int *d){
	// Lo que se modifique de un puntero dentro de un método
	*c = 60;
	*d += *c;
	*c -= 20;
	// Se mantiene hasta que el puntero se libere

	// todas las operaciones que se hagan y no se guarden en un puntero
	// No se aplicarán fuera del método, y variables nuevas creadas fuera no existiran
	a = 20;
	b += a;
	a = *c;
	b-= *d;
}


