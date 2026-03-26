class Persona:
    def __init__(self):
        self.nombre = ""
        self.edad = 0

    def saludar(self):
        print(f"Hola soy {self.nombre} y tengo {self.edad} años.")

# Programa principal
p1 = Persona()
p1.nombre = "Luna"
p1.edad = 16
p1.saludar()

p2 = Persona()
p2.nombre = "Iris"
p2.edad = 2
p2.saludar()

p3 = Persona()
p3.nombre = "Lulu"
p3.edad = 3
p3.saludar()
