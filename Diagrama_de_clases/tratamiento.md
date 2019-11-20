# CLASE: TRATAMIENTO
### DESCRIPCION DE LA CLASE:
Esta clase es la clase tratamiento que posee datos como la fecha de inicio, de final y el nombre del tratamiento. Sirve para almacenar la
informacion de un tratamiento de un paciente.

### DATOS:
+ Nombre _(string)_:  **nombre del tratamiento**
+ Fecha de Inicio _(struct fecha)_: **fecha de inicio del tratamiento**
+ Fecha de Fin _(struct fecha)_: **fecha en la que se termina el tratamiento**
+ Detalles _(string)_ **cadena de unos 300 caracteres que guarde detalles sobre el tratamiento en caso de que sea necesario**
+ DNI _(string)_ **DNI de la persona a la que pertenece el tratamiento** 

### MÉTODOS:
- Tratamiento() **Constructor, recibe por parametros la fecha de inicio, dni del paceinte y el nombre del tratamiento.**
+ SetFin(struct fecha Fin) **Modificador de la fecha de finalización**
- getFechainicio() **Observador de la fecha de inicio**
+ getTratamiento() **Observador del tratamiento**
- getFechaFin() **Observador de la fecha de finalización**
+ setDetalles() **Modificador del canpo detalles**
