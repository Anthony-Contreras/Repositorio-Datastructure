//codigo de estrucutas de 8 objetos
#include <iostream>
#include <string>
using namespace std;

struct Estudiante {
    string nombre;
    char codigo;
    string carrera;
};

struct Mochila {
    string tamaño;
    string material;
    string color;
};

struct CableUTP {
    string velocidad;
    float longitud;
    string categoria;
};

struct Laptop {
    string procesador;
    int memoriaRAM;
    string marca;
};

struct Servidor {
    string procesadorS;
    int almacenamiento;
    string sistemaOperativo;
};

struct IDE {
    string nombre;
    string lenguaje;
    string depuracion;
};

struct Monitor {
    string tamañoM;
    string resolucion;
    string conectividad;
};

struct Lenguaje {
    string tipado;
    string paradigma;
    string nombreL;
};

int main() {
    const int n = 3;

    Estudiante estudiantes[n];
    Mochila mochilas[n];
    CableUTP cables[n];
    Laptop laptops[n];
    Servidor servidores[n];
    IDE ides[n];
    Monitor monitores[n];
    Lenguaje lenguajes[n];

    for (int i = 0; i < n; i++) {
        cout << "Ingrese datos del estudiante " << i + 1 << ":" << endl;
        cout << "Nombre: ";
        cin >> estudiantes[i].nombre;
        cout << "Codigo: ";
        cin >> estudiantes[i].codigo;
        cout << "Carrera: ";
        cin >> estudiantes[i].carrera;
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        cout << "Ingrese datos de la mochila " << i + 1 << ":" << endl;
        cout << "Tamaño: ";
        cin >> mochilas[i].tamaño;
        cout << "Material: ";
        cin >> mochilas[i].material;
        cout << "Color: ";
        cin >> mochilas[i].color;
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        cout << "Ingrese datos del cable UTP " << i + 1 << ":" << endl;
        cout << "Velocidad: ";
        cin >> cables[i].velocidad;
        cout << "Longitud: ";
        cin >> cables[i].longitud;
        cout << "Categoria: ";
        cin >> cables[i].categoria;
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        cout << "Ingrese datos de la laptop " << i + 1 << ":" << endl;
        cout << "Procesador: ";
        cin >> laptops[i].procesador;
        cout << "Memoria RAM: ";
        cin >> laptops[i].memoriaRAM;
        cout << "Marca: ";
        cin >> laptops[i].marca;
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        cout << "Ingrese datos del servidor " << i + 1 << ":" << endl;
        cout << "Procesador: ";
        cin >> servidores[i].procesadorS;
        cout << "Almacenamiento: ";
        cin >> servidores[i].almacenamiento;
        cout << "Sistema Operativo: ";
        cin >> servidores[i].sistemaOperativo;
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        cout << "Ingrese datos del IDE " << i + 1 << ":" << endl;
        cout << "Nombre: ";
        cin >> ides[i].nombre;
        cout << "Lenguaje: ";
        cin >> ides[i].lenguaje;
        cout << "Depuracion: ";
        cin >> ides[i].depuracion;
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        cout << "Ingrese datos del monitor " << i + 1 << ":" << endl;
        cout << "Tamaño: ";
        cin >> monitores[i].tamañoM;
        cout << "Resolucion: ";
        cin >> monitores[i].resolucion;
        cout << "Conectividad: ";
        cin >> monitores[i].conectividad;
        cout << endl;
    }

    for (int i = 0; i < n; i++) {
        cout << "Ingrese datos del lenguaje " << i + 1 << ":" << endl;
        cout << "Tipado: ";
        cin >> lenguajes[i].tipado;
        cout << "Paradigma: ";
        cin >> lenguajes[i].paradigma;
        cout << "Nombre: ";
        cin >> lenguajes[i].nombreL;
        cout << endl;
    }

    return 0;
}