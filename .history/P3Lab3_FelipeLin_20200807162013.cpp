#include <iostream>
#include <vector>
using namespace std;

class Libro {
private:
    string titulo;
    string autor;
    int year;


public:
    Libro();
    Libro(string nom, string autor_cons, int anio) {
        titulo = nom;
        autor = autor_cons;
        year = anio;
    }
    string getTitulo() {
        return titulo;
    }
    string getAutor() {
        return autor;
    }
    int getYear() {
        return year;
    }


    void setTitulo(string nom) {
        titulo = nom;
    }
    void setAutor(string autor_cons) {
        autor = autor_cons;
    }
    void setYear(int anio) {
        year = anio;
    }

};


class Catalogo {
    vector<Libro> lista_libro;
public:
    Catalogo(Libro libros) {
        lista_libro.push_back(libros);
    }
    vector<Libro> getLista_libro() {
        return lista_libro;
    }
};


class Biblioteca {
private:
    string nombre;
    int piso;
    int estante;
    int seccion;
    Catalogo ***arreglo_tridimensional;

public:
    Biblioteca();
    Biblioteca(string nom, int piso_cons, int estante_cons, int seccion_cons) {
        nombre = nom;
        piso = piso_cons;
        estante = estante_cons;
        seccion = seccion_cons;
        arreglo_tridimensional[piso_cons][estante_cons][seccion_cons];
    }
    string getNombre() {
        return nombre;
    }
    Catalogo*** getArreglo_tridimensional() {
        return arreglo_tridimensional;
    }
    int getSeccion() {
        return seccion;
    }
    int getEstante() {
        return estante;
    }
    int getPiso() {
        return piso;
    }

    void setNombre(string nom) {
        nombre = nom;
    }
    void setArreglo_tridimensional(int piso_cons, int estante_cons, int seccion_cons, Catalogo cat) {
        arreglo_tridimensional[piso_cons][estante_cons][seccion_cons] = cat.getLista_libro();
    }
    void setSeccion(int seccion_cons) {
        seccion = seccion_cons;
    }
    void setEstante(int estante_cons) {
        estante = estante_cons;
    }
    void setPiso(int piso_cons) {
        piso = piso_cons;
    }

};


vector<Biblioteca> Lista_biblioteca;

int main() {
    int menu;
    cout << "1. Crear biblioteca \n2. Agregar libro \n3. Buscar por titulo \n4. Buscar por autor\n5. Explorar biblioteca\n6. Salida" << endl;
    cin >> menu;
    while (menu!=6)
    {
        switch (menu)
        {
        case 1: {
            string nombre_biblioteca;
            int size_piso, size_estante, size_seccion;
            cout << "Ingrese el nombre de la biblioteca: " << endl;
            cin >> nombre_biblioteca;
            cout << "Ingrese cuantos pisos hay: "<< endl;
            cin >> size_piso;
            cout << "Ingrese cuantos estantes hay: "<< endl;
            cin >> size_estante;
            cout << "Ingrese cuantas secciones hay: "<< endl;
            cin >> size_seccion;

            Biblioteca b(nombre_biblioteca, size_piso, size_estante, size_seccion);

            Lista_biblioteca.push_back(b);


            break;
        }
        case 2: {
            int piso, estante, seccion, posicion;

            for (int i = 0; i < Lista_biblioteca.size(); i++)
            {
                cout << "Posicion: " << i << " " << Lista_biblioteca[i].getNombre() << endl;
            }

            cin >> posicion;
            while (posicion > Lista_biblioteca.size())
            {
                cout << "No puede ingresar ese numero!" << endl;
                cin >> posicion;

            }


            cout << "En que piso quiere ingresar el libro: " << endl;
            cin >> piso;
            while (piso > Lista_biblioteca[posicion].getPiso() || piso < 0)
            {
                cout << "No puede ingresar ese numero!" << endl;
                cin >> piso;

            }

            cout << "En que estante quiere ingresar el libro: " << endl;
            cin >> estante;
            while (estante > Lista_biblioteca[posicion].getEstante() || estante < 0)
            {
                cout << "No puede ingresar ese numero!" << endl;
                cin >> estante;

            }

            cout << "En que seccion quiere ingresar el libro: " << endl;
            cin >> seccion;
            while (seccion > Lista_biblioteca[posicion].getSeccion() || seccion < 0)
            {
                cout << "No puede ingresar ese numero!" << endl;
                cin >> seccion;

            }
            string titulo, autor;
            int year;

            cout << "Ingrese el titulo del libro: " << endl;
            cin >> titulo;
            cout << "Ingrese el nombre del autor: " << endl;
            cin >> autor;
            cout << "Ingrese el año de lanzamiento: " << endl;
            cin >> year;

            Libro l(titulo,autor,year);

            Catalogo c(l);
 
            string ***arreglo_tri = Lista_biblioteca[posicion].getArreglo_tridimensional();

             //arreglo_tri[piso][estante][seccion]=

            break;
        }
        case 3: {

            break;
        }
        case 4: {

            break;
        }
        case 5: {

            break;
        }
        default:
            cout << "No existe esa opcion!" << endl;
            break;
        }
        cout << "1. Crear biblioteca \n2. Agregar libro \n3. Buscar por titulo \n4. Buscar por autor\n5. Explorar biblioteca\n6. Salida" << endl;
        cin >> menu;
    }


}