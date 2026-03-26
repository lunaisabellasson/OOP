class Persona {
    String nombre;
    int edad;

    void saludar() {
        System.out.println("Hola soy " + nombre + " y tengo " + edad + " años.");
    }

    public static void main(String[] args) {
        Persona p1 = new Persona();
        p1.nombre = "Luna";
        p1.edad = 16;
        p1.saludar();

        Persona p2 = new Persona();
        p2.nombre = "Iris";
        p2.edad = 2;
        p2.saludar();

        Persona p3 = new Persona();
        p3.nombre = "Lulu";
        p3.edad = 3;
        p3.saludar();
    }
}
