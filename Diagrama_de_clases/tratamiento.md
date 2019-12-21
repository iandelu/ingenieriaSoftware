# CLASE: TRATAMIENTO
### DESCRIPCION DE LA CLASE:
Esta clase es la clase tratamiento que posee datos como la fecha de inicio, de final y el nombre del tratamiento. Sirve para almacenar la
informacion de un tratamiento de un paciente.

### DATOS:
+ Nombre _(string)_:  **nombre del tratamiento**
+ Fecha de Inicio _(struct fecha)_: **fecha de inicio del tratamiento**
+ Fecha de Fin _(struct fecha)_: **fecha en la que se termina el tratamiento**
+ Tratamiento _(string)_ **cadena de unos 300 caracteres que guarde detalles sobre el tratamiento en caso de que sea necesario**
+ DNI _(string)_ **DNI de la persona a la que pertenece el tratamiento** 

### MÉTODOS:
- Tratamiento() **Constructor, recibe por parametros la fecha de inicio, dni del paceinte y el nombre del tratamiento.**
+ getFechainicio() **Observador de la fecha de inicio**
- getTratamiento() **Observador del tratamiento**
+ getFechaFin() **Observador de la fecha de finalización**
- getNombre() **Observador del nombre.**
+ getDNI() **Observador del dni.**

- setTratamiento(string tratamiento) **Modificador del campo tratamiento.**
+ setNombre(string nombre) **Modificador del campo nombre.**
- setFechaInicio(class fecha) **Modificador del campo fecha inicio.**
+ setFechaFin(class fecha) **Modificador del campo fecha fin.**
- setDNI(string dni) **Modificador del campo dni.**

+ verTratamiento(string dni, class fecha, lista) **Recibe el dni del paciente, la fecha del tratamiento y lo muestra por pantalla.**
- addTratamiento(string dni, lista) **Recibe el dni del paciente, y guarda el tratamiento en una lista.**
+ deleteTratamiento(string dni, lista) **Recibe el dni del paciente y elimina el tratamiento de la lista.**
- verTratamientos(string dni, lista) **Recibe el dni del paciente y muestra todos sus tratamientos.**
+ leeTratamientos(fichero, lista) **Escribe los datos del fichero Tratamientos en una lista.**
- escribeTratamientos(fichero, lista) **Escribe los datos de una lista en el fichero Tratamientos.**
