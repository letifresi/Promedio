//
// Created by User on 31/1/2026.
//
#include <iostream>
#include "funcioes.h"
using namespace std;

void mostrarMenu() {
    //salida de datos con cout

    cout  <<"\n1. Promedio\n2.Modificar\n3. Mejor Estudiante\n";
    cout << "4. Imprimir Estudiante \n5. Agregar\n0. Salir\nOpicon:";




}
double calcularPromedio(const int* ptrCalificaciones, int cantidadEstudiante) {
    int sumaTotal = 0;
    for (int i = 0; i < cantidadEstudiante; i++) {
        sumaTotal += ptrCalificaciones[i];
    }

    return static_cast<double>(sumaTotal) / cantidadEstudiante;
}

void modificarCalificacion(int* ptrCalificacion, int nuevoValor) {
    *ptrCalificacion = nuevoValor;
}
int encontrarMejorEstudiante(const int* ptrCalificaciones, int cantidadEstudiantes) {
    int indiceMejor = 0;
    for (int i = 0; i < cantidadEstudiantes; i++) {
        if (*(ptrCalificaciones + i) > * (ptrCalificaciones + indiceMejor)) {

        }


    }
    return indiceMejor;
  }
void imprimirListaEstudiantes(const int* ptrCalificaciones,  const string *ptrNombres, int cantidadEstudiante) {
    cout << "\n--- Calificaciones---"<< endl;

    for (int i=0; i < cantidadEstudiante; i++) {
        cout << (i+1) <<"." << ptrNombres[i] << "." << ptrCalificaciones[i] << endl;
    }

}