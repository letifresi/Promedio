#include <iostream>
#include <string>
using namespace std;
#include "funcioes.h"
// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
const int CAPACIDAD_MAXIMA = 5;
    int cantidadActual = 3;

    int calificaciones[CAPACIDAD_MAXIMA] = {85,92,78};
    string nombres[CAPACIDAD_MAXIMA] = {"Ana", "Carlos", "Maria"};
    bool seguirEjecutando = true;
    int indiceMejor = encontrarMejorEstudiante(calificaciones, cantidadActual);
    int indiceMenor = encontrarMenorEstudiante(calificaciones, cantidadActual);

    while (seguirEjecutando) {
        mostrarMenu();
        int opcionSeleccionada;
        cin >> opcionSeleccionada;

        switch (opcionSeleccionada) {
            case 1:
                cout << "Promedio: " << calcularPromedio(calificaciones, cantidadActual)<<endl;
                break;
            case 2:
                cout << "Estudiante (1- " << cantidadActual << "):" << endl;
                int indiceEstudiante;
                cin >> indiceEstudiante;

                indiceEstudiante--;

                if (indiceEstudiante >= 0 && indiceEstudiante < cantidadActual) {
                    cout << "Nueva calificacion: :";
                    int valorNuevo;
                    cin >>valorNuevo;

                    modificarCalificacion(&calificaciones[indiceEstudiante], valorNuevo);
                    cout << "Actualizando..." << endl;
                }
                break;

            case 3:

                cout << "Mejor estudiante: " << nombres[indiceMejor] << "-" << calificaciones[indiceMejor];
                break;
            case 4:
                imprimirListaEstudiantes(calificaciones, nombres, cantidadActual);
                break;

            case 5:
                cout << "Estuiante con Menor promedio: "
                <<nombres[indiceMenor]<< " - " << calificaciones[indiceMenor] << endl;
                break;

            case 6:
                ordenarEstudiante(nombres, calificaciones, cantidadActual);
                cout << "\n --- Estudiantes ordenados de mayor a menor ---" << endl;
                for (int i = 0; i < cantidadActual; i++) {
                    cout << i + 1 << " . " << nombres[i] << " . " << calificaciones [i] << endl;
                }
                break;



            case 7:
                if (cantidadActual < CAPACIDAD_MAXIMA) {
                    cout << "Nombre: " << endl;
                    cin.ignore();
                    getline( cin,  nombres [cantidadActual]);


                    cout << "Calificacion:";
                    cin>> calificaciones[cantidadActual];
                    cantidadActual++;
                }
                break;
            case 0:
                seguirEjecutando = false;
                break;
            default:
                continue;


        }

    }
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}