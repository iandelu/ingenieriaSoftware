#include "persona.h"

#include <fstream>

//Funciones de tratamientos

void Persona::datosTratamientos(Tratamiento &t){
        string cad;
        Fecha fe(0,0,0);
        cin.ignore();
        cout<<"Introduzca un nombre en clave para tratamiento( recuerde que el nombre del tratamiento no puede coincidir con otro que no esté acabado): ";
        getline(cin, cad);
        t.setNombre(cad);

        cout<<"Introduzca los detalles del tratamiento: ";
        getline(cin, cad);
        t.setDetalles(cad);

        t.setDNI(getDNI());

        cout<<"Introduzca el dia de la fecha de inicio: ";
        cin>>cad;
        fe.setDia(atoi(cad.c_str()));

        cout<<"Introduzca el mes de la fecha de inicio: ";
        cin>>cad;
        fe.setMes(atoi(cad.c_str()));

        cout<<"Introduzca el año de la fecha de inicio: ";
        cin>>cad;
        fe.setAnio(atoi(cad.c_str()));

        t.setFechainicio(fe);

        cout<<"Introduzca el dia de la fecha de final: ";
        cin>>cad;
        fe.setDia(atoi(cad.c_str()));

        cout<<"Introduzca el mes de la fecha de final: ";
        cin>>cad;
        fe.setMes(atoi(cad.c_str()));

        cout<<"Introduzca el año de la fecha de final: ";
        cin>>cad;
        fe.setAnio(atoi(cad.c_str()));

        t.setFechafinal(fe);

        cin.ignore();
}

void Persona::escribirTratamientos(){
    list <Tratamiento> :: iterator i;

    ofstream f;
    string nombrefich = getDNI() + ".txt";
    f.open(nombrefich.c_str());

    for(i = historial_.begin(); i != historial_.end(); i++){

        f<<i->getNombre()<<",";
        f<<i->getDetalles()<<",";
        f<<i->getDNI()<<",";
        f<<i->getFechainicio().getDia()<<","<<i->getFechainicio().getMes()<<","<<i->getFechainicio().getAnio()<<",";
        f<<i->getFechafinal().getDia()<<","<<i->getFechafinal().getMes()<<","<<i->getFechafinal().getAnio()<<",";
        if(i->getEstado() == 0){
            f<<"NOFINALIZADO\n";
        }
        else if(i->getEstado() == 1){
            f<<"FINALIZADO\n";
        }

        else if(i->getEstado() == 2){
            f<<"CANCELADO\n";
        }
    }

    f.close();
}

void Persona::leertratamientos(){
    ifstream f;
    string nombrefich = getDNI() + ".txt";
    f.open(nombrefich.c_str());

    string cad;
    Fecha fe(0,0,0);
    Tratamiento t("dni", "nombre", fe, "detalles");

    historial_.clear();

    while( getline(f, cad, ',') && !f.eof() ){

        t.setNombre(cad);

        getline(f, cad, ',');
        t.setDetalles(cad);

        getline(f, cad, ',');
        t.setDNI(cad);

        getline(f, cad, ',');
        fe.setDia(atoi(cad.c_str()));

        getline(f, cad, ',');
        fe.setMes(atoi(cad.c_str()));

        getline(f, cad, ',');
        fe.setAnio(atoi(cad.c_str()));

        t.setFechainicio(fe);

        getline(f, cad, ',');
        fe.setDia(atoi(cad.c_str()));

        getline(f, cad, ',');
        fe.setMes(atoi(cad.c_str()));

        getline(f, cad, ',');
        fe.setAnio(atoi(cad.c_str()));

        t.setFechafinal(fe);

        getline(f, cad, '\n');
        if(cad=="FINALIZADO"){t.setEstado(1);}
        if(cad=="NOFINALIZADO"){t.setEstado(0);}
        if(cad=="CANCELADO"){t.setEstado(2);}

        historial_.push_back(t);
    }

    f.close();
}


