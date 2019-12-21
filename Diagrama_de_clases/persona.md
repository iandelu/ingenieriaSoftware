# CLASE: PERSONA
### DESCRIPCION DE LA CLASE:
Esta clase es la clase persona que representa a cada uno de los pacientes reistrados en el sitema de la clinica y
que por tanto poseecada uno de los datos de cada paciente. Además de las funciones de modificar cada uno de los 
datos, borrar a un paciente, obtener el DNI y mostrar el paciente.

### DATOS:
+ Nombre _(string)_:  **cadena de tamaño maximo 50 caracteres que contiene el nombre de el paciente.**
+ Apellido _(string)_: **cadena de tamaño maximo 80 caracteres que contiene los apellidos del paciente**
+ DNI _(string)_: **cadena de 9 caracteres que contiene 8 numeros y una letra y consiste ene el NIF del paciente**
+ Teléfono _(int)_: **numero entero de 9 digitos que corresponde al numero de telefono del paciente**
+ Dirección _(string)_: **Consiste en una cadena de una longitud de unos 100 caracteres de longitud que contiene la direccion postal del paciente**
+ Fecha de Nacimineto _(struct fecha)_: **fecha de nacimiento del paciente**
+ Compañia _(string)_: **Compañia medica del paciente (seguro medico o seguridad social).**
+ Alta médica _(bool)_: **Es true si el paciente tiene el alta médica, y false si tiene la baja médica.**

### MÉTODOS:
- Persona() **Constructor, recibe por parametros todos los datos del paciente nuevo e inicializa el nuevo paciente (todos son obligatorios)**

- getNombre() **observador de nombre**
+ getApellidos() **observador de apellidos**
- getDNI() **observador de DNI**
+ getTelefono() **observador de telefono**
- getDireccion() **observador de direccion**
+ getFecha() **observador de fecha**
- getCompañia() **observador de compañia**

- setNombre(string nombre) **Recibe un nombre por parametro y modifica el del paciente por este nuevo.**
+ setApellidos(string apellido) **Recibe el apellido por parametro y modifica el del paciente por este nuevo.**
- setDNI(string DNI) **Recibe un nuevo dni por parametro y modifica el del paciente por este.**
+ setTelefono(int telefono) **recibe el telefono nuevo como parametro y modifica el ya existente por este.**
- setDireccion(string direccion) **Recibe una nueva direccion por parametro y modifica la ya existente.**
+ setFecha(class fecha) **Recibe una clase de tipo fecha y modifica la fecha de el paciente por esta nueva.**
- setCompañia(string compañia) **Recibe la nueva compañia por parametro y modifica la ya existente.**
+ setAltaMedica(bool alta)  **Recibe un parámetro de tipo bool y modifica el alta médica del paciente.**

- addPersona(persona, lista) **Recibe un objeto de tipo Persona y lo guarda en una lista.**
+ deletePersona(dni, lista) **Recibe el dni del paciente que se quiere eliminar, y lo borra de la lista.**
- modificarPersona(dni, persona, lista) **Recibe el dni de la persona que se quiere modificar, un objeto tipo Persona con os nuevos valores, y lo guarda en la lista.**
+ mostrarPersonas(lista) **Muestra todos los pacientes registrados en la lista.**
- mostrarPersona(dni, lista) **Recibe el dni del paciente que se desea mostrar, lo busca en la lista y lo muestra por pantalla.**
+ darAlta(dni, lista) **Recibe el dni del paciente al que se desea dar de alta y cambia su estado en la lista.**
- darBaja(dni, lista) **Recibe el dni del paciente al que se desea dar de baja y cambia su estado en la lista.**

+ leeFichero(fichero, lista) **Carga todos los datos del fichero en una lista.**
- escribeFichero(fichero, lista) **Carga todos los datos de la lista en un fichero.**
