# Modificar el usuario

### ID: 02 Descripción: Introducimos el apellido del usuario que deseamos modificar y el sistema te da la opcion de editar los datos.


 **Actores principales:** Administrador
 **Actores secundarios:** Usuario

### Precondiciones:
-No se puede modificar el historial del usuario

### Flujo principal:

  1. El administrador desea modificar los datos de un usuario
  2. El administrador abre el cuadro de diálogo de modificar en el menú principal
  3. El administrador introduce el apellido del usuario
  4.  El programa le pregunta al administrador por los datos que quiere variar
  5.  El administrador los introduce y el programa lo guarda
  6.  Se muestra el usuario con los datos modificados




### Post condiciones:
- Se muestran al administrador las distintas operaciones relativas al usuario
- El administrador no puede variar ni el historial ni los tratamientos pasados recetados


### Flujos alternativos:
Si el usuario buscado no existe, mostrar un mensaje de error
