#include <iostream>
#include <string>
using namespace std;

class CuentaBancaria {
private:
    string titular;
    double saldo;

public:
    CuentaBancaria(string titular, double saldoInicial) {
        this->titular = titular;
        this->saldo = saldoInicial;
    }

    string getTitular() { return titular; }
    double getSaldo() { return saldo; }

    void depositar(double monto) {
        if (monto > 0) saldo += monto;
    }

    void retirar(double monto) {
        if (monto > 0 && monto <= saldo) saldo -= monto;
    }

    void mostrar() {
        cout << "Titular = " << titular << "\n";
        cout << "Saldo = " << saldo << "\n";
    }
};

class Estudiante {
private:
    string nombre;
    double nota;

public:
    Estudiante(string nombre, double nota) {
        this->nombre = nombre;
        if (nota >= 0) {
            this->nota = nota;
        } else {
            this->nota = 0;
        }
    }

    string getNombre() { return nombre; }
    double getNota() { return nota; }

    void setNombre(string nombre) {
        this->nombre = nombre;
    }

    void setNota(double nota) {
        if (nota >= 0) {
            this->nota = nota;
        } else {
            cout << "No se permite una nota negativa\n";
        }
    }

    void mostrar() {
        cout << "Nombre = " << nombre << "\n";
        cout << "Nota = " << nota << "\n";
    }
};

int main() {
    cout << "=== EJEMPLO: CUENTA BANCARIA ===\n";
    CuentaBancaria c1("Maria", 100000.0);
    c1.mostrar();

    c1.depositar(25000.0);
    c1.retirar(10000.0);

    cout << "\nDespues de operaciones:\n";
    c1.mostrar();

    cout << "\n=== EJERCICIO: ESTUDIANTE ===\n";
    Estudiante e1("Carlos", 85);
    e1.mostrar();

    cout << "\nActualizando datos:\n";
    e1.setNombre("Carlos Perez");
    e1.setNota(95);
    e1.mostrar();

    cout << "\nIntentando asignar una nota negativa:\n";
    e1.setNota(-10);
    e1.mostrar();

    return 0;
}
