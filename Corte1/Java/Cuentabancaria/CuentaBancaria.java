class CuentaBancaria {
    private String titular;
    private double saldo;

    public CuentaBancaria(String titular, double saldoInicial) {
        this.titular = titular;
        this.saldo = saldoInicial;
    }

    public String getTitular() {
        return titular;
    }

    public double getSaldo() {
        return saldo;
    }

    public void depositar(double monto) {
        if (monto > 0) saldo += monto;
    }

    public void retirar(double monto) {
        if (monto > 0 && monto <= saldo) saldo -= monto;
    }

    public void mostrar() {
        System.out.println("Titular = " + titular);
        System.out.println("Saldo = " + saldo);
    }
}

class Estudiante {
    private String nombre;
    private double nota;

    public Estudiante(String nombre, double nota) {
        this.nombre = nombre;
        if (nota >= 0) {
            this.nota = nota;
        } else {
            this.nota = 0;
        }
    }

    public String getNombre() {
        return nombre;
    }

    public double getNota() {
        return nota;
    }

    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public void setNota(double nota) {
        if (nota >= 0) {
            this.nota = nota;
        } else {
            System.out.println("No se permite una nota negativa");
        }
    }

    public void mostrar() {
        System.out.println("Nombre = " + nombre);
        System.out.println("Nota = " + nota);
    }
}

public class Practica4 {
    public static void main(String[] args) {
        System.out.println("=== EJEMPLO: CUENTA BANCARIA ===");
        CuentaBancaria c1 = new CuentaBancaria("Maria", 100000.0);
        c1.mostrar();

        c1.depositar(25000.0);
        c1.retirar(10000.0);

        System.out.println("\nDespues de operaciones:");
        c1.mostrar();

        System.out.println("\n=== EJERCICIO: ESTUDIANTE ===");
        Estudiante e1 = new Estudiante("Carlos", 85);
        e1.mostrar();

        System.out.println("\nActualizando datos:");
        e1.setNombre("Carlos Perez");
        e1.setNota(95);
        e1.mostrar();

        System.out.println("\nIntentando asignar una nota negativa:");
        e1.setNota(-10);
        e1.mostrar();
    }
}
