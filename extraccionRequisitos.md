# Extracción de Requisitos

Descripcion de los requsitos funcionales y no funcionales del software del programa de administración de la clínica.

### Partes Interesadas
- Clinica
- Equipo de Desarrollo

### Datos que Gestiona el Sistema :
- Datos de la cita:
  - Fecha
  - Hora
  - Paciente
  - Notas
- Datos de usuario:
  - Nombre y apellidos
  - DNI
  - Dirección postal
  - Telefono
  - Fecha de Nacimiento
  - Compañia
  - Recetas
- Historial Médico
  - Fecha de la anotación
  - Anotación
  - Paciente
- Historial de Tratamiento
  - Fecha de inicio
  - Fecha de parada
  - Tratamiento
  - Paciente


### REQUISITOS FUNCIONALES :
- El programa debe ser capaz de buscar al paciente por nombre o DNI y que el programa muestre los datos del usuario.
- Se debe de poder añadir una cita.
- Se debe de poder modificar la cita.
- Se debe de poder dar de alta a un usuario.
- Se debe de poder acceder al historial medico y al historial de tratamiento.
- Debe de haber una opción que añada un tratamiento.
- Debe de haber una opción que cancele un tratamiento y actualice el historial.
- Se debe de poder añadir datos de la cita al historial médico.
- Debe de poder mostrar una lista con todos los pacientes.
- Se debe poder mostrar las citas de cualquier dia.
- Se debe de poder visualizar las citas de hoy.

### REQUSITOS NO-FUNCIONALES :
- Almacenamiento ilimitado de pacientes de la clínica.
- Lenguaje de implementación C++.
- El historial médico del paciente no se puede borrar.
- El historial de tratamiento no se puede borrar.
- Programa Compatible con Linux.

