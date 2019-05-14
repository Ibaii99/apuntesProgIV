/*
 * menureservas.cpp
 *
 *  Created on: 3 may. 2019
 *      Author: ibaig_vi6j6bo
 */

#include "Menu_reservas.h"

Menu_reservas::Menu_reservas() {
	// TODO Auto-generated constructor stub
	//TODO cargar todo de la BD
	cout <<"1"<<endl;
	ZonaTrabajada z1;
	ZonaTrabajada z2;
	z1.OBJETIVO = (char*)"Bajar de peso";
	z1.TIPO = (char*)"Cardio";
	z2.OBJETIVO = (char*)"Sacar musculo";
	z2.TIPO = (char*)"Fuerza";
	ZonaTrabajada *z = (ZonaTrabajada*) malloc(2*sizeof(ZonaTrabajada));
	z[0]=z1;z[1]=z2;
	cout <<"2"<<endl;

	g.a = (Actividades*)malloc(2*sizeof(Actividades)+1);
	g.a->DESCRIPCION = (char*)"Tipnalinasaoaico";
	g.a->MATERIAL = (char*)"Botas,Toalla,Camiseta";
	g.a->NOMBRE = (char*)"Futbol";
	g.a->TAMANYO_MATERIAL = 3;
	g.a->TAMANYO_TRABAJA = 1;
	g.a->TARIFA_MENSUAL = 50;
	g.a->TARIFA_QUINCENA = 30;
	g.a->TRABAJA->OBJETIVO = z1.OBJETIVO;
	g.a->TRABAJA->TIPO = z1.TIPO;

	cout <<"3"<<endl;
	(*((g.a)+1)).DESCRIPCION = (char*)"qjncpqowmepokm";
	(*((g.a)+1)).MATERIAL = (char*)"Guantes,Bendas,Bucal,Toalla";
	(*((g.a)+1)).NOMBRE = (char*)"Boxeo";
	(*((g.a)+1)).TAMANYO_MATERIAL= 4;
	(*((g.a)+1)).TAMANYO_TRABAJA = 2;
	(*((g.a)+1)).TARIFA_MENSUAL = 55;
	(*((g.a)+1)).TARIFA_QUINCENA = 30;
	(*((g.a)+1)).TRABAJA = z;
	cout <<"4"<<endl;
	g.tamanyo = 2;
	cout <<"5"<<endl;
	Instalaciones i;
	int x[] = {13,14,15,16,17,18,19};
	i.HORAS_DISPONIBLES = x;
	i.HORA_APERTURA = 9;
	i.HORA_CIERRE = 21;
	i.NOMBRE = (char*)"Polideportivo mis huevos";
	i.TAMANYO_HORAS_DISPONIBLES = 7;
	cout <<"6"<<endl;

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
	cout <<"7"<<endl;

	r->HORA = 18;
	r->I = i;
	r->U = u;
	r->fecha = (char*)"30/04/2019";
	cout <<"8"<<endl;

	Actividades *a = (Actividades*)malloc(2*sizeof(Actividades)+1);
	a->DESCRIPCION = (char*)"Tipnalinasaoaico";
	a->MATERIAL = (char*)"Botas,Toalla,Camiseta";
	a->NOMBRE = (char*)"Futbol";
	a->TAMANYO_MATERIAL = 3;
	a->TAMANYO_TRABAJA = 1;
	a->TARIFA_MENSUAL = 50;
	a->TARIFA_QUINCENA = 30;
	a->TRABAJA = &z1;
	cout <<"9"<<endl;
	(*((a)+1)).DESCRIPCION = (char*)"qjncpqowmepokm";
	(*((a)+1)).MATERIAL = (char*)"Guantes,Bendas,Bucal,Toalla";
	(*((a)+1)).NOMBRE = (char*)"Boxeo";
	(*((a)+1)).TAMANYO_MATERIAL= 4;
	(*((a)+1)).TAMANYO_TRABAJA = 2;
	(*((a)+1)).TARIFA_MENSUAL = 55;
	(*((a)+1)).TARIFA_QUINCENA = 30;
	(*((a)+1)).TRABAJA = z;
	cout <<"10"<<endl;
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
	cout <<"11"<<endl;


	cout <<"Creado"<<endl;
}

