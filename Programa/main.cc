#include "fecha.h"
#include "persona.h"
#include "menu.h"
//#include "cita.h"
#include "funcionesPersona.h"
#include <list>
#include <ctime>

using namespace std;

void mostrarMenu();
void setDia_actual(Fecha &Dia);
//Persona datospersona();



int main(void){
    Fecha fe(0,0,0);
    Persona p("nombre", "apellido", "dni", 0, "direccion",fe, "compania");
    Tratamiento t("dni", "nombre", fe, "detalles");
    list <Persona> Personas;
    list <Cita> Citas;
    //list <Tratamiento> Tratamientos;
    
    leePersona(Personas);
    leeCita(Citas);

    Fecha Dia(1,1,2020);
    setDia_actual(Dia);

    system("clear");
    cout<<"Bienvenido, hoy es: "<<Dia.getDia()<<"/"<<Dia.getMes()<<"/"<<Dia.getAnio()<<"\n";
    cout<<"Aqui tiene sus citas de hoy:\n\n";

    mostrarCitas(Dia.getDia(), Dia.getMes(), Dia.getAnio(), Citas);

    cin.ignore();
	cout<<"\n\nPulsa intro para continuar...";
	cin.get();

    setMenu(Personas, Citas, Dia);

    escribePersona(Personas);
    escribirCitas(Citas);

    return 0;
    
}






void setDia_actual(Fecha &Dia){
    time_t now = time(0);

    tm * time = localtime(&now);

    Dia.setAnio((time->tm_year + 1900));
    Dia.setMes((time->tm_mon + 1));
    Dia.setDia(time->tm_mday);
}

