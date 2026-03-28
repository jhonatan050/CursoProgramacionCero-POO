/*
Titulo: Ejercicio 1 - Encapsulamiento con validacion
Autor: Jhonatan Chango

Enunciado: 
    Crear una clase llamada cuentaBancaria con los atributos privados titular y saldo.
    La clase debe permitir consultar y modificar sus datos de form controlada
    usando getters, setters y metodos de validacion.

 */
public class App {
    public static void main(String[] args) throws Exception {
        CuentaBancaria cuenta1 = new CuentaBancaria("Jhonatan", 100.0); //Creamos una cuenta bancaria con titular y un saldo inicial

        System.out.println("==== DATOS INICIALES ====");
        System.out.println("Titular: "+ cuenta1.getTitular()); //Consultamos el titular usando el getter 
        System.out.println("Saldo: " + cuenta1.getSaldo()); //Consultamos el saldo usando el getter

        System.out.println(); //Imiprimos una linea en blanco

        cuenta1.depositar(50.0); //Realizamos un deposito valido
        cuenta1.retirar(30.0); //Realizamos un retiro valido
        cuenta1.retirar(200.0); // Intentamos realizar un retiro invalido
        cuenta1.depositar(-10.0); // Intetamos realizar un deposito invalido
        System.out.println(); // Imprimir una linea en blanco o dar un salto de linea
        System.out.println("====DATOS FINALES===="); // Mostramos un titulo
        System.out.println("Titular: " + cuenta1.getTitular()); // Consultamos el titular final
        System.out.println("Saldo: " + cuenta1.getSaldo()); // Consultamos el saldo final
    }
}
