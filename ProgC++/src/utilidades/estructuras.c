/*
 * estructuras.c
 *
 *  Created on: 7 mar. 2019
 *      Author: ibai
 */


#include "estructuras.h"
/*
 * estructuras.h
 *
 *  Created on: 7 mar. 2019
 *      Author: ibai
 */


Usuario crearUsuarios(char name[], char lastname[], int cif, char fech_nac[], int tfn,
	char correo[], char direccion[], int seguriSocial, long account, char passwor[]){

	Usuario us;

	us.NOMBRE = name;
	us.APELLIDO = lastname;
	us.DNI = cif;
	us.FECHA_NACIMIENTO = fech_nac;
	us.TELEFONO = tfn;
	us.EMAIL=correo;
	us.DOMICILIO=direccion;
	us.N_SS=seguriSocial;
	us.N_CUENTA = account;
	us.PASSWORD = passwor;
	return us;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////



ZonaTrabajada crearZonasTrabajadas(char *tipo, char *objetivo){
	ZonaTrabajada z;
	z.OBJETIVO = objetivo;
	z.TIPO = tipo;
	return z;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////

Actividades crearActividades(ZonaTrabajada z[], int cant_zonas_trabajadas,char *nombre, char *descrip, char *material,int cant_materiales, float mensual, float quincena){
	Actividades a;
	a.TAMANYO_TRABAJA = cant_zonas_trabajadas;
	a.TAMANYO_MATERIAL = cant_materiales;
	a.TRABAJA = z;
	a.NOMBRE = nombre;
	a.DESCRIPCION = descrip;
	a.MATERIAL = material;
	a.TARIFA_MENSUAL = mensual;
	a.TARIFA_QUINCENA = quincena;
	return a;
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


Instalaciones crearInstalaciones(char nombre[], int hora_apertura, int hora_cierre){
	Instalaciones i;
	i.NOMBRE = nombre;
	i.HORA_APERTURA= hora_apertura;
	i.HORA_CIERRE = hora_cierre;

	int n_horas = hora_cierre - hora_apertura;

	i.TAMANYO_HORAS_DISPONIBLES = n_horas;
	while(n_horas+1){	// Creo un array de horas disponibles, que con cada reserva estás iran desapareciendo
		i.HORAS_DISPONIBLES[n_horas]= hora_cierre - n_horas;
		n_horas --;
	}

	return i;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Reserva crearReservas(Usuario u, Instalaciones *i, int hora){
	Reserva r;
	int cont = i->TAMANYO_HORAS_DISPONIBLES;
	while(cont){
		if(i->HORAS_DISPONIBLES[i->TAMANYO_HORAS_DISPONIBLES] == hora){
				i->HORAS_DISPONIBLES = 0;
				i->TAMANYO_HORAS_DISPONIBLES --;
				r.U = u;
				r.I = *i;
				r.HORA = hora;
		}
		cont--;
	}
	return r;
	}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


Ficha crearFichas(Usuario u, float pes_ini, float pes_obj, float pes_act, ZonaTrabajada zon_trab[], int cant_zonas_trabaj,float alt, char *fech_entr_gym, Actividades act_contr[], int cant_acti_contra, Reserva reservas[], int cant_reservas){
	Ficha f;
	f.U = u;
	f.PESO_INICIAL = pes_ini;
	f.PESO_OBJETIVO = pes_obj;
	f.PESO_ACTUAL = pes_act;
	f.TRABAJA = zon_trab;
	f.ALTURA = alt;
	f.FECHA_ENTRADA_GIMNASIO = fech_entr_gym;
	f.ACTIVIDADES_CONTRATADAS = act_contr;
	f.TAMANYO_ACTIVIDADES_CONTRATADAS=cant_acti_contra;
	f.RESERVAS = reservas;
	f.TAMANYO_RESERVAS = cant_reservas;
	f.TAMANYO_TRABAJA= cant_zonas_trabaj;
	return f;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



Empleados crearEmpleados(Usuario u, ZonaTrabajada *especialistaEn, Actividades *clasesQueImparte){
	Empleados e;
	e.U = u;
	e.ESPECIALISTA = especialistaEn;
	e.IMPARTE = clasesQueImparte;
	return e;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////



