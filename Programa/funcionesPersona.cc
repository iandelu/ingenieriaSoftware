#include "persona.h"
#include "funcionesPersona.h"

#include <list>

bool addPersona(Persona persona, list <Persona> &persona_){

    list <Persona> :: iterator i;

    for(i = persona_.begin(); i != persona_.end(); i++){
        if( i->getDNI() == persona.getDNI() ){
            return false;
        }
    }

    persona_.push_back(persona);
    return true;
}

void mostrarPersonas(list <Persona> persona_){

    list <Persona> :: iterator i;

    for(i = persona_.begin(); i != persona_.end(); i++){

        cout<<"NOMBRE: "<<i->getNombre()<<".\n";
        cout<<"APELLIDOS: "<<i->getApellido()<<".\n";
        cout<<"DNI: "<<i->getDNI()<<".\n";
        cout<<"DIRECCION: "<<i->getDireccion()<<".\n";
        cout<<"TELEFONO:"<<i->getTelefono()<<".\n";
        cout<<"FECHA NACIMIENTO: "<<i->fechanacimiento_.getDia()<<"/"<<i->fechanacimiento_.getMes()<<"/"<<i->fechanacimiento_.getAnio()<<".\n";
        cout<<"COMPAÑIA: "<<i->getCompania()<<".\n";

        if(i->getAltamedica() == true){
            cout<<"ALTA MEDICA: SI\n";
            cout<<"__________________________________________________________________________\n\n";
        }

        else{
            cout<<"ALTA MEDICA: NO\n";
            cout<<"__________________________________________________________________________\n\n";
        }
    }
}

bool mostrarPaciente(Persona p, list <Persona> persona_){

    list <Persona> :: iterator i;

    for(i = persona_.begin(); i != persona_.end(); i++){

        if( i->getDNI() == p.getDNI() ){
            cout<<p.getNombre()<<", ";
            cout<<p.getApellido()<<", ";
            cout<<p.getDNI()<<", ";
            cout<<p.getDireccion()<<", ";
            cout<<p.getCompania()<<", ";
            cout<<p.getTelefono()<<", ";
            cout<<p.fechanacimiento_.getDia()<<"/"<<p.fechanacimiento_.getMes()<<"/"<<p.fechanacimiento_.getAnio()<<", ";

            if(p.getAltamedica() == true){
                cout<<"Alta medica: SI\n";
            }

            else{
                cout<<"Alta medica: NO\n";
            }

            return true;
        }
    }

    return false;
}


void escribePersona(list <Persona> persona_){

    list <Persona> :: iterator i;

    ofstream f;
    f.open("pacientes.txt");

    for(i = persona_.begin(); i != persona_.end(); i++){

        //i->escribirTratamientos();

        f<<i->getNombre()<<",";
        f<<i->getApellido()<<",";
        f<<i->getDNI()<<",";
        f<<i->getTelefono()<<",";
        f<<i->getDireccion()<<",";
        f<<i->fechanacimiento_.getDia()<<","<<i->fechanacimiento_.getMes()<<","<<i->fechanacimiento_.getAnio()<<",";
        f<<i->getCompania()<<",";

        if(i->getAltamedica() == true){
            f<<"SI\n";
        }

        else{
            f<<"NO\n";
        }
    }

    f.close();
}

void leePersona(list <Persona> &persona_){

    ifstream f;
    f.open("pacientes.txt", ios::in);
    Fecha aux(1,2,3);

    Persona p("nombre", "apellido", "dni", 0, "direccion", aux, "compania");
    string cad;
    persona_.clear();

    while( getline(f, cad, ',') && !f.eof() ){

        p.setNombre(cad);

        getline(f, cad, ',');
        p.setApellido(cad);

        getline(f, cad, ',');
        p.setDNI(cad);

        getline(f, cad, ',');
        p.setTelefono( atoi(cad.c_str()) );

        getline(f, cad, ',');
        p.setDireccion(cad);

        getline(f, cad, ',');
        p.fechanacimiento_.setDia( atoi(cad.c_str()) );

        getline(f, cad, ',');
        p.fechanacimiento_.setMes( atoi(cad.c_str()) );

        getline(f, cad, ',');
        p.fechanacimiento_.setAnio( atoi(cad.c_str()) );

        getline(f, cad, ',');
        p.setCompania(cad);

        getline(f, cad, '\n');
        if(cad == "SI"){ p.setAltamedica(true); }
        else{ p.setAltamedica(false); }

        //p.leertratamientos();
        persona_.push_back(p);
    }

    f.close();  
}


Persona buscarPersona(string dni, list <Persona> persona_){

    list <Persona> :: iterator i;
    Fecha aux(1,2,3);
    Persona p = Persona("nombre", "apellido", "dni", 0, "direccion",aux, "compania");

    for(i = persona_.begin(); i != persona_.end(); i++){
        if( (i->getDNI()) == dni ){
            p.setNombre(i->getNombre());
            p.setApellido(i->getApellido());
            p.setDNI(i->getDNI());
            p.setTelefono(i->getTelefono());
            p.setDireccion(i->getDireccion());
            p.fechanacimiento_.setDia(i->fechanacimiento_.getDia());
            p.fechanacimiento_.setMes(i->fechanacimiento_.getMes());
            p.fechanacimiento_.setAnio(i->fechanacimiento_.getAnio());
            p.setCompania(i->getCompania());
            p.setAltamedica(i->getAltamedica());
            return p;

        }

    }
    
    aux = Fecha(0,0,0); 
    p = Persona("NULL", "NULL", "NULL", 0, "NULL", aux, "NULL");
    return p;
}

bool deletePersona(string dni, list <Persona> &persona_){

    list <Persona> ::iterator i;

    for(i = persona_.begin(); i != persona_.end(); i++){
        if( i->getDNI() == dni ){
            persona_.erase(i);
            return true;
        }
    }

    return false;
}

bool modificarPersona(string dni, Persona p, list <Persona> &persona_){
    
    list <Persona> ::iterator i;

    for(i = persona_.begin(); i != persona_.end(); i++){
        if( i->getDNI() == dni ){
            persona_.erase(i);
            if(addPersona(p, persona_)){
                return true;
            }
            return false;
        }
    }

    return false;
}


bool darAlta(string dni, list <Persona> &persona_){

    list <Persona> :: iterator i;
    bool res = true;

    for(i = persona_.begin(); i != persona_.end(); i++){
        if(i->getDNI() == dni){
            i->setAltamedica(res);
            return true;
        }
    }

    return false;
}

bool darBaja(string dni, list <Persona> &persona_){

    list <Persona> :: iterator i;
    bool res = false;

    for(i = persona_.begin(); i != persona_.end(); i++){
        if(i->getDNI() == dni){
            i->setAltamedica(res);
            return true;
        }
    }

    return false;
}