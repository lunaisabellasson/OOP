#include "SistemaGestion.h"
#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;

SistemaGestion::SistemaGestion() {
    cantidadEstudiantes = 0;

    for (int i = 0; i < MAX_ESTUDIANTES; i++) {
        for (int j = 0; j < NUM_NOTAS; j++) {
            notas[i][j] = 0.0;  
        }
    }
}

void SistemaGestion::mostrarBienvenida() const {
    cout << "==============================================\n";
    cout << "  SISTEMA DE GESTION DE ESTUDIANTES Y NOTAS\n";
    cout << "==============================================\n";
    cout << "Proyecto de Programacion Orientada a Objetos\n";
    cout << "Maximo de estudiantes: " << MAX_ESTUDIANTES << "\n";
    cout << "Numero de notas por estudiante: " << NUM_NOTAS << "\n\n";
}

void SistemaGestion::mostrarMenu() const {
    cout << "\n----------- MENU PRINCIPAL -----------\n";
    cout << "1. Registrar un estudiante\n";
    cout << "2. Mostrar todos los estudiantes\n";
    cout << "3. Buscar estudiante por codigo\n";
    cout << "4. Asignar o actualizar notas\n";
    cout << "5. Mostrar promedio de un estudiante\n";
    cout << "6. Mostrar matriz completa de notas\n";
    cout << "7. Salir\n";
    cout << "--------------------------------------\n";
}

int SistemaGestion::leerEntero(const string& mensaje, int minimo, int maximo) const {
    int valor;

    while (true) {
        cout << mensaje;
        cin >> valor;

        if (cin.fail()) {
            cout << "Error: debe ingresar un numero entero.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else if (valor < minimo || valor > maximo) {
            cout << "Error: el valor debe estar entre " << minimo << " y " << maximo << ".\n";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return valor;
        }
    }
}

double SistemaGestion::leerDouble(const string& mensaje, double minimo, double maximo) const {
    double valor;

    while (true) {
        cout << mensaje;
        cin >> valor;

        if (cin.fail()) {
            cout << "Error: debe ingresar un numero valido.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else if (valor < minimo || valor > maximo) {
            cout << "Error: la nota debe estar entre " << minimo << " y " << maximo << ".\n";
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            return valor;
        }
    }  
}

bool SistemaGestion::existeCodigo(string codigo) const {
    return buscarIndicePorCodigo(codigo) != -1;
}

int SistemaGestion::buscarIndicePorCodigo(string codigo) const {
    for (int i = 0; i < cantidadEstudiantes; i++) {
        if (estudiantes[i].getCodigo() == codigo) {
            return i;
        }
    }
    return -1;
}

void SistemaGestion::registrarEstudiante() {
    if (cantidadEstudiantes >= MAX_ESTUDIANTES) {
        cout << "No se pueden registrar mas estudiantes. El arreglo esta lleno.\n";
        return;
    }

    string codigo;
    string nombre;
    int edad;

    cout << "\n--- REGISTRAR ESTUDIANTE ---\n";

    do {
        cout << "Ingrese el codigo: ";
        getline(cin, codigo);

        if (codigo.empty()) {
            cout << "Error: el codigo no puede estar vacio.\n";
        } else if (existeCodigo(codigo)) {
            cout << "Error: ya existe un estudiante con ese codigo.\n";
            codigo = "";
        }
    } while (codigo.empty());

    do {
        cout << "Ingrese el nombre: ";
        getline(cin, nombre);
        if (nombre.empty()) {
            cout << "Error: el nombre no puede estar vacio.\n";
        }
    } while (nombre.empty());

    edad = leerEntero("Ingrese la edad: ", 1, 120);

    // Uso del constructor con parámetros
    Estudiante nuevo(codigo, nombre, edad);
    estudiantes[cantidadEstudiantes] = nuevo;

    for (int j = 0; j < NUM_NOTAS; j++) {
        notas[cantidadEstudiantes][j] = 0.0;
    }

    cantidadEstudiantes++;
    cout << "Estudiante registrado correctamente.\n";
}

