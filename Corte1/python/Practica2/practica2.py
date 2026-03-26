class Person:
    def __init__(self):
        self.name = ""
        self.age = 0

    def say_hello(self):
        if self.age >= 18:
            print(f"Hi, I'm {self.name}, I'm {self.age} and I'm an adult.")
        else:
            print(f"Hi, I'm {self.name}, I'm {self.age} and I'm a minor.")

    def birthday(self):
        self.age += 1


def main():
    p1 = Person()
    p1.name = "Luna"
    p1.age = 16
    p1.say_hello()

    p1.birthday()
    p1.say_hello()

    p2 = Person()
    p2.name = "Iris"
    p2.age = 15
    p2.say_hello()


if __name__ == "__main__":
    main()