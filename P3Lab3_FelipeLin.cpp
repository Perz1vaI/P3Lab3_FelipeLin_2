#include <iostream>
using namespace std;

class Biblioteca {
private:
    string nombre;
    int piso;
    int estante;
    int seccion;

public:
    Biblioteca();
    Biblioteca(string nom, int piso_cons, int estante_cons, int seccion_cons) {
        nombre = nom;
        piso = piso_cons;
        estante = estante_cons;
        seccion = seccion_cons;
    }
    string getNombre() {
        return nombre;
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

class Catalogo {
private:
    string *arreglo_catalogo = NULL;

public:
    Catalogo();
    void setarreglo_catalogo(string *arreglo) {
        arreglo_catalogo = arreglo;
    }
    string getarreglo_catalogo() {
        return *arreglo_catalogo;
    }

};

class Libro {
private:
    string nombre;
    string autor;
    int year;


public:
    Libro();
    Libro(string nom, string autor_cons, int anio) {
        nombre = nom;
        autor = autor_cons;
        year = anio;
    }
    string getNombre() {
        return nombre;
    }
    string getAutor() {
        return autor;
    }
    int getYear() {
        return year;
    }


    void setNombre(string nom) {
        nombre = nom;
    }
    void setAutor(string autor_cons) {
        autor = autor_cons;
    }
    void setYear(int anio) {
        year = anio;
    }

};



int main() {

}