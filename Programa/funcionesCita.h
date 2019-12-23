#ifndef FUNCIONESCITAS_H
#define FUNCIONESCITAS_H

#include "cita.h"
#include <list>
#include <fstream>

void leeCita(list <Cita> &citas_);      //Pasa las citas de un fichero a una lista.
bool addCita(Cita cita, list <Cita> &citas_, list <Persona> personas_); //Añade una cita a un paciente.
void escribirCitas(list <Cita> citas_);     //Pasa las citas de la lista a un fichero.
bool mostrarPaciente(string dni, list <Cita> citas_);   //Muestra todas las citas de un paciente.
//void mostrarCitas(list <Cita> citas_);
bool mostrarCita(string dni, int dia, int mes, int anio, list <Cita> citas_);   //Muestra una cita determinada de un paciente.
bool mostrarCitas(int dia, int mes, int anio, list <Cita> citas_);      //Muestra todas las citas de un dia determinado.
bool deleteCita(int dia, int mes, int anio, string dni, list <Cita> citas_);    //Cancela (borra) una cita.
bool modificarCita(Cita c, string dni, Fecha f, list <Cita> &citas_, list <Persona> persona, Fecha hoy);
bool cambiarEstado(string dni, list <Cita> &citas, int estado);


//string altatostring(bool a);

//string fechtostring(Fecha f);

#endif