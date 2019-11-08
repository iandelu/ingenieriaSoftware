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

### MÉTODOS:
- Persona() **Constructor, recibe por parametros todos los datos del paciente nuevo e inicializa el nuevo paciente (todos son obligatorios)**
+ getPersona() **Muestra por pantalla todos los datos de una persona**
- setNombre(string nombre) **Recibe un nombre por parametro y modifica el del paciente por este nuevo.**
+setApellidos(string apellido) **Recibe el apellido por parametro y modifica el del paciente por este nuevo.**
- setDNI(string DNI) **Recibe un nuevo deni por parametro y modifica el del paceinte por este.**
+ setTelefono(int telefono) **recibe el telefono nuevo como parametro y modifica el ya existente por este.**
- setDireccion(string direccion) **Recibe una nueva direccion por parametro y modifica la ya existente.**
+ setFecha(struct fecha) **Recibe una estructura fecha y modifica la fecha de el paciente por esta nueva.**
- setCompañia(string compañia) **Recibe la nueva compañia por parametro y modifica la ya existente** 
+ deletePersona() **Borra todos los datos de ese objeto**
