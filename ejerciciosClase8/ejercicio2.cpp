/*
Ejercicio 2: Intercambio dos numeros usando paso por referencia
Autor: Jhonatan Chango
Fecha: 13 de marzo del 2026

Enunciado: Desarrollar un programa en C++ que permita ingresar 2 numeros enteros y luego intercambiar sus valores usando una funcion.
Este ejercicio tiene como objetivo principal comprender la diferencia entre:
    Paso por valor
    Paso por referencia

E/P/S

Entrada:
    2 numeros enteros ingresados por el usuario.

Proceso:
    Leer 2 numeros
    MOstrar sus valores antes del intercambio
    Llamar a una funcion que intercambie los valores.
    Mostrar los valores despues del intercambio.

Salida:
    Valores antes del intercambio
    Valores despues del intercambio

CONCEPTOS IMPORTANTES:

1. Paso por valor
    La funcion recibe una copia de la variable
    Si cambias esa copia, la variable orignial no cambia.

2. Paso por referencia
    La funcion trabaja con la variable original.
    Si cambias el valor parametro, entonces va a cambiar fuera de la funcion.

3. El simbono &
    En parametros, & indica referencia.
    Ejemplo:

    void intercambiar(int &a, int &b)

    Eso significa que la funcion trabajara con las variables reales.

4. Variable auxiliar
    Para intercambiar dos valores, se usa una variable temporal. 

PSEUDOCODIGO

    Definir a,b como entero

    Leer a y b
    Mostrar los valores antes
    Intercambiar a y b
    Mostrar valores despues

*/

//Codigo en C++

#include <iostream>
using namespace std;

//Prototipo de funciones o firma de las funciones
void intercambiar(int &a, int &b);

int main(){
    //Declaramos variables
    int x,y;

    //Pedimos los 2 numeros
    cout<<"Ingrese 2 numeros enteros: "<<endl;
    cin >> x >> y;

    //Mostramos valores antes del intercambio

    cout<<"Antes del intercambio: "<<endl;
    cout<<" x = "<<x<<endl;
    cout<<" y = "<<y<<endl;

    //Llamamos a la funcion que intercambie los valores
    intercambiar(x,y);

    //Mostramos los valores despues del intercambio
    cout<<"Despues del intercambio: "<<endl;
    cout<<" x = "<<x<<endl;
    cout<<" y = "<<y<<endl;

    return 0;
}

//Esta funcion intercambia los valores de las variables originales
void intercambiar(int &a, int&b){
    int auxiliar;

    //Guardamos temporalmente el valor de a
    auxiliar = a;

    //Ahora a toma el valor de b
    a=b;

    //Finalmente b toma el valor guardado en auxiliar
    b=auxiliar;
}