void SistemaGestion::mostrarTodos() const {
    cout << "\n--- LISTA DE ESTUDIANTES ---\n";

    if (cantidadEstudiantes == 0) {
        cout << "No hay estudiantes registrados.\n";
        return;
    }

    for (int i = 0; i < cantidadEstudiantes; i++) {
        cout << "\nEstudiante #" << (i + 1) << "\n";
        estudiantes[i].mostrar();
    }
}

void SistemaGestion::buscarPorCodigo() const {
    if (cantidadEstudiantes == 0) {
        cout << "No hay estudiantes registrados.\n";
        return;
    }

    string codigo;
    cout << "\n--- BUSCAR ESTUDIANTE ---\n";
    cout << "Ingrese el codigo a buscar: ";
    getline(cin, codigo);

    int indice = buscarIndicePorCodigo(codigo);

    if (indice == -1) {
        cout << "No se encontro un estudiante con ese codigo.\n";
    } else {
        cout << "Estudiante encontrado:\n";
        estudiantes[indice].mostrar();
    }
}

void SistemaGestion::asignarOActualizarNotas() {
    if (cantidadEstudiantes == 0) {
        cout << "No hay estudiantes registrados.\n";
        return;
    }

    string codigo;
    cout << "\n--- ASIGNAR O ACTUALIZAR NOTAS ---\n";
    cout << "Ingrese el codigo del estudiante: ";
    getline(cin, codigo);

    int indice = buscarIndicePorCodigo(codigo);

    if (indice == -1) {
        cout << "No se encontro un estudiante con ese codigo.\n";
        return;
    }

    cout << "Asignando notas a: " << estudiantes[indice].getNombre() << "\n";

    for (int j = 0; j < NUM_NOTAS; j++) {
        notas[indice][j] = leerDouble("Ingrese la nota " + to_string(j + 1) + ": ", 0.0, 100.0);
    }

    cout << "Notas actualizadas correctamente.\n";
}

double SistemaGestion::calcularPromedio(int indice) const {
    double suma = 0.0;

    for (int j = 0; j < NUM_NOTAS; j++) {
        suma += notas[indice][j];
    }

    return suma / NUM_NOTAS;
}

string SistemaGestion::clasificarPromedio(double promedio) const {
    if (promedio >= 91) {
        return "Excelente";
    } else if (promedio >= 81) {
        return "Bueno";
    } else if (promedio >= 71) {
        return "Regular";
    } else {
        return "Bajo";
    }
}

void SistemaGestion::mostrarPromedioEstudiante() const {
    if (cantidadEstudiantes == 0) {
        cout << "No hay estudiantes registrados.\n";
        return;
    }

    string codigo;
    cout << "\n--- MOSTRAR PROMEDIO ---\n";
    cout << "Ingrese el codigo del estudiante: ";
    getline(cin, codigo);

    int indice = buscarIndicePorCodigo(codigo);

    if (indice == -1) {
        cout << "No se encontro un estudiante con ese codigo.\n";
        return;
    }

    double promedio = calcularPromedio(indice);

    cout << fixed << setprecision(2);
    cout << "Estudiante: " << estudiantes[indice].getNombre() << "\n";
    cout << "Promedio: " << promedio << "\n";
    cout << "Clasificacion: " << clasificarPromedio(promedio) << "\n";
}

void SistemaGestion::mostrarMatrizCompleta() const {
    cout << "\n--- MATRIZ COMPLETA DE NOTAS ---\n";
  
    if (cantidadEstudiantes == 0) {
        cout << "No hay estudiantes registrados.\n";
        return;
    }

    cout << left << setw(12) << "Codigo"
         << setw(20) << "Nombre"
         << setw(10) << "Nota 1"
         << setw(10) << "Nota 2"
         << setw(10) << "Nota 3"
         << setw(12) << "Promedio" << "\n";

    cout << "------------------------------------------------------------------\n";

    cout << fixed << setprecision(2);
    for (int i = 0; i < cantidadEstudiantes; i++) {
        cout << left << setw(12) << estudiantes[i].getCodigo()
             << setw(20) << estudiantes[i].getNombre()
             << setw(10) << notas[i][0]
             << setw(10) << notas[i][1]
             << setw(10) << notas[i][2]
             << setw(12) << calcularPromedio(i) << "\n";
    }
}
