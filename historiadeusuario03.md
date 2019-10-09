# HISTORIAS DE USUARIO

**Nombre:** Dar cita a un paciente o modificar cita.

**Descripción**

Como usuario quiero dar o modificar cita a un paciente con su respectiva fecha indicando el motivo de la consulta para tratar al paciente.

**Validación**

* Se debe buscar al paciente por nombre y apellidos o DNI para gestionar la cita.
* Se visualizará tanto los datos personales como el tratamiento actual del paciente, junto a la fecha de su última cita.
* La fecha se mostrará en formato dd/mm/aa.
* Habrá una opción llamada GESTIONAR CITA, donde se podrá dar o modificar cita al paciente, indicando obligatoriamente el motivo.
* La fecha de la nueva cita se introducirá en formato dd/mm/aa.
* Si se introduce algún campo incorrectamente, el usuario visualizará un mensaje de error, donde se especificará la sintaxis correcta.
* Si el usuario introduce una fecha para una cita anterior a la fecha actual, se le informará mediante un mensaje de error indicando el motivo.
* El usuario podrá anular una cita.
* El usuario no podrá modificar datos personales ni tratamiento de un paciente desde esta opción.