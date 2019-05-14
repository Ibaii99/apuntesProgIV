//============================================================================
// Name        : ProyectoProgIVCpp.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "menu/Menu_principal.h"
#define SYSTEM_OPTION 'W' //W -> Windows  // L -> Linux
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	Menu_principal *m = new Menu_principal();
	m->elegir_menu();

	return 0;
}


