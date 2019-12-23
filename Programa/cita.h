#ifndef CITA_H
#define CITA_H

    #include "fecha.h"
    #include "persona.h"

    class Cita{
        private:
            string nota_;
            string dni_;
            int estado_;    //Si es 0->CANCELADA, si es 1->REALIZADA, si es 2->PENDIENTE.
        public:
            Fecha fecha_;
            Cita(Fecha fecha, string dni, string nota = "", int estado = 2){
                nota_ = nota;
                fecha_ = fecha;
                dni_ = dni;
                estado_ = estado;
            }

            inline string getNota(){return nota_;}
            inline void setNota(string nota){nota_ = nota;}

            inline Fecha getFecha(){return fecha_;}
            inline void setFecha(Fecha fecha){fecha_ = fecha;}

            //inline int getID(){return id_;}
            //inline void setID(int id){id_ = id;}

            inline string getDNI(){return dni_;}
            inline void setDNI(string dni){dni_ = dni;}

            inline int getEstado(){return estado_;}
            inline void setEstado(int estado){estado_ = estado;}
    };

#endif