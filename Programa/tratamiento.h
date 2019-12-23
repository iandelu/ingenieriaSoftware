#ifndef TRATAMIENTOS_H
#define TRATAMIENTOS_H

#include "fecha.h"

class Tratamiento{
    private:
        string nombre_;
        Fecha fecha_;
        string detalles_;
        string dni_;
        int estado_;//0->NO FINALIZADO, 1->FINALIZADO, 2->CANCELADO
    public:

        Tratamiento(string dni, string nombre, Fecha fecha, string detalles = " ", int estado = 0){
            nombre_ = nombre; 
            fecha_ = fecha;
            detalles_ = detalles;
            dni_ = dni;
            estado_ = estado;
        }

        inline string getNombre(){return nombre_;}
        inline void setNombre(string nombre){nombre_ = nombre;}

        inline Fecha getFechainicio(){return fecha_;}
        inline void setFechainicio(Fecha fecha){fecha_ = fecha;}

        inline Fecha getFechafinal(){return fecha_;}
        inline void setFechafinal(Fecha fecha){fecha_ = fecha;}

        inline string getDetalles(){return detalles_;}
        inline void setDetalles(string detalles){detalles_ = detalles;}

        inline string getDNI(){return dni_;}
        inline void setDNI(string dni){dni_ = dni;}

        inline int getEstado(){return estado_;}
        inline void setEstado(int estado){estado_ = estado;}

        //inline int getID(){return id_;}
        //inline void setDNI(int id){id_ = id;}
};

#endif