# CLASE: TRATAMIENTO
### DESCRIPCION DE LA CLASE:
Esta clase es la clase tratamiento que posee datos como la fecha de inicio, de final y el nombre del tratamiento. Sirve para almacenar la
informacion de un tratamiento de un paciente.

### DATOS:
+ Tratamiento _(string)_:  **cadena de tamaño maximo 50 caracteres que contiene el nombre del tratamiento**
+ Fecha de Inicio _(struct fecha)_: **fecha de inicio del tratamiento**
+ Fecha de Fin _(struct fecha)_: **fecha en la que se termina el tratamiento**

### MÉTODOS:
- Tratamiento() **Constructor, recibe por parametros la fecha de inicio y el nombre del tratamiento.**
+ SetFin(struct fecha Fin) **recibe por parametro una fecha de finalizacion del tratamiento y esta sera constante ademas actualiza lña informacion el el fichero de texto.**
- getFechainicio() **Visualizador de la fecha de inicio**
+ getTratamiento() **Visualizador del tratamiento**
- getFechaFin() **Visualizador de la fecha de finalizacion**
