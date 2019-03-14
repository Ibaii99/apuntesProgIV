/*
 * estructuras.h
 *
 *  Created on: 14 mar. 2019
 *      Author: ibai
 */

#ifndef ESTRUCTURAS_H_
#define ESTRUCTURAS_H_

struct Point1 {
	int x;
	int y;
};

typedef struct {
	int x;
	int y;
} Point2;

// Creación de estructuras anidadas

typedef struct {
	int x;
	int y;
} Point;

typedef struct {
	Point p1;
	Point p2;
} Rect;

#endif /* ESTRUCTURAS_H_ */
