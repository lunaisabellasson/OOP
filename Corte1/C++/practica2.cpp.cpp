#include <iostream>
#include <string>
using namespace std;

class Person {
public:

    string name;
    int age;

    void sayHello() {
        if(age >= 18){
            cout << "Hi, I'm " << name << ", I'm " << age << " and I'm an adult.\n";
        } else {
            cout << "Hi, I'm " << name << ", I'm " << age << " and I'm a minor.\n";
        }
    }

    void birthday(){
        age = age + 1;
    }
};

int main(){

    Person p1;
    p1.name = "Luna";
    p1.age = 16;
    p1.sayHello();

    p1.birthday();
    p1.sayHello();

    Person p2;
    p2.name = "Iris";
    p2.age = 15;
    p2.sayHello();

    return 0;
}
