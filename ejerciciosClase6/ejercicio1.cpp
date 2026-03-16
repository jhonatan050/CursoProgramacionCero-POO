/*
Ejercicio 1: Contador con while
Autor: Jhonatan Chango
Fecha: 09 de marzo del 2026

Enunciado: Elaborar un programa en C++ que solicite al usuario un numero entero positivo N y muestre en pantalla
los numeros desde 1 hasta n, usando un bucle while. Si el usuario ingresa un valor menor o igual a cero, el programa 
debe mostrar un mensaje de error y terminar.

E/P/S

Entrada: 
    Un numero entero postivo N.
Proceso: 
    Leer el valor de N 
    Verificar si N es mayor que cero
    Si no lo es, mostrar un mensaje de error.
    Si lo es, usar un contador que inicie en 1.
    Mostrar el valor del contrador
    Aumentar el contador en 1 en cada vuelta.
Salida: 
    Los numeros del 1 hasta N
    O un mensaje de error si el numero ingresado no es valido.
*/
#include<iostream>
using namespace std;

int main(){
    //Declaramos las variables necesarias
    int N=0, contador=0;
    //Pedir al usuario un numero entero positivo

    cout<<"Ingrese un numero entero positivo: ";
    cin>> N;

    //Validamos que el numero sea mayor que cero

    if (N<=0){
        //Si el numero no es valido, mostramos un mensaje de error.
        cout<<"Error: El numero ingresado es invalido"<<endl;
    }else{
        //Inicializamos el contador en 1
        contador=1;

        //Repetimos mientras que el contador sea menor o igual que N

        while (contador<=N){
            cout <<"Contador: "<<contador<<endl;

            //Aumentamos el contador en 1 para evitar bucles infinitos;
            contador++;
        }
    }

    
return 0; 
}
