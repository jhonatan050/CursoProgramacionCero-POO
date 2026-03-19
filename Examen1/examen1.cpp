/*
Nombre del estudiante: Jhonatan Chango
Curso: Bootcamp Programación Cero a POO
Clase: 10 - Examen 1 (C++)
Fecha: 18/03/2026
Tema:
Sistema de registro y análisis de notas de estudiantes
Entrada:
- Cantidad de estudiantes
- Nombres de estudiantes
- Nota de cada estudiante
Proceso:
- Validar datos ingresados
- Almacenar información en arreglos
- Calcular promedio general
- Buscar una nota mayor y una nota menor
- Mostrar reporte de aprobados y reprobados
- Permitir consultar un estudiante por nombre
Salida:
- Listado de estudiantes y notas
- Promedio general
- Nota mayor y nota menor
- Cantidad de aprobados y reprobados
- Resultado de búsqueda por nombre
*/

//Librerias a usar
#include<iostream>;
#include<string>;

using namespace std;

//Prototipo de funciones

//Funcion para registrar datos
void registrarDatos(char nombres[], int &estudiantes, int notas[]);

//Funcion para mostrar listado
void mostrarListado(char nombres[], int notas[]);

//Funcion para calcular promedio
int calcularPromedio(int notas[], int estudiantes, int suma);

//Funcion para obtener nota mayor y menor
void notaMayorMenor(int notas[]);

//Funcion para contar aprobaos y reprobados
void aprobadosReprobados(int notas[]);

//Funcion para buscar estudiantes
void buscarEstudiantes(char nombres[], int notas[]);

//Funcion para mostrar menu
void mostrarMenu(int op);

int main(){

    //Declaracion de arreglos
    char nombres[20];
    int notas[20];

    //Declaracion de variables a usar
    int op;
    int estudiantes;
    int suma=0;

    mostrarMenu(op);
    do{
    switch (op)
    {
    case 1:
        registrarDatos(nombres, estudiantes, notas);
        break;
    case 2:
        mostrarListado(nombres, notas);
        break;
    case 3:
        int promedio= calcularPromedio(notas,estudiantes,suma);
        break;
    case 4:
        notaMayorMenor(notas);
        break;
    case 5:
        aprobadosReprobados(notas);
        break;
    case 6:
        buscarEstudiantes(nombres,notas);
        break;
    case 7:
        cout<<"Saliendo del programa.....";
        break;
    default:
        cout<<"Error. La opcion ingresada no es valida"<<endl;
        cout<<"Intentelo nuevamente."<<endl;
        break;
    }
    }while(op!=7);



return 0;
}