//lista enlazada
#include <iostream>
struct Nodo {
int valor;
Nodo* siguiente;
};
void agregarNodo(Nodo*& cabeza, int valor) {
Nodo* nuevoNodo = new Nodo();
nuevoNodo->valor = valor;
nuevoNodo->siguiente = nullptr;
if (cabeza == nullptr) {
cabeza = nuevoNodo;
} else {
Nodo* temp = cabeza;
while (temp->siguiente != nullptr) {
temp = temp->siguiente;
}
temp->siguiente = nuevoNodo;
}
}
void imprimirLista(Nodo* cabeza) {
    Nodo* temp = cabeza;
    while (temp != nullptr) {
    std::cout << temp->valor << " -> ";
    temp = temp->siguiente;
    }
    std::cout << "nullptr" << std::endl;
    }
    void eliminarLista(Nodo*& cabeza) {
    Nodo* temp;
    while (cabeza != nullptr) {
    temp = cabeza;
    cabeza = cabeza->siguiente;
    delete temp;
    }
    }