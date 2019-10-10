# Modificar Cita

### ID: 05 Descripción: Desde el apartado Pacientes dar de alta a un nuevo paciente.

 **Actores principales:** Administrador
 **Actores secundarios:** Pacientes

### Precondiciones:
- Ninguna.
### Flujo principal:

  1. El administrador desea añadir un nuevo paciente al sistema (darle de alta).
  2. El administrador accede a la pestaña Pacientes.
  3. El administrador clickea en el boton dar de alta.
  4. El programa muestra un formulario con todos los datos personales del usuario.
  5. El administrador rellena esos datos a mano.
  6. El administrador le da al boton de aceptar.
  8. Se muestra al administrador la ficha del nuevo paciente con sus datos personales.


### Post condiciones:
- El paciente debe quedar registrado en los datos del sistema junto con sus datos personales.
- El programa debe de haber creado un apartado de historial medico y de tratamiento para el usuario.

### Flujos alternativos:
Si el administrador no rellena un campo, mostrar mensaje de error.
Si existe un usuario con DNI igual, mostrar mensaje de error.
