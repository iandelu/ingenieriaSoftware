#include "fecha.h"
#include "persona.h"
#include "menu.h"
//#include "cita.h"
#include "funcionesPersona.h"
#include <list>

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
    cout<<"Bienvenido, aqui tiene sus citas de hoy:\n\n";

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
    int numero; //Dato auxiliar para introducir la fecha de hoy
    int aux = 0;

    do{
        system("clear");
        cout<<"Hola, introduzca la fecha de hoy para poder utilizar el programa.\n\n";
        cout<<"Dia: ";
        cin>>numero;

        if(numero<1 || numero >31){
            aux = 0;
            cin.ignore();
            cout<<"Dia no valido. Introduzca un valor entre 1 y 31.\n";
            cin.get();
        }   

        else{
            Dia.setDia(numero);
            aux = 1;
        }
    }while(aux != 1);


    do{
        system("clear");
        cout<<"Mes: ";
        cin>>numero;

        if(numero<1 || numero>12){
            aux = 0;
            cin.ignore();
            cout<<"Mes no valido. Introduzca un valor entre 1 y 12.\n";
            cin.get();
        }

        else{
            aux = 1;
            Dia.setMes(numero);
        }
    }while(aux != 1);

    do{
        system("clear");
        cout<<"Año: ";
        cin>>numero;

        if(numero<2019 || numero > 2100){
            aux = 0;
            cin.ignore();
            cout<<"Año no valido.\n";
            cin.get();
        }

        else{
            aux = 1;
            Dia.setAnio(numero);
        } 
    }while(aux != 1);

}

