#ifndef SISTEMAGESTION_H
#define SISTEMAGESTION_H

#include "Estudiante.h"

class SistemaGestion {
private:
    static const int MAX_ESTUDIANTES = 5;
    static const int NUM_NOTAS = 3;

    Estudiante estudiantes[MAX_ESTUDIANTES];
    double notas[MAX_ESTUDIANTES][NUM_NOTAS];
    int cantidadEstudiantes;

public:
    SistemaGestion();

    void mostrarBienvenida() const;
    void mostrarMenu() const;

    void registrarEstudiante();
    void mostrarTodos() const;
    void buscarPorCodigo() const;
    void asignarOActualizarNotas();
    void mostrarPromedioEstudiante() const;
    void mostrarMatrizCompleta() const;

    int buscarIndicePorCodigo(string codigo) const;
    bool existeCodigo(string codigo) const;
    double calcularPromedio(int indice) const;
    string clasificarPromedio(double promedio) const;

    // Validaciones de entrada
    int leerEntero(const string& mensaje, int minimo, int maximo) const;
    double leerDouble(const string& mensaje, double minimo, double maximo) const;
};

#endif
