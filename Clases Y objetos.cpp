#include <iostream>
#include <string>
#include <limits>

using namespace std;

class Libro {
private:
    string titulo;
    string autor;
    int anioPublicacion;
    string edicion;
    int cantidadPaginas;

public:
    // Método para ingresar los datos de un libro por teclado
    void ingresarDatos() {
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Titulo: ";
        getline(cin, titulo);

        cout << "Autor: ";
        getline(cin, autor);

        cout << "Anio de publicacion: ";
        cin >> anioPublicacion;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Edicion: ";
        getline(cin, edicion);

        cout << "Cantidad de paginas: ";
        cin >> cantidadPaginas;
    }

    // Método público para mostrar la información del libro
    void mostrarInformacion() const {
        cout << "----------------------------------\n";
        cout << "Titulo: " << titulo << "\n";
        cout << "Autor: " << autor << "\n";
        cout << "Anio de publicacion: " << anioPublicacion << "\n";
        cout << "Edicion: " << edicion << "\n";
        cout << "Cantidad de paginas: " << cantidadPaginas << "\n";
        cout << "----------------------------------\n";
    }
};

int main() {
    const int CANTIDAD_LIBROS = 5;
    Libro libros[CANTIDAD_LIBROS];

    // Ingreso de datos de los 5 libros
    for (int i = 0; i < CANTIDAD_LIBROS; i++) {
        cout << "\n=== Ingrese los datos del libro " << (i + 1) << " ===\n";
        libros[i].ingresarDatos();
    }

    // Mostrar la información de todos los libros
    cout << "\n\n========== LISTA DE LIBROS ==========\n";
    for (int i = 0; i < CANTIDAD_LIBROS; i++) {
        cout << "\nLibro " << (i + 1) << ":\n";
        libros[i].mostrarInformacion();
    }

    return 0;
}