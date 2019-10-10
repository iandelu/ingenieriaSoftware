# Añadir cita

### ID: 03 Descripción: Desde el apartado citas aparece la opcion de añadir una nueva cita.


 **Actores principales:** Administrador
 **Actores secundarios:** Usuario

### Precondiciones:
- Fecha y hora de la cita libres.
- El usuario que al que se desee asignar la cita este registrado en el sistema.
### Flujo principal:

  1. El administrador desea crear una cita para un paciente.
  2. El administrador accede a la pestaña de citas.
  3. El administrador clickea en el boton añadir una cita.
  4. El programa le pregunta al administrador la fecha que desee para fijar una cita.
  5. El programa le pregunta al administrador la hora que desee para fijar la cita.
  6. Si ese espacio de tiempo está ocupado el programa devuelve al administrador a la opcion de elegir día.
  7. Si no esta ocupado el programa pide al administrador que introduzca el nombre y apellidos del paciente.
  8. Se muestra al administrador la cita con fecha, hora y paciente.




### Post condiciones:
- La cita queda guardada en los datos de citas.
- El usuario no tendrá permitido solicitar una cita hasta que concluya o se modifique esta.


### Flujos alternativos:
Si el usuario buscado no existe, mostrar un mensaje de error
