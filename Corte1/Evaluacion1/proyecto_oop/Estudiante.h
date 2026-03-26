#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <string>
using namespace std;

class Estudiante {
private:
    string codigo;
    string nombre;
    int edad;

public:
    // Constructor por defecto
    Estudiante();

    // Constructor con parámetros
    Estudiante(string codigo, string nombre, int edad);

    // Setters
    void setCodigo(string codigo);
    void setNombre(string nombre);
    void setEdad(int edad);

    // Getters
    string getCodigo() const;
    string getNombre() const;
    int getEdad() const;

    // Métodos
    void mostrar() const;
    bool estaVacio() const;
};

#endif
