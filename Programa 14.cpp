//porgrama que presenta un curso y sus cursos prerequisitos utilizando listas enlazadas
#include <iostream>
using namespace std;

struct Cursos {
    string nombre;
    Cursos* prerrequisito;
};

int main() {
    Cursos semstr1 = {"Estadistica Basica", nullptr};
    Cursos semstr2 = {"Calculo de probabilidades", &semstr1};
    Cursos semstr3 = {"Distribucion de probabilidad", &semstr2};
    Cursos semstr4 = {"Inferencia Estadistica", &semstr3};

    Cursos* curso = &semstr4;
    while (curso != nullptr) {
        cout << "Curso prerrequisito: " << curso->nombre << endl;
        curso=curso->prerrequisito;
    }
    return 0;
}