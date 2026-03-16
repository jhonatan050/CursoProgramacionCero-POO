/*
Ejercicio 1: 
Autor: Jhonatan Chango
Fecha: 13 de marzo del 2026

Enunciado: Desarrollar un programa en C++ que permita ingresar 4 numeros enteros.
El programa debe usar funciones para:

    1. leer los 4 numeros.
    2. calcule la suma de dichos numeros.
    3. calcular el promedio 
    4. mostrar los resultados.
El objetivo es comprender como dividir un problema en varias funciones con tareas claras

E/P/S:

Entrada:
    4 numeros enteros ingresados por el usuario.

Proceso:
    Leer los 4 numeros.
    Clcular la suma.
    Calcular el promedio.
    Mostrar los resultados en pantalla.

Salida:
    La suma de los 4 numeros.
    El promedio de los 4 numeros.

PLANTILLA 

Funcion con retorno

tipo nombreFuncion(parametros){
    /Instrucciones
    return resultado;
}

Funcion void

void nombreFuncion(parametros){
    / instrucciones
}

PSEUDOCODIGO

Definir n1,n2,n3,n4,suma como entero
Definir promedio como real

Leer los 4 numeros
Calcular suma
Calcular promedio
Mostrar suma y promedio

VERSION MODULARIZACION 

Funcion lerCuatroNumeros(...)
Funcion calcularSuma(...)
Funcion calcularPromedio(...)
Funcion mostrarResultados(...)

Inicio
    leerCuatroNumeros(...)
    suma = calcularSuma(...)
    promedio = calcularPromedio(suma)
    mostrarResultados(suma,promedio)
Fin

*/

//CODIGO EN C++
#include<iostream>
using namespace std;

//Prototipo de funciones o firmas de funciones

void leerCuatroNumeros(int &a, int &b, int &c, int &d);
int calcularSuma(int a, int b, int c, int d);
float calcularPromedio(int suma);
void mostrarResultados(int suma, float promedio);

int main(){
    // Variables donde se guardaran los numeros
    int n1,n2,n3,n4;

    //Variables para resultados
    int suma;
    float promedio;

    //Llamamos a la funcion que lee los 4 numeros
    leerCuatroNumeros(n1, n2, n3, n4);

    //Llamamos a la funcion que calcula la suma
    suma = calcularSuma(n1, n2, n3, n4);

    //Llamamos a la funcion que calcula el promedio
    promedio = calcularPromedio(suma);

    //Mostramos los resultados
    mostrarResultados(suma,promedio); //Asi se invoca una funcion 

return 0;
}

//Esta funcion lee cuatro numeros y los guarda en las variables originales
void leerCuatroNumeros(int &a, int &b, int &c, int &d){
    cout << "Ingrese 4 numeros enteros: ";
    cin >> a >> b >> c >> d;
}

//Esta funcion recibe 4 numeros y devuelve la suma
int calcularSuma(int a, int b, int c, int d){
    return a+b+c+d;
}

//Esta funcion recibe la suma y devuelve el promedio
float calcularPromedio(int suma){
    return suma/4.00; //En C++ cuando se usa floar necesitamos explicitamente que debe usar los decimales para que no desaparezcan
}

//Esta funcion solo muestra resultados, por eso es void.
void mostrarResultados (int suma, float promedio){
    cout<<"Resultados:"<<endl;
    cout<<"Suma: "<<suma<<endl;
    cout<<"Promedio: "<<promedio<<endl;
}