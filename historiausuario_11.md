# HISTORIAS DE USUARIO

**ID: 11** **Nombre:** Modificar un tratamiento ya creado de un paciente.

**Descripción**

Como administrador quiero modificar un tratamiento ya añadido de un paciente para poder aplicarle otro tipo de tratamiento.

**Validación**

* Se debe buscar al paciente por nombre y apellidos o DNI desde el apartado Tratamientos.
* Se visualizará tanto datos personales como médicos del paciente.
* El administrador visualizará un aparatado para modificar tratamiento.
* El administrador escribirá el nuevo tratamiento del paciente y la fecha en la que ha sido añadido.
* El administrador debe visualizar un mensaje de éxito cuando se haya modificado el tratamiento.
* El administrador no podrá modificar datos personales ni tratamiento de un paciente desde esta opción.
* En caso de que se introduzca mal algún campo, el administrador visualizará un mensaje de error.
* Si el paciente buscado no está registrado, el administrador visualizará un mensaje de error.
* Si el paciente no tiene ningún tratamiento implantado anteriormente, se mostrará un mensaje de error, y aparecerá la pestaña añadir tratamiento.