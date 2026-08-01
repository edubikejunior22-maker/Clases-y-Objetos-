# Actividad 8 – Clases y Objetos

## Consigna
Crea una clase llamada Libro con los atributos: titulo, autor, año de
publicación, edición, cantidad de páginas, crea un método para mostrar
la información, los atributos deben ser privados y el método público.
Luego en la función Main instanciar la clase para que el usuario
introduzca por teclado al menos 5 libros y luego los muestre en
pantalla.

## Datos del estudiante
- **Nombre:** Pedro Yunior Edubique Hernández
- **Matrícula:** (agregar matrícula)
- **Sección:** ISW-121-3
- **Materia:** Lógica de Programación
- **Profesor:** Gamalier Reyes del Carmen

## Descripción breve del programa
Este programa implementa la clase `Libro` utilizando el pilar de la
Programación Orientada a Objetos conocido como **encapsulación**: todos
los atributos (`titulo`, `autor`, `anioPublicacion`, `edicion`,
`cantidadPaginas`) son **privados**, y solo pueden accederse a través de
los métodos **públicos** `capturarDatos()` y `mostrarInformacion()`. En
la función `main()` se crean 5 objetos de tipo `Libro`, se le pide al
usuario que introduzca por teclado los datos de cada uno, y finalmente
se muestran en pantalla todos los libros registrados.

## Datos de entrada
Por cada uno de los 5 libros, el usuario introduce:
- Título
- Autor
- Año de publicación
- Edición
- Cantidad de páginas

## Datos que procesa
El programa almacena la información de cada libro en un objeto `Libro`
independiente (dentro de un `vector<Libro>`), manteniendo los datos
protegidos mediante encapsulación, y los organiza para poder recorrerlos
y mostrarlos posteriormente.

## Datos de salida
El listado completo de los 5 libros registrados, mostrando para cada
uno: título, autor, año de publicación, edición y cantidad de páginas.

## Importancia de la encapsulación en la POO
La encapsulación es importante porque protege los datos de un objeto,
evitando que otras partes del programa los modifiquen de forma directa
o incorrecta. Al declarar los atributos como privados y exponer solo
los métodos necesarios como públicos, se controla cómo se accede y se
modifica la información, lo que hace el código más seguro, más fácil
de mantener y reduce errores, ya que los cambios internos de la clase
no afectan a quien la utiliza.

## Cómo compilar y ejecutar el programa

### Compilar
Usando g++ desde la terminal:
```bash
g++ -o Libro Libro.cpp
```

### Ejecutar
En Linux/Mac:
```bash
./Libro
```
En Windows:
```bash
Libro.exe
```

Luego el programa pedirá introducir los datos de los 5 libros y, al
finalizar, mostrará el listado completo en pantalla.

## Capturas de pantalla del programa en ejecución
(Agregar aquí las capturas de pantalla del programa compilado y
ejecutándose, mostrando la captura de datos y el listado final).
