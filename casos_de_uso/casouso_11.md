# Modificar tratamiento

### ID: 11 Descripción: Desde el apartado de Tratamiento Medico modificar un tratamiento ya creado para el paciente.

 **Actores principales:** Administrador
 **Actores secundarios:** Pacientes

### Precondiciones:
- Paciente registrado en el Sistema.
- Paciente con algún tratamiento recetado.
### Flujo principal:

  1. El administrador desea modificar un tratamiento médico de un paciente.
  2. El administrador accede a la pestaña tratamientos.
  3. El administrador busca por nombre y apellido o DNI al paciente deseado.
  4. El programa muestra los datos personales y médicos del paciente.
  5. El administrador accede al apartado modificar tratamiento.
  6. El programa abre un cuadro de diálogo para modificar tratamiento.
  7. El programa muestra el historial médico del paciente, así como el tratamiento en vigor con su respectiva fecha.
  8. El administrador escribe el nuevo tratamiento médico del paciente y la fecha en la que se ha modificado y le da a aceptar.

### Post condiciones:
- El tratamiento se queda almacenado en el historial del paciente y puede ser visualizado posteriormente.
- El tratamiento no puede ser borrado.
- El tratamiento mostrará la fecha en la que ha sido modificado.

### Flujos alternativos:
Si el administrador busca un paciente que no está registrado, aparecerá un mensaje de error indicando que no existe ningún paciente con esos atributos registrado.
Si el paciente buscado no tiene ningún tratamiento recetado, aparecerá la pestaña añadir tratamiento.
Si el administrador introduce la fecha en un formato no correcto, aparecerá un mensaje de error.
