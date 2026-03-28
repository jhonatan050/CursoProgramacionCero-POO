public class CuentaBancaria {
    private String titular; //Atributo privado para guardar el nombre del titular.
    private double saldo; //Atributo privado para guaradar el saldo disponible.

    public CuentaBancaria(String titular, double saldoInicial){ //Constructor para crar la cuenta de datos iniciales
        this.titular = titular; //Guardamos el nombre del titular recibido en el constructor
        if(saldoInicial >=0){ //Verificamos si saldo inicial es valido
            this.saldo = saldoInicial; //Si es valido guaramos ese saldo en el atributo
        } else{
            this.saldo = 0; //Colocamos el saldo en cero para evitar valores negativos
        }
    }

    public String getTitular(){ //getter para consultar el nombre del titular 
        return titular; //Retornamos el valor del atributo titular
    }

    public double getSaldo(){ //Getter para consultar el saldo
        return saldo;
    }

    public void setTitular(String titular){ //Setter para modificar el nombre del titular con validacion
        if (titular != null && !titular.isEmpty()){ //Verificamos que el nuevo titular no sea nulo ni vacio
            this.titular = titular; //Si es valido, actualizamos el nombre de titular.
        }else{
            System.out.println("Error: el titular no puede estar vacio"); //Mostramos un mensaje de error
        }
    }

    public void depositar(double monto){ //Metodo para depositar dinero en la cuenta
        if(monto > 0){
            saldo = saldo + monto; //Sumamos el monto al saldo actual
            System.out.println("Deposito realizado correctamente."); //Mostramos un mensaje de confirmacion
        }else{
            System.out.println("Error: el monto a depositar debe ser mayor que cero");
        }
    }

    public void retirar(double monto){ //Metodo para retirar dinero de la cuenta
        if (monto > 0 && monto >= saldo){ // Verifciamos que el monto sea positivo y no supere el saldo disponible
            saldo = saldo - monto; //Restamos el monto del saldo actual
            System.out.println("Retiro realizado correctamente"); //Mostramos un mensaje 
        }else{
            System.err.println("Error: no se puede retirar ese monto");; //Mostramos un mensaje de error
        }
    }
}
