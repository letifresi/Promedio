//
// Created by User on 31/1/2026.
//
#include <iostream>
#include "funcioes.h"
using namespace std;

void mostrarMenu() {
    //salida de datos con cout

    cout  <<"\n1. Promedio\n2.Modificar\n3. Mejor Estudiante\n";
    cout << "4. Imprimir Estudiante \n 5.Menor promedio\n";
    cout << "6. Estudiantes Ordenanos \n 7. Agregar\n0. Salir\nOpicon:";




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

int encontrarMenorEstudiante(const int* ptrCalificaciones, int cantidadEstudiantes) {
    int indiceMenor = 0;
    for (int i = 0; i < cantidadEstudiantes; i++) {
        if (*(ptrCalificaciones + i) < *(ptrCalificaciones + indiceMenor)) {
            indiceMenor = i;
        }
    }
    return indiceMenor;
}

void ordenarEstudiante( string* ptrNombres, int* ptrCalificaciones, int cantidadEstudiantes) {
    for (int i = 0; i < cantidadEstudiantes - 1; i++) {
        for (int j = 0; j < cantidadEstudiantes - i - 1; j++) {
            if (*(ptrCalificaciones + j) < *(ptrCalificaciones + j + 1)) {
                int tempCal = *(ptrCalificaciones + j);
                *(ptrCalificaciones + j ) = *(ptrCalificaciones + j + 1);
                *(ptrCalificaciones + j + 1) = tempCal;

                string tempNom = *(ptrNombres + j);
                *(ptrNombres + j) = *(ptrNombres + j + 1);
                *(ptrNombres + j + 1) = tempNom;
            }
        }
    }
}