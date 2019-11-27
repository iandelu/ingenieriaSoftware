#ifndef PERSONA_H
#define PERSONA_H

#include "fecha.h"

using namesapce std;


class Persona{
    Private:
        string nombre_;
        string apellido_;
        string dni_;
        int telefono_;
        string direccion_;
        fecha fechanacimiento_;
        string compañia_;
        bool altamedica_;
    Public:
        inline fecha(string nombre, string apellido, string dni, int telefono, string direccion, fecha fechanacimiento, string compañia, bool altamedica = true){
           nombre_ = nombre,
           apellido_ = apellido;
           dni_ = dni;
           telefono_ = telefono;
           direccion_ = direccion;
           fechanacimiento_ = fechanacimiento;
           compania_ = compania;
           altamedica- = altamedica;
        }

        //observadores de la clase Persona
        
		inline string getDNI() const {return dni_;}
		inline string getNombre()  const {return nombre_;}
		inline string getApellido()  const {return apellidos_;}
		inline int getEdad() const {return edad_;}
		inline string getDireccion() const {return direccion;}
        inline fecha getFecha() const {return fechanacimiento_;}
        inline string getCompania() const {return compania_;}
        inline bool getAltamedica() const {return altamedica_;}

        //modificadores de la clase Persona
        inline void setDNI(string dni_){dni_ = dni;}
		inline void setNombre(string nombre_){nombre = nombre_;}
        inline void setApellido(string apellidos_){apellidos = apellidos_;}
        inline void setEdad(int edad_){edad = edad_;}
		inline void setDireccion(string direccion_){direccion = direccion_;}
        inline void SetFecha(fecha fechanacimiento){fechanacimiento_ = fechanacimiento;} 
        inline void setCompania(string compania){compania_ = compania;} 
        inline void setAltamedica(){altamedica_ = false;}

        //Funcion de borrar persona
        inline ~Persona(){
            nombre_ = "",
            apellido_ = "";
            dni_ = "";
            telefono_ = 0;
            direccion_ = "";
            fechanacimiento_.deleteFecha();
            compania_ = "";
            altamedica- = 0;

        }

};

#endif