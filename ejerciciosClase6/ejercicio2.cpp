/*
Ejercicio 2: Acumulador con for
Autor: Jhonatan Chango
Fecha: 09 de marzo del 2026

Enunciado: Elaborar un programa en C++ que solicite al usuario cinco numeros enteros, y calcule la suma total de estos numeros
usando un bucle for. Al final el program debe mostrar el resultado acumulado.

E/P/S
Entrada:
    Cinco numeros enteros ingresados por el usuario.
Proceso:
    Incializar una variable suma en cero.
    Repetir cinco veces:
        Pedir un numero.
        Leer el numero.
        Sumar ese valor al acumulador.
    Al final mostrar la suma total.
Salida: 
    La suma total de los 5 numeros ingresados.

*/
#include<iostream>
using namespace std;

int main(){
    //Declaramos las variables.
    int i=0, numero=0, suma=0;

    //Inicializamos el acumulador en cero
    //suma = 0;

    //usamos un for porque ya sabemos que se repetira cinco veces

    for (i=1;i<=5;i++){
        cout<< "Ingrese el numero "<<i<< ": "<<endl;
        cin >> numero;
        suma= suma + numero;
    }

    cout<< "La suma de los 5 numeros es: "<< suma<< endl;

return 0;
}