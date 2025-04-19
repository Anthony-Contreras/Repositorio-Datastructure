#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int A[n], B[n];
    int igual = 0;

    cout << " primer arreglo:\n";
    for (int i = 0; i < n; i++) {
    
        cin >> A[i];
    }

    cout << " segundo arreglo:\n";
    for (int i = 0; i < n; i++) {
        cin >> B[i];
    }

    for (int i = 0; i < n; i++) {
        if (A[i] == B[i]) {
            igual++;
        }
    }

    cout << " elementos iguales en la misma posicion: " << igual;

    return 0;
}