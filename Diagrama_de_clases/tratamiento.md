# CLASE: TRATAMIENTO
### DESCRIPCION DE LA CLASE:
Esta clase es la clase tratamiento que posee datos como la fecha de inicio, de final y el nombre del tratamiento. Sirve para almacenar la
informacion de un tratamiento de un paciente.

### DATOS:
+ Nota _(string)_:  **cadena de tamaño maximo 300 caracteres que contiene alguna anotacion sobre la cita del paciente*
+ Fecha _(struct fecha)_: **fecha de la cita para un paciente*
+ ID _(int)_: **dato numerico que sirve para ayudar a buscar la cita mas rapida**

### MÉTODOS:
- Cita() **Constructor, recibe por parametros la fecha, asigana una id aleatoria**
+ setNota(string) **recibe una cadena por parametro y la copia en elatributo nota de la cita**
- getFecha() **visualiza la fecha de la cita deseada*
+ getID() **Observador de el ID de la cita**

