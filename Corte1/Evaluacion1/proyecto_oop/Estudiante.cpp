#include "Estudiante.h"
#include <iostream>
using namespace std;

Estudiante::Estudiante() {
    codigo = "";
    nombre = "";
    edad = 0;
}

Estudiante::Estudiante(string codigo, string nombre, int edad) {
    this->codigo = codigo;
    this->nombre = nombre;
    this->edad = edad;
}

void Estudiante::setCodigo(string codigo) {
    this->codigo = codigo;
}

void Estudiante::setNombre(string nombre) {
    this->nombre = nombre;
}

void Estudiante::setEdad(int edad) {
    if (edad > 0) {
        this->edad = edad;
    }
}

string Estudiante::getCodigo() const {
    return codigo;
}

string Estudiante::getNombre() const {
    return nombre;
}

int Estudiante::getEdad() const {
    return edad;
}

void Estudiante::mostrar() const {
    cout << "Codigo: " << codigo << "\n";
    cout << "Nombre: " << nombre << "\n";
    cout << "Edad: " << edad << "\n";
}

bool Estudiante::estaVacio() const {
    return codigo == "";
}
