class Matriz2x2:
    def __init__(self):
        self.data = [[0, 0], [0, 0]]

    def cargar_ejemplo(self):
        self.data[0][0] = 1
        self.data[0][1] = 2
        self.data[1][0] = 3
        self.data[1][1] = 4

    def imprimir(self):
        for fila in self.data:
            print(fila)

    def suma_elementos(self):
        s = 0
        for fila in self.data:
            for x in fila:
                s += x
        return s

    def suma_por_filas(self):
        sumas = []
        for fila in self.data:
            s = 0
            for x in fila:
                s += x
            sumas.append(s)
        return sumas

    def imprimir_diagonal_principal(self):
        print("Diagonal principal:", end=" ")
        for i in range(2):
            print(self.data[i][i], end=" ")
        print()


class Matriz3x3:
    def __init__(self):
        self.data = [[0, 0, 0], [0, 0, 0], [0, 0, 0]]

    def cargar_ejemplo(self):
        self.data[0][0] = 1
        self.data[0][1] = 2
        self.data[0][2] = 3
        self.data[1][0] = 4
        self.data[1][1] = 5
        self.data[1][2] = 6
        self.data[2][0] = 7
        self.data[2][1] = 8
        self.data[2][2] = 9

    def imprimir(self):
        for fila in self.data:
            print(fila)

    def suma_elementos(self):
        s = 0
        for fila in self.data:
            for x in fila:
                s += x
        return s

    def suma_por_filas(self):
        sumas = []
        for fila in self.data:
            s = 0
            for x in fila:
                s += x
            sumas.append(s)
        return sumas

    def imprimir_diagonal_principal(self):
        print("Diagonal principal:", end=" ")
        for i in range(3):
            print(self.data[i][i], end=" ")
        print()


print("=== EJEMPLO: MATRIZ 2x2 ===")
m1 = Matriz2x2()
m1.cargar_ejemplo()
m1.imprimir()
print("Suma =", m1.suma_elementos())
print("Suma de cada fila =", m1.suma_por_filas())
m1.imprimir_diagonal_principal()

print("\n=== EJERCICIO: MATRIZ 3x3 ===")
m2 = Matriz3x3()
m2.cargar_ejemplo()
m2.imprimir()
print("Suma =", m2.suma_elementos())
print("Suma de cada fila =", m2.suma_por_filas())
m2.imprimir_diagonal_principal()
