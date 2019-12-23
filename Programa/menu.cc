#include "menu.h"

void datosPersona(Persona &pe){

    string aux;
    
    cout<<"Nombre del paciente: ";
    cin.ignore();
    getline(cin, aux);
    pe.setNombre(aux);

    cout<<"Apellidos del paciente: ";
    getline(cin, aux);
    pe.setApellido(aux);

    cout<<"DNI del paciente: ";
    cin>>aux;
    pe.setDNI(aux);

    cout<<"Telefono del paciente: ";
    cin>>aux;
    pe.setTelefono(atoi(aux.c_str()));

    cin.ignore();
    cout<<"Direccion del paciente: ";
    getline(cin, aux);
    pe.setDireccion(aux);

    cout<<"Dia de nacimiento del paciente: ";
    cin>>aux;
    pe.fechanacimiento_.setDia(atoi(aux.c_str()));

    cout<<"Mes de nacimiento del paciente: ";
    cin>>aux;
    pe.fechanacimiento_.setMes(atoi(aux.c_str()));

    cout<<"Año de nacimiento del paciente: ";
    cin>>aux;
    pe.fechanacimiento_.setAnio(atoi(aux.c_str()));

    cin.ignore();

    cout<<"Compañia del paciente: ";
    getline(cin, aux);
    pe.setCompania(aux);

    cin.ignore();
}


void datosCita(Cita &c){

     string aux;
        cin.ignore();
        cout<<"Nota de la cita: ";
        getline(cin, aux);
        c.setNota(aux);

        cout<<"DNI del paciente de la cita: ";
        cin>>aux;
        c.setDNI(aux);
    
        cout<<"Dia de la cita: ";
        cin>>aux;
        c.fecha_.setDia(atoi(aux.c_str()));

        cout<<"Mes de cita: ";
        cin>>aux;
        c.fecha_.setMes(atoi(aux.c_str()));

        cout<<"Año de cita: ";
        cin>>aux;
        c.fecha_.setAnio(atoi(aux.c_str()));

        cout<<"Hora de cita: ";
        cin>>aux;
        c.fecha_.setHora(atoi(aux.c_str()));

        cout<<"Minuto de cita: ";
        cin>>aux;
        c.fecha_.setMinuto(atoi(aux.c_str()));

        cin.ignore();
}

