/*
Ejercicio 1: Suma y promedio de 3 numeros
Autor: Jhonatan Chango
Fecha: 15 de marzo del 2026

Enunciado: Desarrolla un programa que permita ingresar 3 números enteros y que use funciones
para:
• leer los números,
• calcular la suma,
• calcular el promedio,
• mostrar los resultados.

E/P/S

Entrada:
    3 numeros ingresados por el usuario

Proceso:
    Leer los numeros
    Calcular la suma
    Calcular el promedio
    Mostrar el resultado

Salida:
    El promedio de los 3 numeros 
*/

#include<iostream>

using namespace std;

//prototipo de funciones

void leerTresNumeros(int &a, int &b, int &c);
int calcularSuma(int a, int b, int c);
float calcularPromedio(int suma);
void mostrarResultados(int suma, float promedio);

int main(){
    int n1,n2,n3; 
    int suma,promedio;

    leerTresNumeros(n1,n2,n3);

    suma=calcularSuma(n1,n2,n3);

    promedio=calcularPromedio(suma);

    mostrarResultados(suma, promedio);

return 0;
}

void leerTresNumeros(int &a, int &b, int &c){
    cout<<"Ingrese tres numeros enteros: "<< endl;
    cin>> a>>b>>c;
}

int calcularSuma(int a, int b, int c){
    return a+b+c;
}

float calcularPromedio(int suma){
    return suma/3.00;
}

void mostrarResultados(int suma, float promedio){
    cout<<"La suma total es: "<<suma<<endl;
    cout<<"El promedio es: "<<promedio<<endl;
}