/*
Titulo: Tarea Clase 13
Autor: Jhonatan Chango
Fecha: 26/03/2026

Enunciado: 
    Crea una clase llamada Mascota que represente una mascota sencilla.
    La clase debe tener los siguientes atributos:
        • nombre
        • especie
        • edad
*/

public class App {
    public static void main(String[] args) throws Exception {
        Mascota mascota1 = new Mascota("Max", "Perro", 5);
        Mascota mascota2 = new Mascota("Pepe", "Gato", 2);

        System.out.println("==== MASCOTA 1 ====");
        mascota1.mostrarInfo();
        System.out.println();

        System.out.println("==== MASCOTA 2 ====");
        mascota2.mostrarInfo();
        System.out.println();
    }
}
