/*
Ejercicio 3: Area de un rectangulo
Autor: Jhonatan Chango
Fecha: 15 de marzo del 2026

Enunciado: Desarrolla un programa que permita ingresar la base y la altura de un rectángulo.
Usa funciones para:
• leer los datos,
• calcular el área,
• mostrar el resultado.
El programa debe trabajar con valores reales si el usuario ingresa decimal.

E/P/S

Entrada:
    La base y la altura de un rectangulo

Proceso:
    Leer los numeros
    Calcular el area
    Mostrar el resultado

Salida:
    Mostrar el area del rectangulo 
*/

#include <iostream>
using namespace std;

//Prototipo de funciones 
void leerNumeros(int &a, int &b);
int calcularArea(int a, int b);
void mostrarResultado(int area);

int main(){
    int base, altura, area;
    cout<<"=====CALCULAR AREAS ====="<<endl;
    leerNumeros(base,altura);
    area=calcularArea(base,altura);
    mostrarResultado(area);

return 0;
}

void leerNumeros(int &a, int &b){
    cout<<"Ingrese la base y altura del rectangulo: "<<endl;
    cin>>a>>b;
}

int calcularArea(int a, int b){
    return a*b;
}

void mostrarResultado(int area){
    cout<<"El area del rectangulo es: "<<area<<endl;
}