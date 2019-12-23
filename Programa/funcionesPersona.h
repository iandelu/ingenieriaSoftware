#ifndef FUNCIONESPERSONA_H
#define FUNCIONESPERSONA_H

#include <string>
#include <iostream>
#include <cstdlib>
#include <fstream>
#include "persona.h"


using namespace std;


bool addPersona(Persona persona, list <Persona> &persona_);   //Añade una persona a la lista. Devuelve true si se ha añadido y false si no
bool deletePersona(string dni, list <Persona> &persona_); //Elimina una persona de la lista. Devuelve true si se ha eliminado y false si no
void mostrarPersonas(list <Persona> persona_);  //Imprime los datos de todas las personas por pantalla
bool mostrarPaciente(Persona p, list <Persona> persona_);    //Muestra los datos de un paciente. Devuelve true si se ha encontrado y false si no
bool modificarPersona(string dni, Persona p, list <Persona> &persona_);   //Recibe el dni de la persona a modificar y los nuevos valores de dicha persona. Devuelve true si se ha modificado y false si no
Persona buscarPersona(string dni, list <Persona> persona_);  //Busca una persona en la lista y la retorna. Si no se encuentra la persona, devuelve una persona NULL (parametros vacios)
bool darAlta(string dni, list <Persona> &persona_);   //Da el alta medica a un paciente. Devuelve true si se ha modificado y false si no
bool darBaja(string dni, list <Persona> &persona_);   //Da la baja medica a un paciente. Devuelve true si se ha modificado y false si no
        
//FUNCIONES LISTA Y FICHERO
void escribePersona(list <Persona> persona_);  //Escribe la lista persona en un fichero
void leePersona(list <Persona> &persona_);  //Escribe el fichero en una lista


#endif