void Persona::mostrarTratamientos(){
    list <Tratamiento> :: iterator i;

    for(i = historial_.begin(); i != historial_.end(); i++){
        cout<<"DNI: "<<i->getDNI()<<"\n";
        cout<<"FECHA INICIO: "<<i->getFechainicio().getDia()<<"/"<<i->getFechainicio().getMes()<<"/"<<i->getFechainicio().getAnio()<<"\n";
        cout<<"FECHA FIN: "<<i->getFechafinal().getDia()<<"/"<<i->getFechafinal().getMes()<<"/"<<i->getFechafinal().getAnio()<<"\n";
        cout<<"NOMBRE TRATAMIENTO: "<<i->getNombre()<<"\n";
        cout<<"DETALLES: "<<i->getDetalles()<<"\n";
        cout<<"ESTADO DEL TRATAMIENTO: ";
        if(i->getEstado() == 1){
            cout<<"Finalizado\n";
            cout<<"__________________________________________________________________________\n\n";
        }
        else if(i->getEstado() == 0){
            cout<<"No Finalizado\n";
            cout<<"__________________________________________________________________________\n\n";
        }

        else if(i->getEstado() == 2){
            cout<<"Cancelado.\n";
            cout<<"__________________________________________________________________________\n\n";
        }
    }

}


bool Persona::mostrarTratamiento(string dni, string nombre){

    list <Tratamiento> :: iterator i;

    for(i = historial_.begin(); i != historial_.end(); i++){

        if(i->getDNI() == dni){
            cout<<"DNI: "<<i->getDNI()<<"\n";
            cout<<"FECHA INICIO: "<<i->getFechainicio().getDia()<<"/"<<i->getFechainicio().getMes()<<"/"<<i->getFechainicio().getAnio()<<"\n";
            cout<<"FECHA FIN: "<<i->getFechafinal().getDia()<<"/"<<i->getFechafinal().getMes()<<"/"<<i->getFechafinal().getAnio()<<"\n";
            cout<<"NOMBRE TRATAMIENTO: "<<i->getNombre()<<"\n";
            cout<<"DETALLES: "<<i->getDetalles()<<"\n";
            cout<<"ESTADO DEL TRATAMIENTO: ";
            if(i->getEstado() == 1){
                cout<<"Finalizado\n";
                cout<<"__________________________________________________________________________\n\n";
            }

            else if(i->getEstado() == 0){
                cout<<"No Finalizado\n";
                cout<<"__________________________________________________________________________\n\n";
            }

            else if(i->getEstado() == 2){
                cout<<"Cancelado.\n";
                cout<<"__________________________________________________________________________\n\n";
            }

            return true;
        }
    }

    return false;

}


bool Persona::addTratamiento(){
    Fecha f(0,0,0);
    Tratamiento t("dni", "nombre", f, "detalles");
    list <Tratamiento> :: iterator i;

    datosTratamientos(t);

    for(i = historial_.begin(); i != historial_.end(); i++){
        if( i->getNombre() == t.getNombre() ){
            if(i->getEstado() == 0){
                return false;
            }
        }
    }
    
    historial_.push_back(t);
    return true;
    
}


bool Persona::finalizarTratamiento(string dni, string nombre){

    list <Tratamiento> :: iterator i;

    for(i = historial_.begin(); i != historial_.end(); i++){
        if(i->getDNI() == dni && i->getNombre() == nombre){
            i->setEstado(1);
            return true;
        }
    }

    return false;
}

bool Persona::cancelarTratamiento(string dni, string nombre){

    list <Tratamiento> :: iterator i;

    for(i = historial_.begin(); i != historial_.end(); i++){
        if(i->getDNI() == dni && i->getNombre() == nombre){
            i->setEstado(2);
            return true;
        }
    }

    return false;
}

void Persona::borrarLista(){
    historial_.clear();
}

bool Persona::modificarTratamiento(string dni, string nombre, Tratamiento t){

    list <Tratamiento> :: iterator i;

    for(i = historial_.begin(); i != historial_.end(); i++){
        if(i->getDNI() == dni && i->getNombre() == nombre){
            if(i->getEstado() == 1 || i->getEstado() == 2){
                return false;
            }

            i->setDetalles(t.getDetalles());
            i->setDNI(t.getDNI());
            i->setEstado(0);
            i->setFechafinal(t.getFechafinal());
            i->setFechainicio(t.getFechainicio());
            i->setNombre(t.getNombre());
            return true;
        }
    }

    return false;
}

