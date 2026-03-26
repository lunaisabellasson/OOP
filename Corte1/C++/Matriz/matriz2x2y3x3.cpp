#include <iostream>
using namespace std;

class Matriz2x2 {
public:
    int data[2][2];

    void cargarEjemplo() {
        data[0][0] = 1; data[0][1] = 2;
        data[1][0] = 3; data[1][1] = 4;
    }

    void imprimir() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cout << data[i][j] << " ";
            }
            cout << "\n";
        }
    }

    int sumaElementos() {
        int s = 0;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                s += data[i][j];
            }
        }
        return s;
    }

    void sumaPorFilas() {
        cout << "Suma de cada fila = ";
        for (int i = 0; i < 2; i++) {
            int s = 0;
            for (int j = 0; j < 2; j++) {
                s += data[i][j];
            }
            cout << s << " ";
        }
        cout << "\n";
    }

    void imprimirDiagonalPrincipal() {
        cout << "Diagonal principal = ";
        for (int i = 0; i < 2; i++) {
            cout << data[i][i] << " ";
        }
        cout << "\n";
    }
};

class Matriz3x3 {
public:
    int data[3][3];

    void cargarEjemplo() {
        data[0][0] = 1; data[0][1] = 2; data[0][2] = 3;
        data[1][0] = 4; data[1][1] = 5; data[1][2] = 6;
        data[2][0] = 7; data[2][1] = 8; data[2][2] = 9;
    }

    void imprimir() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << data[i][j] << " ";
            }
            cout << "\n";
        }
    }

    int sumaElementos() {
        int s = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                s += data[i][j];
            }
        }
        return s;
    }

    void sumaPorFilas() {
        cout << "Suma de cada fila = ";
        for (int i = 0; i < 3; i++) {
            int s = 0;
            for (int j = 0; j < 3; j++) {
                s += data[i][j];
            }
            cout << s << " ";
        }
        cout << "\n";
    }

    void imprimirDiagonalPrincipal() {
        cout << "Diagonal principal = ";
        for (int i = 0; i < 3; i++) {
            cout << data[i][i] << " ";
        }
        cout << "\n";
    }
};

int main() {
    cout << "=== EJEMPLO: MATRIZ 2x2 ===\n";
    Matriz2x2 m1;
    m1.cargarEjemplo();
    m1.imprimir();
    cout << "Suma = " << m1.sumaElementos() << "\n";
    m1.sumaPorFilas();
    m1.imprimirDiagonalPrincipal();

    cout << "\n=== EJERCICIO: MATRIZ 3x3 ===\n";
    Matriz3x3 m2;
    m2.cargarEjemplo();
    m2.imprimir();
    cout << "Suma = " << m2.sumaElementos() << "\n";
    m2.sumaPorFilas();
    m2.imprimirDiagonalPrincipal();

    return 0;
}
