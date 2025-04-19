#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int A[n];

    cout << "Ingresar numeros:\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1;
        cin >> A[i];
    }

    cout << "Arreglo original: ";
    for (int i = 0; i < n; i++) {
        cout << A[i];
    }

    int ult = A[n - 1]; 
    for (int i = n - 1; i > 0; i--) {
        A[i] = A[i - 1];
    }
    A[0] = ult; 

    cout << "Arreglo despues:\n";
    for (int i = 0; i < n; i++) {
        cout << A[i];
    }
 
    return 0;
}