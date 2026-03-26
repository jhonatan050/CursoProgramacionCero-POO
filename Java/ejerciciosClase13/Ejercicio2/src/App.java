/*
Clase, objeto y atributos 

Que archivos crear: crear estos 2 archivos
Estudiante.java
App.java

Titulo del ejercicio: Ejercicio 1
Autor: Jhonatan Chango

Enunciado: 
    Crear una clase llamada Estudiante con los atributos nombre, edad y carrera.
    Luego desde la clase principal, crear 2 objetos y mostrar sus datos en consola.

*/


public class App {
    public static void main(String[] args) {
        
        Estudiante estudiante1 = new Estudiante(); //Aqui creamos un primer objeto de tipo estudiante 

        estudiante1.nombre= "Ana"; //Asignamos el valor "Ana" al atributo nombre del objeto estudiante1
        estudiante1.edad = 20; //Asignamos el valor 20 al atributo edad del objeto estudiante1
        estudiante1.carrera = "Software"; //Asignamos el valor "software" al atributo carrera del objeto estudiante1

        Estudiante estudiante2 = new Estudiante(); //Aqui creamos el segundo objeto de tipo Estudiante

        estudiante2.nombre= "Luis"; //Asignamos el valor "Luis" al atributo nombre del objeto estudiante2
        estudiante2.edad= 22; //Asginamos el valor 22 al atributo edad del objeto estudiante2
        estudiante2.carrera= "Computacion"; //Asignamos el valor"Computacion" al atributo carrera del pbjeto estudiante2 

        System.out.println("==== ESTUDIANTE 1 ====");//Imprimimos un titulo para el primer estudiante 
        System.out.println("Nombre: "+ estudiante1.nombre); //Mostramos el nombre del primer estudiante 
        System.out.println("Edad: "+ estudiante1.edad); //Mostramos la edad del primer estudiante
        System.out.println("Carrera: "+ estudiante1.carrera); //Mostramos la carrera del primer estudiante 

        System.out.println("==== ESTUDIANTE 2 ====");//Imprimimos un titulo para el segundo estudiante 
        System.out.println("Nombre: "+ estudiante2.nombre); //Mostramos el nombre del segundo estudiante 
        System.out.println("Edad: "+ estudiante2.edad); //Mostramos la edad del segundo estudiante
        System.out.println("Carrera: "+ estudiante2.carrera); //Mostramos la carrera del segundo estudiante 

    }
}