Menu_reservas::~Menu_reservas() {
	// TODO Auto-generated destructor stub
}

void Menu_reservas::cargar_datos(){
	GrupoInstalaciones inst; //TODO esto vendría de la BD
	Reserva r;

}

void Menu_reservas::imp_instalaciones(GrupoInstalaciones inst){
	printf("\n------------------------------\n");
	printf("\t\tListado de Instalaciones");
	printf("\n------------------------------\n");

	for (int e = 0; e < inst.tamanyo; e++){
		printf("%i - %s \n",e+1,inst.i[e].NOMBRE);
	}
}

void Menu_reservas::detalles_instalaciones(Instalaciones ins){
	printf("\n------------------------------\n");
	printf("\t\t%s", ins.NOMBRE);
	printf("\n------------------------------\n");
	std::stringstream horas;
	horas << "{ ";
	//TODO aqui falla

	for(int i = 0; i < ins.TAMANYO_HORAS_DISPONIBLES; i++){
		horas << std::to_string(ins.HORAS_DISPONIBLES[i]);
		horas << "-";
		horas << std::to_string(ins.HORAS_DISPONIBLES[i] + 1);
		horas << ", ";
	}
	horas << "}";
	cout << "Hora de apertura:"  + ins.HORA_APERTURA << endl ;
	cout << "Hora de cierre:"  + ins.HORA_CIERRE << endl ;
	cout << "Horas disponibles:"  + horas.str() << endl ;

	fflush(stdout);

}


void Menu_reservas::hacer_reserva(Ficha *f, Instalaciones *i, int hora){
	if(esta_hora_libre(hora, *i)){

	}
}

void Menu_reservas::mostrar_reservas_totales(){

}


bool Menu_reservas::esta_hora_libre(int hora, Instalaciones i){
	for(int e = 0; e < i.TAMANYO_HORAS_DISPONIBLES; e++){
		if (i.HORAS_DISPONIBLES[e]==hora) return true;
	}
	return false;
}



void Menu_reservas::imp_menu(Ficha *f){

	int salir = 0;
	while(!salir){
		limpiar();
		imp_instalaciones(inst);
		printf("\n------------------------------\n");
		printf("0 - Volver \nSeleccione la que quiera ver con mas detalle: ");
		fflush(stdout);
		int opcion;
		scanf("%i", &opcion);
		if(!opcion){
			salir=1;
		}else if((opcion-1) >= inst.tamanyo){

		} else if ((opcion-1) < inst.tamanyo){
			limpiar();
			detalles_instalaciones(inst.i[opcion-1]);
			printf("\n------------------------------\n");
			printf("V - Volver \nC - Contratar \nSeleccione que desea hacer: ");
			char opcion2;
			fflush(stdout);
			scanf("%c", &opcion2);
			if(opcion2=='V'){

			}
			else if(opcion2 == 'C'){
				printf("\nSeleccione la hora de entrada: ");
				int hora;
				fflush(stdout);
				scanf("%i", &hora);
				if(esta_hora_libre(hora, inst.i[opcion-1])){
					//TODO metodo de actualizar la información de las instalaciones en la bd
					int listTemp[inst.i[opcion-1].TAMANYO_HORAS_DISPONIBLES-1];
					int cont= 0;
					for (int o = 0; o < inst.i[opcion-1].TAMANYO_HORAS_DISPONIBLES; o++){
						if(inst.i[opcion-1].HORAS_DISPONIBLES[o]!=hora){
							listTemp[cont]= inst.i[opcion-1].HORAS_DISPONIBLES[o];
							cont++;
						}
					}

					--inst.i->TAMANYO_HORAS_DISPONIBLES;
					Reserva r;
					r.HORA = hora;
					r.I = inst.i[opcion-1];
					r.U = f->U;
					r.fecha = "por definir como lo vamos a hacer";

					f->RESERVAS[f->TAMANYO_RESERVAS]=r;
					++f->TAMANYO_RESERVAS;

					//TODO insert de la reserva update de la ficha y update de la instalacion


				}

			}
		}
	}
	//menuPrincipal(&f->U);

}
void Menu_reservas::limpiar(){
	if(SYSTEM_OPTION=='W'){
		system("cls");
	}else if(SYSTEM_OPTION=='L'){
		system("clear");
	}
}
