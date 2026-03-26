class Matriz2x2 {
    public int[][] data;

    public Matriz2x2() {
        data = new int[2][2];
    }

    public void cargarEjemplo() {
        data[0][0] = 1; data[0][1] = 2;
        data[1][0] = 3; data[1][1] = 4;
    }

    public void imprimir() {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                System.out.print(data[i][j] + " ");
            }
            System.out.println();
        }
    }

    public int sumaElementos() {
        int s = 0;
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                s += data[i][j];
            }
        }
        return s;
    }

    public void sumaPorFilas() {
        System.out.print("Suma de cada fila = ");
        for (int i = 0; i < 2; i++) {
            int s = 0;
            for (int j = 0; j < 2; j++) {
                s += data[i][j];
            }
            System.out.print(s + " ");
        }
        System.out.println();
    }

    public void imprimirDiagonalPrincipal() {
        System.out.print("Diagonal principal = ");
        for (int i = 0; i < 2; i++) {
            System.out.print(data[i][i] + " ");
        }
        System.out.println();
    }
}

class Matriz3x3 {
    public int[][] data;

    public Matriz3x3() {
        data = new int[3][3];
    }

    public void cargarEjemplo() {
        data[0][0] = 1; data[0][1] = 2; data[0][2] = 3;
        data[1][0] = 4; data[1][1] = 5; data[1][2] = 6;
        data[2][0] = 7; data[2][1] = 8; data[2][2] = 9;
    }

    public void imprimir() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                System.out.print(data[i][j] + " ");
            }
            System.out.println();
        }
    }

    public int sumaElementos() {
        int s = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                s += data[i][j];
            }
        }
        return s;
    }

    public void sumaPorFilas() {
        System.out.print("Suma de cada fila = ");
        for (int i = 0; i < 3; i++) {
            int s = 0;
            for (int j = 0; j < 3; j++) {
                s += data[i][j];
            }
            System.out.print(s + " ");
        }
        System.out.println();
    }

    public void imprimirDiagonalPrincipal() {
        System.out.print("Diagonal principal = ");
        for (int i = 0; i < 3; i++) {
            System.out.print(data[i][i] + " ");
        }
        System.out.println();
    }
}

public class Practica6 {
    public static void main(String[] args) {
        System.out.println("=== EJEMPLO: MATRIZ 2x2 ===");
        Matriz2x2 m1 = new Matriz2x2();
        m1.cargarEjemplo();
        m1.imprimir();
        System.out.println("Suma = " + m1.sumaElementos());
        m1.sumaPorFilas();
        m1.imprimirDiagonalPrincipal();

        System.out.println("\n=== EJERCICIO: MATRIZ 3x3 ===");
        Matriz3x3 m2 = new Matriz3x3();
        m2.cargarEjemplo();
        m2.imprimir();
        System.out.println("Suma = " + m2.sumaElementos());
        m2.sumaPorFilas();
        m2.imprimirDiagonalPrincipal();
    }
}
