#ifndef TRATAMIENTOS_H
#include TRATAMIENTOS_H

#include "fecha.h"

class Tratamientos{
    private:
        string nombre_;
        fecha fecha_;
        string detalles_;
        string dni_;
    public:

        inline Tratamiento(string nombre, fecha fecha, detalles = "", dni){
            nombre_ = nombre;
            fecha_ = fecha;
            detalles_ = detalles;
            dni_ = dni;
        }

        inline string getNombre(){return nombre_;}
        inline void setNombre(string nombre){nombre_ = nombre;}

        inline fecha getFechainicio(){return fecha_;}
        inline void setFechainicio(fecha fecha){fecha_ = fecha;}

        inline fecha getFechafinal(){return fecha_;}
        inline void setFechafinal(fecha fecha){fecha_ = fecha;}

        inline string getDetalles(){return detalles_;}
        inline void setDetalles(string detalles){detalles_ = detalles;}

        inline string getDNI(){return dni_;}
        inline void setDNI(string dni){dni_ = dni;}
};

#endif;