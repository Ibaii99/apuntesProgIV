/*
 * Menu_principal.h
 *
 *  Created on: 13 may. 2019
 *      Author: ibaig_vi6j6bo
 */

#ifndef MENU_MENU_PRINCIPAL_H_
#define MENU_MENU_PRINCIPAL_H_
#define SYSTEM_OPTION 'W' //W -> Windows  // L -> Linux
#include <iostream>
#include <string>
#include "Menu_reservas.h"

class Menu_principal {
	void limpiar();
	void imp_menu();
	Ficha ficha; //TODO leer de BD
public:
	Menu_principal();
	~Menu_principal();
	void elegir_menu();
};

#endif /* MENU_MENU_PRINCIPAL_H_ */
