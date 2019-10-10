# Mostrar Lista

### ID: 06 Descripción: 


 **Actores principales:** Administrador
 **Actores secundarios:** Usuario

### Precondiciones:
- Cita previamente fijada.
### Flujo principal:

  1. El administrador desea modificar una cita para un paciente ya creada.
  2. El administrador accede a la pestaña de citas.
  3. El administrador clickea en el boton modificar una cita.
  4. El programa le pregunta al administrador el paciente que tiene asiganda la cita que se desea modificar.
  5. El programa le pregunta al administrador la fecha que desee para fijar la nueva cita.
  6. El programa le pregunta al administrador la hora que desee para fijar la nueva cita.
  8. Se muestra al administrador la cita con fecha, hora y paciente modificada.


### Post condiciones:
- La cita queda guardada en los datos de citas.
- El usuario no tendrá permitido solicitar una cita hasta que concluya o se modifique esta.


### Flujos alternativos:
Si el usuario no existe, mostrar un mensaje de error.
Si la nueva fecha coincide con otra cita, mostrar un mensaje de error.
