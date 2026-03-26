#include <iostream>
using namespace std;

class Rectangulo {
public:
    double base;
    double altura;

    Rectangulo(double b, double h) {
        base = b;
        altura = h;
    }

    double area() {
        return base * altura;
    }
};

int main() {
    Rectangulo r1(3.0, 2.0);

    cout << "Base: " << r1.base << endl;
    cout << "Altura: " << r1.altura << endl;
    cout << "Area: " << r1.area() << endl;

    return 0;
}
