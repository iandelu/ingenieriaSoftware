# CLASE: CITA
### DESCRIPCION DE LA CLASE:
Esta clase es la clase cita que posee la informacion sobre la fecha de la cita, un identificador de la misma y un apartado de notas sobre la evaluacion del paciente. 

### DATOS:
+ Nota _(string)_:  **cadena de tamaño maximo 300 caracteres que contiene alguna anotacion sobre la cita del paciente*
+ Fecha _(class fecha)_: **fecha de la cita para un paciente*
+ ID _(int)_: **dato numerico que sirve para ayudar a buscar la cita mas rapida**
+ DNI _(string)_ **DNI de la persona a la que pertenece la cita** 

### MÉTODOS:
- Cita(Fecha fecha, string dni) **Constructor, recibe por parametros la fecha y dni de la persona a la que pertenece la cita, y asigna una id aleatoria**
+ getCita() **Observador de la clase Cita**
- GetNota() **Visualiza la nota de la cita**
+ setNota(string nota) **recibe una cadena por parametro y la copia en el atributo nota de la cita**
- getFecha() **visualiza la fecha de la cita deseada**
+ setFecha(class fecha) **Recibe una clase fecha y modifica la fecha del paciente por esta nueva.**
- getID() **Observador de el ID de la cita**
+ setID(int ID) **Recibe un entero de identificacion del paciente.**
- getDNI(string DNI) **observador de DNI**
+ setDNI(string DNI) **Recibe un nuevo dni por parametro y modifica el del paciente por este.**

- addCita(lista) **Añade una nueva cita en una lista.**
+ deleteCita(dni, fecha, lista) **Recibe el dni del paciente, la fecha a la que pertenece la cita y la borra de la lista.**
- leeCitas(fichero, lista) **Carga los datos del fichero Citas en una lista.**
+ escribeCitas(fichero, lista) **Carga los datos de una lista en el fichero Citas.**
