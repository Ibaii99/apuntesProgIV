/*
 * estructuras.h
 *
 *  Created on: 7 mar. 2019
 *      Author: ibai
 */

#ifndef UTILIDADES_ESTRUCTURAS_H_
#define UTILIDADES_ESTRUCTURAS_H_

typedef struct{
	char *NOMBRE;
	char *APELLIDO;
	int DNI;
	char *FECHA_NACIMIENTO;
	int TELEFONO;
	char *EMAIL;
	char *DOMICILIO;
	long N_SS ;
	long N_CUENTA ;
	char *PASSWORD;
} Usuario;


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

// ESTO ES PARA CUANDO CARGUEMOS TODOS LOS TIPOS SE JUNTEN CON SU OBJETIVO Y HACER COMPARACIONES MÃ�S FACIL
// OBJETIVO: BAJAR PESO -->  TIPO:  CARDIO  //  ES UNA FORMA DE PODER COMPARARLOS LUEGO DE FORMA MÃ�S FACIL
typedef struct{
	char *TIPO; // Array de tipos "Aerobico","Fuerza"....
	char *OBJETIVO; // Array de objetivos "Volumen","Fuerza"....
}ZonaTrabajada;

typedef struct{
	ZonaTrabajada *arrayZonas;
	int tamanyoArray; // Array de objetivos "Volumen","Fuerza"....
}GrupoZonas;

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
typedef struct{
	ZonaTrabajada *TRABAJA; // Array de tipos "Aerobico","Fuerza"....
	int TAMANYO_TRABAJA; // cantidad de elementos de Trabaja que tiene
	char *NOMBRE;
	char *DESCRIPCION;
	char *MATERIAL;	// Array de material "Espinilleras","Guantes"... Todos los elementos de material tienen que ser un char *separado por comas "Espinilleras,Botas,..."
	int TAMANYO_MATERIAL; // Cantidad de materiales necesarios
	float TARIFA_MENSUAL;
	float TARIFA_QUINCENA;
} Actividades;

typedef struct{
	Actividades *a;
	int tamanyo;
} GrupoActividades;



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


typedef struct{
	char *NOMBRE;
	int HORA_APERTURA;
	int HORA_CIERRE;
	int *HORAS_DISPONIBLES; // Array de horas disponibles
	int TAMANYO_HORAS_DISPONIBLES; // para saber el tamanyo de HORAS_DISPONIBLES
}Instalaciones;

typedef struct{
	Instalaciones *i;
	int tamanyo;
}GrupoInstalaciones;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
typedef struct{
	Usuario U;
	Instalaciones I;
	int HORA;
	char *fecha;
}Reserva;

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
typedef struct{
	Usuario U;
	float PESO_INICIAL;
	float PESO_OBJETIVO;
	float PESO_ACTUAL;
	ZonaTrabajada *TRABAJA; // Array de objetivos "Volumen","Fuerza"....
	int TAMANYO_TRABAJA; //	Tamaño del array de zonatrabajada
	int ALTURA;
	char *FECHA_ENTRADA_GIMNASIO; // Para sacar la antigÃ¼edad
	Actividades *ACTIVIDADES_CONTRATADAS; //Array de actividades que participe la persona
	int TAMANYO_ACTIVIDADES_CONTRATADAS;
	Reserva *RESERVAS; // Reservas del usuario
	int TAMANYO_RESERVAS;
} Ficha;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


typedef struct{
	Usuario U;
	ZonaTrabajada *ESPECIALISTA; // array de cosas en las que es especialista
	int TAMANYO_ESPECIALISTA;
	Actividades *IMPARTE;
	int TAMANYO_IMPARTE;

} Empleados;


////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




#endif /* UTILIDADES_ESTRUCTURAS_H_ */
