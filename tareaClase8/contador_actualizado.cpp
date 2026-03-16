/*
Ejercicio 5: Contador actualizado con referencia
Autor: Jhonatan Chango
Fecha: 15 de marzo del 2026

Enunciado: Desarrolla un programa que pida al usuario un número entero positivo n y luego
incremente un contador desde 0 hasta n, usando una función que actualice el valor
del contador.
El objetivo es que practiques el uso de paso por referencia para modificar una
variable desde una función.
El programa debe mostrar el valor del contador en cada incremento.

E/P/S

Entrada:
    Un numero entero N

Proceso:
    Incrementar el contador desde 0 hasta N 

Salida:
    Mostrar el incremento de los valores desde cero hasta N 
*/

#include<iostream>
using namespace std;

//Prototipo de funciones 
void incremento(int N);

int main(){
    int N;
    cout<<"===== CONTADOR ====="<<endl;
    cout<<"Ingrese un numero entero n:"<<endl;
    cin>>N;

    incremento(N);

return 0;
}

void incremento(int N){

    for(int i=0;i<=N;i++){
        cout<<"."<<i<<endl;
    }
}