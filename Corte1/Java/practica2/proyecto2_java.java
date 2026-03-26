public class PersonDemo {

    static class Person {
        public String name;
        public int age;

        public void sayHello() {
            if(age >= 18){
                System.out.println("Hi, I'm " + name + ", I'm " + age + " and I'm an adult.");
            } else {
                System.out.println("Hi, I'm " + name + ", I'm " + age + " and I'm a minor.");
            }
        }

        public void birthday(){
            age = age + 1;
        }
    }

    public static void main(String[] args) {

        Person p1 = new Person();
        p1.name = "Luna";
        p1.age = 16;
        p1.sayHello();

        p1.birthday();
        p1.sayHello();

        Person p2 = new Person();
        p2.name = "Iris";
        p2.age = 15;
        p2.sayHello();
    }
}
