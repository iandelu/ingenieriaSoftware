# CLASE: CITA
### DESCRIPCION DE LA CLASE:
Esta clase es la clase cita que posee la informacion sobre la fecha de la cita, un identificador de la misma y un apartado de notas sobre la evaluacion del paciente. 

### DATOS:
+ Nota _(string)_:  **cadena de tamaño maximo 300 caracteres que contiene alguna anotacion sobre la cita del paciente*
+ Fecha _(struct fecha)_: **fecha de la cita para un paciente*
+ ID _(int)_: **dato numerico que sirve para ayudar a buscar la cita mas rapida**
+ DNI _(string)_ **DNI de la persona a la que pertenece la cita** 

### MÉTODOS:
- Cita() **Constructor, recibe por parametros la fecha y dni de la persona a la que pertenece la cita, asigana una id aleatoria**
+ setNota(string) **recibe una cadena por parametro y la copia en el atributo nota de la cita**
- getFecha() **visualiza la fecha de la cita deseada**
+ getID() **Observador de el ID de la cita**
- getDni() **Recibe una cadena por parametro y la copia en el atributo DNI**

