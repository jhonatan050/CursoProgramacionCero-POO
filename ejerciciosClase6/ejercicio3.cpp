/*
Ejercicio 3: Menu repetitivo con do-while
Autor: Jhonatan Chango
Fecha: 09 de marzo del 2026

Enunciado: Elaborar un programa en C++ que muestre un menu repetitivo con las siguientes opciones:
    1. Sumar 2 numeros.
    2. Mostrar la tabla de multiplicar de un numero.
    3. Salir.
    El programa debe repetirse hasta que el usuario elija la opcion 3.
    Si el usuario ingresa una opcion invalida, el programa debe mostrar un mensaje de error y volver a mostrar el menu.

E/P/S
Entrada:
    Una opcion del menu.
    Segun la opcion elegida:
        Dos numero para sumar
        Un numero para mostrar su tabla de multiplicar hasta el 10.
Proceso: 
    Mostrar el menu
    Leer la opcion
    Si la opcion es 1:
        Pedir 2 numeros
        sumarlos
        mostrar el resultado
    Si la opcion es 2:
        pedir un numero
        mostrar la tabla del 1 al 10
    Si la opcion es invalida
        Mostrar mensaje de error
    Mostrar mientras la opcion sea diferente de 3
Slida:
    Mensjae de salida
    Mensaje de error por opcion invalida

*/
#include<iostream>
using namespace std;

int main(){
    //Declaramos las variables necesarias
    int op=0;
    int num1=0, num2=0, suma=0;
    int numero=0, i=0;

    //Usamos do while porque queremos que el menu se muestre al menos una vez

    do{
    //Mostrar el menu principal
    cout<<"\n===== MENU ====="<<endl;
    cout <<"1. Sumar 2 numeros"<< endl;
    cout<<"2. Mostrar tabla de multiplicar"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"Seleccione una opcion: ";
    cin>> op;

    //Evaluamos la opcion elegida
    switch (op){
        case 1: 
        cout <<"Ingrese el primer numero: "<<endl;
        cin >> num1;
        cout <<"Ingrese el segundo numero: "<<endl;
        cin >> num2;

        suma = num1 + num2;
        cout <<"La suma es: "<< suma<<endl;
        break;
        case 2:
        cout<<"Ingrese el numero a mostrar su tabla: "<<endl;
        cin>> numero;
        for (i=1;i<=10;i++){

            cout<<i<<". "<<numero <<" x "<<i<<" = "<<numero*i<<endl;

        }
        break;
        case 3:
        cout<<"Saliendo del programa...."<<endl;
        break;

        default:
            cout<<"El valor ingresado es invalido."<<endl;
            break;

    }

    }while(op != 3); // "!=" negacion del igual o "distinto".
}