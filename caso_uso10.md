# Añadir tratamiento

### ID: 10 Descripción: Desde el apartado de Tratamiento Medico añadir un tratamiento para el paciente.

 **Actores principales:** Administrador
 **Actores secundarios:** Pacientes

### Precondiciones:
- Paciente registrado en el Sistema.
- Paciente sin ningún tratamiento recetado.
### Flujo principal:

  1. El administrador desea añadir un tratamiento médico al paciente.
  2. El administrador accede a la pestaña tratamientos.
  3. El administrador busca por nombre y apellido o DNI al paciente deseado.
  4. El programa muestra los datos personales y médicos del paciente.
  5. El administrador accede al apartado añadir tratamiento.
  6. El programa abre un cuadro de diálogo para añadir tratamiento.
  7. El administrador escribe el tratamiento médico y le da a aceptar.

### Post condiciones:
- El tratamiento se queda almacenado en el historial del paciente y puede ser visualizado posteriormente.
- El tratamiento puede ser cancelado posteriormente.

### Flujos alternativos:
- Si el administrador busca un paciente que no está registrado, aparecerá un mensaje de error indicando que no existe ningún paciente con esos atributos registrado.