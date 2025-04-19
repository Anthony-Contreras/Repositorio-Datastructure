#include <iostream>
using namespace std;
int main() {
    int n = 30;
    int calif[n];
    int suma = 0, promedio;
    int cont = 0;
    cout << "notas" << n << endl;
    
    for (int i = 0; i < n; i++) {
        cout << (i + 1);
        cin >> calif[i];
        suma += calif[i];
    }
    promedio = suma / n;
    
    for (int i = 0; i < n; i++) {
        if (calif[i] > promedio) {
            cont++;
        }
    }
    cout << "Promedio : " << promedio << endl;
    cout << "Numero de estudiantes por encima del promedio: "<<cont<< endl;

    return 0;
}