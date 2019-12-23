#ifndef PERSONA_H
#define PERSONA_H

#include "fecha.h"
#include "tratamiento.h"
#include <iostream>
#include <string>
#include <fstream>
#include <list>
#include <cstdlib>
#include <cstdio>


using namespace std;


class Persona{
    private:
        string nombre_;
        string apellido_;
        string dni_;
        int telefono_;
        string direccion_;
        string compania_;
        bool altamedica_;
        list <Tratamiento> historial_;
    public:
        Fecha fechanacimiento_;
        inline Persona(string nombre, string apellido, string dni, int telefono, string direccion, Fecha fechanacimiento, string compania, bool altamedica = false){
           nombre_ = nombre;
           apellido_ = apellido;
           dni_ = dni;
           telefono_ = telefono;
           direccion_ = direccion;
           fechanacimiento_ = fechanacimiento;
           compania_ = compania;
           altamedica_ = altamedica;
        }

        //observadores de la clase Persona
        
		inline string getDNI() const {return dni_;}
		inline string getNombre()  const {return nombre_;}
		inline string getApellido()  const {return apellido_;}
		inline int getTelefono() const {return telefono_;}
		inline string getDireccion() const {return direccion_;}
        inline Fecha getFecha() const {return fechanacimiento_;}
        inline string getCompania() const {return compania_;}
        inline bool getAltamedica() const {return altamedica_;}

        //modificadores de la clase Persona
        inline void setDNI(string dni){dni_ = dni;}
		inline void setNombre(string nombre){nombre_ = nombre;}
        inline void setApellido(string apellidos){apellido_ = apellidos;}
        inline void setTelefono(int telefono){telefono_ = telefono;}
		inline void setDireccion(string direccion){direccion_ = direccion;}
        inline void SetFecha(Fecha fechanacimiento){fechanacimiento_ = fechanacimiento;} 
        inline void setCompania(string compania){compania_ = compania;} 
        inline void setAltamedica(bool altamedica){altamedica_ = altamedica;}

        //Funciones de tratamientos
        void escribirTratamientos();
        void leertratamientos();
        void mostrarTratamientos();
        void mostrarTratamiento(Fecha fecha);
        bool addTratamiento();
        bool finalizarTratamiento(string dni, string nombre);
        bool cancelarTratamiento(string dni, string nombre);
        void datosTratamientos(Tratamiento &t);
        bool modificarTratamiento(string dni, string nombre, Tratamiento t);
        bool mostrarTratamiento(string dni, string nombre);

        void borrarLista();

        //Funcion de borrar persona
        /*inline ~Persona(){
            nombre_ = "",
            apellido_ = "";
            dni_ = "";
            telefono_ = 0;
            direccion_ = "";
            fechanacimiento_.deleteFecha();
            compania_ = "";
            altamedica- = 0;

        }*/

};

#endif

