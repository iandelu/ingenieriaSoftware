#ifndef CITA_H
#define CITA_H

    #include "fecha.h"

    class Cita{
        private:
            string nota_;
            fecha fecha_;
            int id_;
            string dni_;
        public:
            inline Cita(string nota = "", fecha fecha, int id, string dni){
                nota_ = nota;
                fecha_ = fecha;
                id_ = id;
                dni_ = dni;
            }

            inline string getNota(){return nota_;}
            inline void setNota(string nota){nota_ = nota;}

            inline fecha getFecha(return fecha_;)
            inline void setFecha(fecha fecha){fecha_ = fecha;}

            inline int getID(){return id_;}
            inline void setID(int id){id_ = id;}

            inline string getDNI(){return dni_;}
            inline void setDNI(string dni){dni_ = dni;}
    }


#endif;