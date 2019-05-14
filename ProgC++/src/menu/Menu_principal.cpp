/*
 * Menu_principal.cpp
 *
 *  Created on: 13 may. 2019
 *      Author: ibaig_vi6j6bo
 */

#include "Menu_principal.h"
using namespace std;

Menu_principal::Menu_principal() {
	// TODO Auto-generated constructor stub
	Instalaciones i;
	int x[] = {13,14,15,16,17,18,19};
	i.HORAS_DISPONIBLES = x;
	i.HORA_APERTURA = 9;
	i.HORA_CIERRE = 21;
	i.NOMBRE = (char*)"Polideportivo mis huevos";
	i.TAMANYO_HORAS_DISPONIBLES = 7;

	ZonaTrabajada z1;
	ZonaTrabajada z2;
	z1.OBJETIVO = (char*)"Bajar de peso";
	z1.TIPO = (char*)"Cardio";
	z2.OBJETIVO = (char*)"Sacar musculo";
	z2.TIPO = (char*)"Fuerza";
	ZonaTrabajada *z = (ZonaTrabajada*) malloc(2*sizeof(ZonaTrabajada));
	z[0]=z1;z[1]=z2;

	Usuario u;
	u.NOMBRE = (char*)"Paco";
	u.APELLIDO = (char*)"Perez";
	u.DNI = 89;
	u.DOMICILIO = (char*)"askujbca aisndlan a";
	u.EMAIL = (char*)"jaknslkn@gmail.com";
	u.FECHA_NACIMIENTO = (char*)"01/12/1967";
	u.N_CUENTA = 11111111;
	u.N_SS = 2222222;
	u.PASSWORD = (char*)"1qwerty78";
	u.TELEFONO = 123456789;

	Reserva *r = (Reserva*)malloc(sizeof(Reserva)+1);
	r->HORA = 18;
	r->I = i;
	r->U = u;
	r->fecha = (char*)"30/04/2019";


	Actividades *a = (Actividades*)malloc(2*sizeof(Actividades)+1);
	a->DESCRIPCION = (char*)"Tipnalinasaoaico";
	a->MATERIAL = (char*)"Botas,Toalla,Camiseta";
	a->NOMBRE = (char*)"Futbol";
	a->TAMANYO_MATERIAL = 3;
	a->TAMANYO_TRABAJA = 1;
	a->TARIFA_MENSUAL = 50;
	a->TARIFA_QUINCENA = 30;
	a->TRABAJA = &z1;

	(*((a)+1)).DESCRIPCION = (char*)"qjncpqowmepokm";
	(*((a)+1)).MATERIAL = (char*)"Guantes,Bendas,Bucal,Toalla";
	(*((a)+1)).NOMBRE = (char*)"Boxeo";
	(*((a)+1)).TAMANYO_MATERIAL= 4;
	(*((a)+1)).TAMANYO_TRABAJA = 2;
	(*((a)+1)).TARIFA_MENSUAL = 55;
	(*((a)+1)).TARIFA_QUINCENA = 30;
	(*((a)+1)).TRABAJA = z;

	Ficha *ficha = (Ficha*) malloc(sizeof(Ficha)+1);
	ficha->TAMANYO_ACTIVIDADES_CONTRATADAS = 2;
	ficha->ACTIVIDADES_CONTRATADAS = (Actividades*) malloc(ficha->TAMANYO_ACTIVIDADES_CONTRATADAS*sizeof(Actividades)+1);
	ficha->TAMANYO_RESERVAS = 1;
	ficha->RESERVAS = (Reserva*)malloc(ficha->TAMANYO_RESERVAS*sizeof(Reserva)+1);
	ficha->TAMANYO_TRABAJA = 2;
	ficha->TRABAJA = (ZonaTrabajada*)malloc(ficha->TAMANYO_TRABAJA*sizeof(ZonaTrabajada)+1);

	ficha->ALTURA = 180;
	ficha->ACTIVIDADES_CONTRATADAS = a;
	ficha->FECHA_ENTRADA_GIMNASIO = (char*)"12/01/2000";
	ficha->PESO_ACTUAL = 65;
	ficha->PESO_INICIAL = 90;
	ficha->PESO_OBJETIVO = 60;
	ficha->RESERVAS = r;
	ficha->TRABAJA = z;
	ficha->U = u;



	cout<< "Creado "<<endl;
}

Menu_principal::~Menu_principal() {
	// TODO Auto-generated destructor stub
	cout << "Destruido " <<endl;
}

void Menu_principal::imp_menu(){
	cout << "1- Reservas \n2- Historial\0- Salir";
	cout<< "\n----------------------------------------------------\n";
	cout<< "Inserte opcion: "<< endl;
}
//	cout <<"E - Editar\nV - Volver\n";

void Menu_principal::elegir_menu(){
	int opcion;
	do{
		limpiar();
		imp_menu();
		cin >> opcion;
		switch (opcion){
		case 1:
		{
			Menu_reservas *ma = new Menu_reservas();

			ma->imp_menu(&ficha);
		}
			break;

		case 2:
		{

		}
			break;

		case 0:
		{

		}
			opcion = 0;
			break;

		default:
		{

		}
			break;

		}
	} while (opcion != 0);
}

void Menu_principal::limpiar(){
	if(SYSTEM_OPTION=='W'){
		system("cls");
	}else if(SYSTEM_OPTION=='L'){
		system("clear");
	}
}

