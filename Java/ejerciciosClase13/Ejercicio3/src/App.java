/*
Titulo: Ejercicio 2 - Constructor y metodos
Autor: Jhonatan Chango
Enunciado:
    Crear una clase llamada Producto con los atributos nombre, precio y stock;
    La clase debe tener un constructor, un metodo para mostrar informacion
    y tambien un metodo para caluclar el valor total del inventario.
*/
public class App {
    public static void main(String[] args) throws Exception {//Aqui comienza el metodo main
        Producto producto1 = new Producto("Mouse", 15.50, 10 );//Creamos el primer objeto usando el constructor
        Producto producto2 = new Producto("Teclado", 25.00, 5); //Creamos el segundo objeto usando el constructor

        System.out.println("==== PRODUCTO 1 ====");
        producto1.mostrarInfo(); //Llamamos al metodo mostrarInfo del primer objeto
        System.out.println("Valor total en inventario: " + producto1.calcularValorInvetario());
        System.out.println();//Imprimimos una linea en blanco para separar la salida

        System.out.println("==== PRODUCTO 2 ====");
        producto2.mostrarInfo();
        System.out.println("Valor total en inventario: "+ producto2.calcularValorInvetario());
        
    }//Aqui termina el metodo main
}
 