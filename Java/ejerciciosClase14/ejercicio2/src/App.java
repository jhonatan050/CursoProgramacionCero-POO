/*
Ejercicio 2 - Sistema simple de animales del refugio
Autor: Jhonatan Chango 
Fecha: 27 de marzo del 2026

Enunciado:
    Desarrollar un programa en Java que permita representar animales dentro de un refugio

    El sistema debe contar con:
        - una clase base llamada Animal
        - dos subclases llamadas Perro y Gato
        - un metodo llamado hacerSonido() que se comporte de manera distinta en cada subespecie
        - una coleccion que almacene varios animales
        - un recorrido que muestera la informcaion y el sonido de cada animal
 */

import java.util.ArrayList;
public class App {
    public static void main(String[] args) throws Exception {
        //Creamos una lista de tipo animal
        ArrayList<Animal> animales = new ArrayList<>();

        //Agregamos objetos de distinta especie
        animales.add(new Perro("Firulais", 3));
        animales.add(new Gato("Nala", 2));
        animales.add(new Perro("Toby", 7));

        //Recorremos la lista
        for(Animal animal: animales){
            animal.mostrarInfo();
            animal.hacerSonido();
            System.out.println("-----------------------");
        }
    }
}
