//
// Created by User on 31/1/2026.
//

#ifndef EJERCICIOCLASE_FUNCIOES_H
#define EJERCICIOCLASE_FUNCIOES_H

#include <string>
using namespace std;


void mostrarMenu();

double calcularPromedio(const int* ptrCalificaciones, int cantidadEstudiantes);

void modificarCalificacion(int*ptrCaificaciones, int nuevoValor);

//retorna el indice (posicion) del estudiante con mayor calificacion
int encontrarMejorEstudiante(const int* ptrCalificaciones, int cantidadEstudiantes);

void imprimirListaEstudiantes(const int* ptrCalificaciones, const string* ptrNombre, int cantidadEstudiantes);

int encontrarMenorEstudiante(const int* ptrCalificaciones, int cantidadEstudiantes);

void ordenarEstudiante(string* ptrNombres, int* ptrCalificaciones, int cantidadEstudiantes);


#endif //EJERCICIOCLASE_FUNCIOES_H