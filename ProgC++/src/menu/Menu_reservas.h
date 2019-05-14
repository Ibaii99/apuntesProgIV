/*
 * menureservas.h
 *
 *  Created on: 3 may. 2019
 *      Author: ibaig_vi6j6bo
 */

#ifndef USUARIO_FUNCIONES_SUB_MENUS_MENU_RESERVAS_H_
#define USUARIO_FUNCIONES_SUB_MENUS_MENU_RESERVAS_H_
#include "../utilidades/estructuras.h"
#define SYSTEM_OPTION 'W' //W -> Windows  // L -> Linux

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Menu_reservas {

private:
	GrupoInstalaciones inst; //TODO aqui cargariamos desde la base de datos todas las instalaciones
	Ficha ficha;
	Reserva *r;
	GrupoActividades g;

	void cargar_datos();
	void limpiar();

public:
	Menu_reservas();
	~Menu_reservas();
	void imp_instalaciones(GrupoInstalaciones inst);
	void detalles_instalaciones(Instalaciones ins);
	void hacer_reserva(Ficha *f, Instalaciones *i, int hora);
	void mostrar_reservas_totales();
	bool esta_hora_libre(int hora, Instalaciones i);
	void imp_menu(Ficha *f);
};

#endif /* USUARIO_FUNCIONES_SUB_MENUS_MENU_RESERVAS_H_ */
