#include <iostream>
#include <string>
using namespace std;
class Persona {
public:
   string nombre;
   int edad;

   void saludar() {
     cout <<"Hola soy " << nombre << " y tengo " <<edad<< "años.\n";
  }
};
int main(){
Persona p1;
p1.nombre = "Luna ";
p1.edad = 16;
p1.saludar();
Persona p2;
p2.nombre = "Iris ";
p2.edad = 2;
p2.saludar();
Persona p3;
p3.nombre = " Lulu ";
p3.edad = 3;
p3.saludar();
return 0;
}

