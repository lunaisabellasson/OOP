#include <iostream>
#include "SistemaGestion.h"
using namespace std;

int main() {
    SistemaGestion sistema;
    int opcion;

    sistema.mostrarBienvenida();

    do {
        sistema.mostrarMenu();
        opcion = sistema.leerEntero("Seleccione una opcion: ", 1, 7);

        switch (opcion) {
            case 1:
                sistema.registrarEstudiante();
                break;
            case 2:
                sistema.mostrarTodos();
                break;
            case 3:
                sistema.buscarPorCodigo();
                break;
            case 4:
                sistema.asignarOActualizarNotas();
                break;
            case 5:
                sistema.mostrarPromedioEstudiante();
                break;
            case 6:
                sistema.mostrarMatrizCompleta();
                break;
            case 7:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opcion invalida.\n";
        }

    } while (opcion != 7);

    return 0;
}