void pacientes(list <Persona> &persona){
    int n;
    string dni;
    Fecha f(0,0,0);
    Persona p("nombre", "apellido", "dni", 0, "direccion", f, "compania");

    do{
        system("clear");



        cout<<"    MENU PACIENTES\n";
        cout<<" __________________________________________________________________________\n";
        cout<<"|                                                                          |\n";
        cout<<"|   ▶  1.Ver todos los pacientes.                                          |\n";
        cout<<"|   ▶  2.Buscar un paciente.                                               |\n";
        cout<<"|   ▶  3.Añadir un paciente.                                               |\n";
        cout<<"|   ▶  4.Modificar un paciente.                                            |\n";
        cout<<"|   ▶  5.Eliminar un paciente.                                             |\n";
        cout<<"|   ▶  6.Dar el alta/baja a un paciente.                                   |\n";
        cout<<"|   ▶  7.Volver al menu principal                                          |\n";
        cout<<"|__________________________________________________________________________|\n";
        cout<<"\n\n";

        cout<<"Elige una opción: ";
        cin>>n;

        switch(n){
            case 1:
                system("clear");
                cout<<"PACIENTES REGISTRADOS.\n\n";
                mostrarPersonas(persona);
                cin.ignore();
				cout<<"\n\nPulsa intro para volver al menu...";
				cin.get();
                break;
               

            case 2:
                system("clear");
                cout<<"BUSCAR UN PACIENTE.\n\n";
                cout<<"Introduzca el DNI del paciente que desea buscar: ";
                cin>>dni;

                p = buscarPersona(dni, persona);

                if( p.getNombre() == "NULL" ){
                    cout<<"\nPersona no encontrada.\n";
                }

                else{
                    cout<<"\n";
                    mostrarPaciente(p, persona);
                }

                cin.ignore();
				cout<<"\n\nPulsa intro para volver al menu...";
				cin.get();
                
                break;


            case 3:
                system("clear");
                cout<<"AÑADIR A UN PACIENTE.\n\n";
                datosPersona(p);

                if(addPersona(p, persona) == true){
                    cout<<"Paciente añadido correctamente.\n";
                }

                else{
                    cout<<"Se ha producido un error al añadir al paciente\n";
                }

                cin.ignore();
				cout<<"\n\nPulsa intro para volver al menu...";
				cin.get();
                break;


            case 4:
                system("clear");
                cout<<"MODIFICAR UN PACIENTE.\n\n";

                cout<<"DNI del paciente que desea modificar: ";
                cin>>dni;

                cout<<"\nA continuacion, introduzca los nuevos valores del paciente:\n";
                datosPersona(p);

                if(modificarPersona(dni, p, persona) == true){
                    cout<<"Paciente modificado correctamente.\n";
                }

                else{
                    cout<<"Se ha producido un error al añadir al paciente.\n";
                }

                cin.ignore();
				cout<<"\n\nPulsa intro para volver al menu...";
				cin.get();

                break;


            case 5:
                system("clear");
                cout<<"ELIMINAR A UN PACIENTE.\n";

                cout<<"DNI del paciente que desea eliminar: ";
                cin>>dni;

                if(deletePersona(dni, persona) == true){
                    cout<<"\nPaciente eliminado correctamente.\n";
                }

                else{
                    cout<<"\nSe ha producido un error al eliminar al paciente.\n";
                }

                cin.ignore();
				cout<<"\n\nPulsa intro para volver al menu...";
				cin.get();

                break;


            case 6:
                system("clear");
                cout<<"MODIFICAR EL ESTADO DE UN PACIENTE.\n";

                cout<<"DNI del paciente que desea modificar su estado: ";
                cin>>dni;

                p = buscarPersona(dni, persona);

                if( p.getAltamedica() == true ){
                    if(darBaja(dni, persona) == true){
                        cout<<"\nSe ha cambiado el estado del paciente.\nEstado actual -> ALTA MEDICA: NO\n";
                    }

                    else{
                        cout<<"\nNo se ha podido cambiar el estado del paciente.\n";
                    }
                }

                else{
                    if(darAlta(dni, persona) == true){
                        cout<<"\nSe ha cambiado el estado del paciente.\nEstado actual -> ALTA MEDICA: SI\n";
                    }

                    else{
                        cout<<"\nNo se ha podido cambiar el estado del paciente.\n";
                    }
                }

                cin.ignore();
				cout<<"\n\nPulsa intro para volver al menu...";
				cin.get();

                break;

            case 7:
                break;

            default:
                cin.ignore();
                cout<<"Valor incorrecto. Pruebe con los que indica el menú.\n";
                cin.get();
                break;
        }
    }while(n != 7);
}

