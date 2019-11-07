# CLASE: CITA
### DESCRIPCION DE LA CLASE:
Esta clase es la clase cita que posee la informacion sobre la fecha de la cita, un identificador de la misma y un apartado de notas sobre la evaluacion del paciente. 

### DATOS:
+ Cita _(string)_:  **recibe la id de la cita **
+ Fecha de Inicio _(struct fecha)_: **fecha de inicio del tratamiento**
+ Fecha de Fin _(struct fecha)_: **fecha en la que se termina el tratamiento**

### MÉTODOS:
- Tratamiento() **Constructor, recibe por parametros la fecha de inicio y el nombre del tratamiento.**
+ SetFin(struct fecha Fin) **recibe por parametro una fecha de finalizacion del tratamiento y esta sera constante ademas actualiza lña informacion el el fichero de texto.**
- getFechainicio() **Visualizador de la fecha de inicio**
+ getTratamiento() **Visualizador del tratamiento**
- getFechaFin() **Visualizador de la fecha de finalizacion**
