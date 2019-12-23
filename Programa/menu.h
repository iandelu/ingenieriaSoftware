#ifndef MENU_H
#define MENU_H

#include "persona.h"
#include "funcionesPersona.h"
#include "funcionesCita.h"
#include "tratamiento.h"
#include "cita.h"
#include "fecha.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cstdio>



using namespace std;

    void setMenu(list <Persona> &persona, list <Cita> &cita, Fecha dia);
    void pacientes(list <Persona> &persona);
    void citas(list <Persona> &persona, list <Cita> &cita, Fecha dia);
    void tratamientos(list <Persona> &persona);

    //Para introducir los datos por teclado
    void datosPersona(Persona &pe);
    void datosTratamientos(Tratamiento &t);
    //void datosCita(Cita &c);

#endif