void tratamientos(list <Persona> &personas){
        int n;
        string dni, nombre;

        Fecha f(0,0,0);
        Persona p("nombre", "apellido", "dni", 0, "direccion", f, "compania");
        Tratamiento t("dni", "nombre", f, "detalles");

        do{

            system("clear");
        
            cout<<"    MENU TRATAMIENTOS\n";
            cout<<" __________________________________________________________________________\n";
            cout<<"|                                                                          |\n";
            cout<<"|   ▶  1.Mostrar Tratamientos.                                             |\n";
            cout<<"|   ▶  2.Añadir Tratamiento.                                               |\n";
            cout<<"|   ▶  3.Cancelar Tratamiento.                                             |\n";
            cout<<"|   ▶  4.Finalizar Tratamiento.                                            |\n";
            cout<<"|   ▶  5.Modificar Tratamiento.                                            |\n";
            cout<<"|   ▶  6.Ver un tratamiento.                                               |\n";
            cout<<"|   ▶  7.Volver al menú principal.                                         |\n";
            cout<<"|__________________________________________________________________________|\n";
            cout<<"\n\n";

            cout<<"Elige una opción: ";
            cin>>n;
        
            switch (n){
                case 1:
                    system("clear");
                    cout<<"MOSTRAR TRATAMIENTOS\n";

                    cout<<"DNI: ";
                    cin>>dni;
            
                    p = buscarPersona(dni, personas);

                    if(p.getNombre()=="NULL"){
                        cout<<"\nPersona no registrada.\n";
                    }

                    else{
                        p.leertratamientos();
                        cout<<"\n";
                        p.mostrarTratamientos();
                    }

                    cin.ignore();
                    cout<<"\n\nPulsa intro para volver al menu...";
			        cin.get();

                    break;
        
                case 2:
                    system("clear");
                    cout<<"AÑADIR TRATAMIENTO\n";

                    cout<<"DNI: ";
                    cin>>dni;

                    p = buscarPersona(dni, personas);

                    if(p.getNombre()=="NULL"){
                        cout<<"\nPersona no registrada.\n";
                    }

                    else{
                        p.leertratamientos();

                        if(p.addTratamiento() == true){
                            cout<<"Tratamiento añadido correctamente.\n";
                            p.escribirTratamientos();
                        }

                        else{
                            cout<<"Error al añadir tratamiento.\n";
                        }
                    }

                    cin.ignore();
                    cout<<"\n\nPulsa intro para volver al menu...";
			        cin.get();
                        
                    break;

                case 3:
                    system("clear");
                    cout<<"CANCELAR UN TRATAMIENTO.\n";

                    cout<<"DNI del paciente: ";
                    cin>>dni;

                    p = buscarPersona(dni, personas);

                    if(p.getNombre()=="NULL"){
                        cout<<"\nPersona no registrada.\n";
                    }

                    else{
                        p.leertratamientos();

                        cout<<"\nLos tratamientos del paciente son:\n\n";
                        p.mostrarTratamientos();

                        cout<<"\n\nEscriba el nombre del tratamiento que desea cancelar: ";
                        cin.ignore();
                        getline(cin,nombre);

                        if(p.cancelarTratamiento(dni, nombre) == true){
                            cout<<"\nTratamiento cancelado correctamente.\n";
                            p.escribirTratamientos();
                        }

                        else{
                            cout<<"\nError al cancelar el tratamiento.\n";
                        }
                    }

                    cin.ignore();
                    cout<<"\n\nPulsa intro para volver al menu...";
			        cin.get();

                case 4:
                    system("clear");
                    cout<<"FINALIZAR UN TRATAMIENTO.\n";

                    cout<<"DNI del paciente: ";
                    cin>>dni;

                    p = buscarPersona(dni, personas);

                    if(p.getNombre()=="NULL"){
                        cout<<"\nPersona no registrada.\n";
                    }

                    else{
                        p.leertratamientos();

                        cout<<"\nLos tratamientos del paciente son:\n\n";
                        p.mostrarTratamientos();

                        cout<<"\n\nEscriba el nombre del tratamiento que desea finalizar: ";
                        cin.ignore();
                        getline(cin,nombre);

                        if(p.finalizarTratamiento(dni, nombre) == true){
                            cout<<"\nTratamiento finalizado correctamente.\n";
                            p.escribirTratamientos();
                        }

                        else{
                            cout<<"\nError al finalizar el tratamiento.\n";
                        }
                    }

                    cin.ignore();
                    cout<<"\n\nPulsa intro para volver al menu...";
			        cin.get();

                    break;



                case 5:
                    system("clear");
                    cout<<"MODIFICAR UN TRATAMIENTO.\n";

                    cout<<"DNI del paciente: \n";
                    cin>>dni;

                    p = buscarPersona(dni, personas);

                    if(p.getNombre()=="NULL"){
                        cout<<"\nPersona no registrada.\n";
                    }

                    else{
                        cout<<"Los tratamientos del paciente son:\n\n";

                        p.leertratamientos();
                        p.mostrarTratamientos();

                        cout<<"\n\nNombre del tratamiento que desea modificar: ";
                        cin.ignore();
                        getline(cin, nombre);

                        cout<<"\n\nA continuacion, introduzca los nuevos datos del tratamiento:\n";
                        p.datosTratamientos(t);

                        if(p.modificarTratamiento(dni, nombre, t) == true){
                            cout<<"Tratamiento modificado correctamente.\n";
                            p.escribirTratamientos();
                        }

                        else{
                            cout<<"Error al modificar el tratamiento.\n";
                        }
                    }

                    cin.ignore();
                    cout<<"\n\nPulsa intro para volver al menu...";
			        cin.get();

                    break;

                case 6:
                    system("clear");
                    cout<<"VER UN TRATAMIENTO.\n";

                    cout<<"DNI del paciente: \n";
                    cin>>dni;

                    p = buscarPersona(dni, personas);

                    if(p.getNombre()=="NULL"){
                        cout<<"\nPersona no registrada.\n";
                    }

                    else{
                        p.leertratamientos();

                        cout<<"Los tratamientos del paciente son:\n\n";
                        p.mostrarTratamientos();

                        cout<<"\n\n¿Que tratamiento desea ver? ";
                        cin.ignore();
                        getline(cin,nombre);

                        if(p.mostrarTratamiento(dni, nombre) == true){
                            system("clear");
                            p.mostrarTratamiento(dni,nombre);

                            cin.ignore();
                            cout<<"\n\nPulsa intro para volver al menu...";
			                cin.get();
                        }

                        else{
                            cout<<"\nError al encontrar el tratamiento.\n";
                            cin.ignore();
                            cout<<"\n\nPulsa intro para volver al menu...";
			                cin.get();
                        }
                    }


                    break;

                case 7:
                    break;

        
                default:
                    cin.ignore();
                    cout<<"\n\nValor incorrecto. Solamente se pueden los indicados en el menú.";
			        cin.get();
                    break;
            }

        }while(n != 7);
}

