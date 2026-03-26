class CuentaBancaria:
    def __init__(self, titular, saldo_inicial):
        self._titular = titular
        self._saldo = saldo_inicial

    def get_titular(self):
        return self._titular

    def get_saldo(self):
        return self._saldo

    def depositar(self, monto):
        if monto > 0:
            self._saldo += monto

    def retirar(self, monto):
        if monto > 0 and monto <= self._saldo:
            self._saldo -= monto

    def mostrar(self):
        print("Titular =", self._titular)
        print("Saldo =", self._saldo)


print("=== EJEMPLO: CUENTA BANCARIA ===")
c1 = CuentaBancaria("Maria", 100000.0)
c1.mostrar()

c1.depositar(25000.0)
c1.retirar(10000.0)

print("\nDespues de operaciones:")
c1.mostrar()


class Estudiante:
    def __init__(self, nombre, nota):
        self._nombre = nombre
        if nota >= 0:
            self._nota = nota
        else:
            self._nota = 0

    def get_nombre(self):
        return self._nombre

    def get_nota(self):
        return self._nota

    def set_nombre(self, nombre):
        self._nombre = nombre

    def set_nota(self, nota):
        if nota >= 0:
            self._nota = nota
        else:
            print("No se permite una nota negativa")

    def mostrar(self):
        print("Nombre =", self._nombre)
        print("Nota =", self._nota)


print("\n=== EJERCICIO: ESTUDIANTE ===")
e1 = Estudiante("Carlos", 85)
e1.mostrar()

print("\nActualizando datos:")
e1.set_nombre("Carlos Perez")
e1.set_nota(95)
e1.mostrar()

print("\nIntentando asignar una nota negativa:")
e1.set_nota(-10)
e1.mostrar()
