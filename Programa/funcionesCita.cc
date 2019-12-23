#include "funcionesCita.h"


/*string fechtostring(Fecha f){
    string fecha = f.getDia() + "/" + f.getMes();
    fecha = fecha + "/";
    fecha = fecha + f.getAnio();
    return fecha;
}*/

bool addCita(Cita cita, list <Cita> &citas_, list <Persona> personas_){

    list <Persona> :: iterator i;

    for(i = personas_.begin(); i != personas_.end(); i++){
        if( i->getDNI() == cita.getDNI() ){
             citas_.push_back(cita);
            return true;
        }
    }

    return false;
}

void escribirCitas(list <Cita> citas_){

    list <Cita> :: iterator i;
    ofstream nombrefich;
    nombrefich.open("citas.txt");
    
    for(i = citas_.begin();i!=citas_.end();i++){

        nombrefich<<i->getDNI()<<",";
        nombrefich<<i->fecha_.getDia()<<","<<i->fecha_.getMes()<<","<<i->fecha_.getAnio()<<","<<i->fecha_.getHora()<<","<<i->fecha_.getMinuto()<<",";
        nombrefich<<i->getNota()<<",";
        if(i->getEstado() == 0){
            nombrefich<<"CANCELADA\n";
        }

        else if(i->getEstado() == 1){
            nombrefich<<"REALIZADA\n";
        }

        else if(i->getEstado() == 2){
            nombrefich<<"PENDIENTE\n";
        }

    }
    nombrefich.close();
}


bool mostrarCitas(int dia, int mes, int anio, list <Cita> citas_){

    list <Cita> :: iterator i;
    //Cita c();
    bool res = false;

    for(i = citas_.begin(); i != citas_.end(); i++){

        if(i->fecha_.getDia() == dia && i->fecha_.getMes() == mes && i->fecha_.getAnio() == anio){

            cout<<"FECHA: "<<dia<<"/"<<mes<<"/"<<anio<<" "<<i->fecha_.getHora()<<":"<<i->fecha_.getMinuto()<<".\n";
            cout<<"DNI: "<<i->getDNI()<<"\n";
            cout<<"NOTA: "<<i->getNota()<<"\n";

            if(i->getEstado() == 0){
                cout<<"Estado de la cita: Cancelada.\n";
            }

            else if(i->getEstado() == 1){
                cout<<"Estado de la cita: Realizada.\n";
            }

            else if(i->getEstado() == 2){
                cout<<"Estado de la cita: Pendiente.\n";
            }

            cout<<"__________________________________________________________________________\n\n";
            res = true;
        }
    }

    return res;
}


bool mostrarCita(string dni, int dia, int mes, int anio, list <Cita> citas_){

    list <Cita> :: iterator i;

    for(i = citas_.begin(); i != citas_.end(); i++){

        if( i->getDNI() == dni && i->fecha_.getDia() == dia && i->fecha_.getMes() == mes &&i->fecha_.getAnio() == anio){
            cout<<"FECHA: "<<dia<<"/"<<mes<<"/"<<anio<<" "<<i->fecha_.getHora()<<":"<<i->fecha_.getMinuto()<<".\n";
            cout<<i->getDNI()<<".\n";
            cout<<i->getNota()<<".\n";

            if(i->getEstado() == 0){
                cout<<"Estado de la cita: Cancelada.\n";
            }

            else if(i->getEstado() == 1){
                cout<<"Estado de la cita: Realizada.\n";
            }

            else if(i->getEstado() == 2){
                cout<<"Estado de la cita: Pendiente.\n";
            }

            return true;
        }
    }

    return false;
}

void leeCita(list <Cita> &citas_){

    ifstream f;
    f.open("citas.txt", ios::in);
    Fecha aux(1,2,3);

    Cita c(aux, "22XD", "dni");
    string cad;
    citas_.clear();

    while(getline(f, cad, ',') && !f.eof() ){

        c.setDNI(cad);

        getline(f, cad, ',');
        c.fecha_.setDia( atoi(cad.c_str()) );

        getline(f, cad, ',');
        c.fecha_.setMes( atoi(cad.c_str()) );

        getline(f, cad, ',');
        c.fecha_.setAnio( atoi(cad.c_str()) );

        getline(f, cad, ',');
        c.fecha_.setHora( atoi(cad.c_str()) );

        getline(f, cad, ',');
        c.fecha_.setMinuto( atoi(cad.c_str()) );

        getline(f, cad, ',');
        c.setNota(cad);

        getline(f, cad, '\n');
        
        if(cad == "REALIZADA"){
            c.setEstado(1);
        }

        else if(cad == "PENDIENTE"){
            c.setEstado(2);
        }

        else if(cad == "CANCELADA"){
            c.setEstado(0);
        }

        citas_.push_back(c);
    }

    f.close();  
}


bool mostrarPaciente(string dni, list <Cita> citas_){

    list <Cita> :: iterator i;
    bool res = false;

    for(i = citas_.begin(); i != citas_.end(); i++){
        if(i->getDNI() == dni){
            cout<<"FECHA: "<<i->fecha_.getDia()<<"/"<<i->fecha_.getMes()<<"/"<<i->fecha_.getAnio()<<" "<<i->fecha_.getHora()<<":"<<i->fecha_.getMinuto()<<".\n";
            cout<<i->getDNI()<<".\n";
            cout<<i->getNota()<<".\n";

            if(i->getEstado() == 0){
                cout<<"Estado de la cita: Cancelada.\n";
            }

            else if(i->getEstado() == 1){
                cout<<"Estado de la cita: Realizada.\n";
            }

            else if(i->getEstado() == 2){
                cout<<"Estado de la cita: Pendiente.\n";
            }

            cout<<"__________________________________________________________________________\n\n";
            res = true;
        }
    }

    return res;
}


bool deleteCita(int dia, int mes, int anio, string dni, list <Cita> citas_, Fecha hoy){

    list <Cita> :: iterator i;

    if(anio >= hoy.getAnio()){
        if(mes >= hoy.getMes()){
            if(dia >= hoy.getDia()){
                for(i = citas_.begin(); i != citas_.end(); i++){
                    if(i->getDNI() == dni && i->fecha_.getDia() == dia && i->fecha_.getMes() == mes && i->fecha_.getAnio() == anio){
                        citas_.erase(i);
                    return true;
                    }
                }
            }
        }
    }

    return false;
}

bool modificarCita(Cita c, string dni, Fecha f, list <Cita> &citas_, list <Persona> persona, Fecha hoy){
    
    list <Cita> ::iterator i;
    bool res;

    if(f.getAnio() >= hoy.getAnio()){
        if(f.getMes() >= hoy.getMes()){
            if(f.getDia() >= hoy.getDia()){
                for(i = citas_.begin(); i != citas_.end(); i++){
                    if( i->getDNI() == dni && i->fecha_.getDia() == f.getDia() && i->fecha_.getMes() == f.getMes() && i->fecha_.getAnio() == f.getAnio()){
                        citas_.erase(i);
                        if(addCita(c, citas_, persona)){
                            return true;
                        }
                        return false;
                    }
    
    
                }
            }
        
        }
    }

    return false;
}


bool cambiarEstado(string dni, list <Cita> &citas, int estado){
    list <Cita> :: iterator i;

    for(i = citas.begin(); i!= citas.end(); i++){
        if(i->getDNI() == dni ){
            i->setEstado(estado);
            return true;
        }
    }

    return false;
}
