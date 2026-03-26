public class Producto {
    String nombre; //Atributo para guardar el nombre del producto
    double precio; //Atributo para guaradr el precio del producto
    int stock; //Atributo para guardar el stock del producto 

    public Producto (String nombre, double precio, int stock){ //Constructor para crear el objeto con valores iniciales 
        this.nombre = nombre; //Guardamos en el atributo nombre el valor recibido por el constructor 
        this.precio = precio; //Guardamos en el atributo precio el valor recibido por el constructor 
        this.stock = stock; //Guardamos en el atributo stock el valor recibido por el constructor 
    }

    public void mostrarInfo(){ //Metodo que muestra la informacion del producto en consola 
        System.out.println("Nombre: "+ nombre); //Mostramos el nombre del producto
        System.out.println("Precio: "+ precio); //Mostramos el precio del producto
        System.out.println("Stock: "+ stock); //Mostramos el stock del prducto 

    }//Aqui termina el metodo mostrarInfo

    public double calcularValorInvetario(){
        return precio*stock;//Retornamos el resultado de multiplicar precio por stock
    }//Aqui termina el metodo calcularValorInventario
}//Aqui termina la clase Producto
