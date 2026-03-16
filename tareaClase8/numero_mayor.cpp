/*
Ejercicio 2: Numero mayor entre dos valores
Autor: Jhonatan Chango
Fecha: 15 de marzo del 2026

Enunciado: Desarrolla un programa que permita ingresar dos números enteros y determine cuál
de los dos es mayor.
El programa debe estar modularizado usando funciones para:
• leer los datos,
• comparar los valores,
• mostrar el resultado.
Si ambos números son iguales, el programa también debe indicarlo.

E/P/S

Entrada:
    2 numeros enteros ingresados por el usuario

Proceso:
    Leer los numeros
    Comparar los valores
    Mostrar el resultado

Salida:
    Mostrar que numero es mayor 
    Indicar si ambos numeros son iguales
*/

#include<iostream>
using namespace std;

//Prototipo de funciones
void leerNumeros(int &a, int &b);
int compararNumeros(int a, int b);
void mostrarResultados(int resultado, int a, int b);

int main(){
    int n1,n2;

    cout <<"===== COMPARACION DE NUMEROS ====="<<endl;

    leerNumeros(n1,n2);
    int resultado=compararNumeros(n1,n2);
    mostrarResultados(resultado, n1, n2);

return 0;
}

void leerNumeros(int &a, int&b){
    cout<<"Ingrese 2 numeros enteros: "<<endl;
    cin>>a>>b;
}

int compararNumeros(int a, int b){
    if (a>b){
        //cout<<"El numero "<<a<<"es mayor que "<<b<<endl;
        return 1;
    }else if(a<b){
        //cout<<"El numero "<<a<<"es menor que "<<b<<endl;
        return 2;
    }else{
        return 3;
    }
        //cout<<"Ambos numeros son iguales"<<endl;
}

void mostrarResultados(int resultado, int a, int b){
if (resultado == 1){
    cout<<"El numero mayor es: "<<a<<endl;
}else if (resultado ==2){
    cout<<"El numero mayor es: "<<b<<endl;
}else if (resultado ==3){
    cout<<"Ambos numeros son iguales"<<endl;
}
}