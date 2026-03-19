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
#include<iostream>
#include<string>

using namespace std;

//Prototipo de funciones

//Funcion para registrar datos
void registrarDatos(string nombres[], int &estudiantes, int notas[]);

//Funcion para mostrar listado
void mostrarListado(string nombres[], int notas[], int estudiantes);

//Funcion para calcular promedio
int calcularPromedio(int notas[], int estudiantes);

//Funcion para obtener nota mayor y menor
void notaMayorMenor(int notas[]);

//Funcion para contar aprobaos y reprobados
void aprobadosReprobados(int notas[]);

//Funcion para buscar estudiantes
void buscarEstudiantes(string nombres[], int notas[]);

//Funcion para mostrar menu
void mostrarMenu(int op);

int main(){

    //Declaracion de arreglos
    string nombres[20];
    int notas[20];

    //Declaracion de variables a usar
    int op;
    int estudiantes=0;

    mostrarMenu(op);
    do{
    switch (op)
    {
    case 1:
        registrarDatos(nombres, estudiantes, notas);
        break;
    case 2:
        mostrarListado(nombres, notas, estudiantes);
        break;
    case 3:
        int promedio= calcularPromedio(notas,estudiantes);
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

void mostrarMenu(int op){
    cout<<"=========== MENU ==========="<<endl;
    cout<<"1. Registrar estudiantes y notas"<<endl;
    cout<<"2. Mostrar listado completo"<<endl;
    cout<<"3. Mostrar promedio general"<<endl;
    cout<<"4. Mostrar nota mayor y nota menor"<<endl;
    cout<<"5. Mostrar aprobados y reprobados"<<endl;
    cout<<"6. Buscar estudiante por nombre"<<endl;
    cout<<"7. Salir"<<endl;
    cout<<"Seleccione una opcion: "<<endl;
    cin>>op;
}

void registrarDatos(string nombres[], int &estudiantes, int notas[]){
    int i;

    cout<<"Ingrese la cantidad de estudiantes a registrar: "<<endl;
    cin>> estudiantes;
    for (i=0; i<estudiantes;i++){
        cout<<"Ingrese el nombre del estudiante "<<i+1<<": "<<endl;
        cin>>nombres[i];
    }

    cout<<"Ingrese la nota correspondiente a cada estudiante: "<<endl;
    for (i=0;i<estudiantes;i++){
        do{
            cin>>notas[i];
            if (notas[i]<0 || notas[i]>20){
                cout<<"Error. La nota ingresada esta fuera de rango. Intente nuevamente"<<endl;
            }

        }while (notas[i]<0 || notas[i]>20);
    }
}

//Funcion para mostrar listado
void mostrarListado(string nombres[], int notas[], int estudiantes){
    int i;
    cout<<"***** LISTADO *****"<<endl;
    if (estudiantes==0){
        cout<<"Aun no se han registrado estudiantes."<<endl;
    }else{
        for (i=0; i<estudiantes; i++){
        cout<<i+1<<". "<<nombres[i]<<" - "<<notas[i]<<endl;
        }
    }
}

//Funcion para calcular promedio
int calcularPromedio(int notas[], int estudiantes){
    int suma = 0;

    cout<<"****** PROMEDIO GENERAL ******"<<endl;
    if (estudiantes==0){
        cout<<"Aun no se han registrado estudiantes."<<endl;
    }else{
        for (int i=0; i<estudiantes;i++){
            suma = suma + notas[i];
        }
    }
return suma/estudiantes;
}