void citas(list <Persona> &persona, list <Cita> &cita, Fecha Dia){
    int n, dia, mes, anio;
    string dni;
    Fecha f(0,0,0);
    Persona p("nombre", "apellido", "dni", 0, "direccion", f, "compania");
    Cita c(f, "dni", "nota");

    do{
        system("clear");

        cout<<"    MENU CITAS\n";
        cout<<" __________________________________________________________________________\n";
        cout<<"|                                                                          |\n";
        cout<<"|   ▶  1.Ver citas de hoy.                                                 |\n";
        cout<<"|   ▶  2.Ver citas de un dia determinado.                                  |\n";
        cout<<"|   ▶  3.Buscar cita.                                                      |\n";
        cout<<"|   ▶  4.Ver Historial de citas de un paciente.                            |\n";
        cout<<"|   ▶  5.Añadir cita.                                                      |\n";
        cout<<"|   ▶  6.Cambiar estado de una cita.                                       |\n";
        cout<<"|   ▶  7.Modificar una Cita                                                |\n";
        cout<<"|   ▶  8.Volver al menu principal                                          |\n";
        cout<<"|__________________________________________________________________________|\n";
        cout<<"\n\n";

        cout<<"Elige una opción: ";
        cin>>n;

        switch(n){
            case 1:
                system("clear");
                cout<<"VER CITAS DE HOY.\n";
                
                if(mostrarCitas(Dia.getDia(), Dia.getMes(), Dia.getAnio(), cita) == true){
                    cin.ignore();
                    cout<<"\n\nPulsa intro para volver al menu...";
			        cin.get();
                }

                else{
                    cout<<"No hay citas para el dia de hoy.\n";
                    cin.ignore();
                    cout<<"\n\nPulsa intro para volver al menu...";
			        cin.get();
                }

                break;


            case 2:
                system("clear");
                cout<<"VER CITAS DE UN DIA DETERMINADO.\n";

                cout<<"Introduzca el dia: ";
                cin>>dia;

                cout<<"Introduzca el mes: ";
                cin>>mes;

                cout<<"Introduzca el año: ";
                cin>>anio;
                

                if(mostrarCitas(dia, mes, anio, cita) == true){
                    cin.ignore();
                    cout<<"\n\nPulsa intro para volver al menu...";
			        cin.get();
                    
                }

                else{
                    cout<<"No hay citas para ese dia.\n";
                    cin.ignore();
                    cout<<"\n\nPulsa intro para volver al menu...";
			        cin.get();
                }
                
                break;

            case 3:
                system("clear");
                cout<<"BUSCAR CITA.\n";

                cout<<"Introduzca el DNI del paciente del que desea ver la cita: ";
                cin>>dni;

                cout<<"Introduzca el dia: ";
                cin>>dia;

                cout<<"Introduzca el mes: ";
                cin>>mes;

                cout<<"Introduzca el año: ";
                cin>>anio;

                if(mostrarCita(dni, dia, mes, anio, cita) == true){
                    cin.ignore();
                    cout<<"\n\nPulsa intro para volver al menu...";
			        cin.get();
                }

                else{
                    cout<<"No hay ninguna cita con esos datos.\n";

                    cin.ignore();
                    cout<<"\n\nPulsa intro para volver al menu...";
			        cin.get();
                }
                break;

            case 4:
                system("clear");
                cout<<"VER HISTORIAL DE CITAS DE UN PACIENTE.\n";
                
                cout<<"Introduzca DNI del paciente: ";
                cin>>dni;

                if(mostrarPaciente(dni, cita) == true){
                    cin.ignore();
                    cout<<"\n\nPulsa intro para volver al menu...";
			        cin.get();
                }

                else{
                    cout<<"No se ha encontrado ninguna cita para el paciente introducido.\n";
                    cin.ignore();
                    cout<<"\n\nPulsa intro para volver al menu...";
			        cin.get();
                }
                
                break;

            case 5:
                system("clear");
                cout<<"AÑADIR CITA.\n";
                datosCita(c);

                if(addCita(c, cita, persona) == true){
                    cout<<"Cita añadida correctamente.\n";
                }

                else{
                    cout<<"Error al añadir la cita.\n";
                }

                cin.ignore();
                cout<<"\n\nPulsa intro para volver al menu...";
			    cin.get();

                break;
            
            case 6:
                system("clear");
                cout<<"MODIFICAR ESTADO DE LA CITA.\n";

                cout<<"DNI del paciente del que desea cambiar su estado de la cita: ";
                cin>>dni;

                cout<<"Dia programado de la cita: ";
                cin>>dia;

                cout<<"Mes programado de la cita: ";
                cin>>mes;

                cout<<"Año programado de la cita: ";
                cin>>anio;

                if(mostrarCita(dni, dia, mes, anio, cita) == true){
                    system("clear");
                    mostrarCita(dni, dia, mes, anio, cita);

                    cout<<"\n\n¿A que estado desea cambiar la cita?\n";
                    cout<<"1. Cancelada.\n";
                    cout<<"2. Realizada.\n";
                    cout<<"3. Pendiente.\n";

                    cin>>n;

                    if(n == 1){

                        if(cambiarEstado(dni, cita, 0) == true){
                            cout<<"Estado cambiado correctamente.\n";
                        }

                        else{
                            cout<<"No se ha podido cambiar el estado.\n";
                        }
                    }

                    if(n == 2){

                        if(cambiarEstado(dni, cita, 1) == true){
                            cout<<"Estado cambiado correctamente.\n";
                        }

                        else{
                            cout<<"No se ha podido cambiar el estado.\n";
                        }
                    }

                    if(n == 3){

                        if(cambiarEstado(dni, cita, 2) == true){
                            cout<<"Estado cambiado correctamente.\n";
                        }

                        else{
                            cout<<"No se ha podido cambiar el estado.\n";
                        }
                    }

                    if(n != 1 && n!= 2 && n!=3){
                        cout<<"Valor introducido incorrecto.\n";
                    }

                    cin.ignore();
                    cout<<"\n\nPulsa intro para volver al menu...";
			        cin.get();
                }

                else{
                    cout<<"No hay ninguna cita con esos datos.\n";

                    cin.ignore();
                    cout<<"\n\nPulsa intro para volver al menu...";
			        cin.get();
                }

                break;
            
            
            case 7:
                system("clear");
                cout<<"MODIFICAR UNA CITA\n\n";

                cout<<"DNI del paciente de la cita que desea modificar ";
                cin>>dni;

                cout<<"Dia programado de la cita: ";
                cin>>dia;

                cout<<"Mes programado de la cita: ";
                cin>>mes;

                cout<<"Año programado de la cita: ";
                cin>>anio;

                f.setDia(dia);
                f.setMes(mes);
                f.setAnio(anio);

                cout<<"\nA continuacion, introduzca los nuevos valores de la cita:\n";
                datosCita(c);

                if(modificarCita(c, dni, f , cita, persona, Dia) == true){
                    cout<<"Cita modificada correctamente.\n";
                }

                else{
                    cout<<"Se ha producido un error al modificar la cita.\n";
                }

                cin.ignore();
				cout<<"\n\nPulsa intro para volver al menu...";
				cin.get();

                break;

            case 8:
                break;
                
            default:
                cin.ignore();
				cout<<"\n\nOpcion incorrecta. Solo se admiten las opciones indicadas en el menu.";
				cin.get();
                break;
        }

    }while(n != 8);
}

void setMenu(list <Persona> &persona, list <Cita> &cita, Fecha Dia){
    int n;

    do{
        system("clear");
        cout<<"    MENU PRINCIPAL\n";
        cout<<" __________________________________________________________________________\n";
        cout<<"|                                                                          |\n";
        cout<<"|   ▶  1.Administrar Pacientes.                                            |\n";
        cout<<"|   ▶  2.Administrar Citas.                                                |\n";
        cout<<"|   ▶  3.Administar Tratamientos.                                          |\n";
        cout<<"|   ▶  4.Guardar y Salir.                                                  |\n";
        cout<<"|__________________________________________________________________________|\n";
        cout<<"\n\n";
        cout<<"¿Que operacion desea hacer? ";
        cin>>n;


        switch(n){
            case 1:
                pacientes(persona);
                break;

            case 2:
                citas(persona, cita, Dia);
                break;

            case 3:
                tratamientos(persona);
                break;
            
            case 4:
                cout<<"Saliendo del programa...\n";
                break;
            
            default:
                
                cin.ignore();
                cout<<"Valor incorrecto. Pruebe con los que indica el menú.\n";
                cin.get();
                break;
                
        }

    }while(n != 4);
}


