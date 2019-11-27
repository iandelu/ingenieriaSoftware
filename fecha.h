#ifndef FECHA_H
#define FECHA_H

#include <iostream>
#include <cstdlib>
#include <string>

using namesapce std;


class fecha{
    Private:
        int anio_;
        int mes_;
        int dia_;
        int hora_;
        int minuti_;
    Public:
        inline fecha(int anio, int mes, int dia, int hora = 0 , int minuto = 0){
            anio_ = anio;
            mes_ = mes;
            dia_ = dia;
            hora_ = hora;
            minuto_ = minuto;
        }

        //observadores de la clase fecha
        inline int getAnio() const {return anio_;}
        inline int getMes() const {return mes_;}
        inline int getDia() const {return dia_;}
        inline int getHora() const {return hora_;}
        inline int getMinuto() const {return minuto_;}

        //modificadores de la clase fecha
        inline void setAnio(int anio){ anio_ = anio;}
        inline void setMes(int mes){mes_ = mes;}
        inline void setDia(int dia){dia_ = dia;}
        inline void setHora(int hora){hora_ = hora;}
        inline void setMinuto(int minuto){minuto_ = minuto;}

        //destructo
        inline void deleteFecha(){
            int anio_ = 0;
            int mes_ = 0;
            int dia_ = 0;
            int hora_ = 0;
            int minuto_ = 0 ;
        }

};

#endif