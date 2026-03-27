public class Mascota {
String nombre;
String especie;
int edad;

    public Mascota (String nombre, String especie, int edad){ //Constructor para crear el objeto
        this.nombre = nombre;
        this.especie = especie;
        this.edad = edad;
    }

    public void mostrarInfo(){ //Metodo que muestra la informacion de la mascota 
        System.out.println("Nombre: "+ nombre);
        System.out.println("Especie: "+ especie);
        System.out.println("Edad: "+ edad);
    }
}