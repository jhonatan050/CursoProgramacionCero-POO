/*
Ejercicio 4: Intercambio de dos numeros
Autor: Jhonatan Chango
Fecha: 15 de marzo del 2026

Enunciado: Desarrolla un programa que permita ingresar dos números enteros y luego
intercambiar sus valores usando una función.
El programa debe:
• mostrar los valores antes del intercambio,
• realizar el intercambio usando una función,
• mostrar los valores después del intercambio.

E/P/S

Entrada:
    2 numeros enteros ingresados por el usuario

Proceso:
    Mostrar los valores antes del intercambio
    Intercambiar ambos numeros
    Mostrar los valores despues del intercambio

Salida:
    Mostrar los valores antes y despues del intercambio
*/

#include<iostream>
using namespace std;

//Prototipo de funciones
void intercambiar(int &a, int &b);

int main(){
    int x,y;

    cout<<"Ingrese 2 numeros enteros: "<<endl;
    cin >> x >> y;

    cout<<"Antes del intercambio: "<<endl;
    cout<<" x = "<<x<<endl;
    cout<<" y = "<<y<<endl;

    intercambiar(x,y);

    cout<<"Despues del intercambio: "<<endl;
    cout<<" x = "<<x<<endl;
    cout<<" y = "<<y<<endl;

    return 0;
}

void intercambiar(int &a, int&b){
    int auxiliar;

    auxiliar = a;

    a=b;

    b=auxiliar;
}