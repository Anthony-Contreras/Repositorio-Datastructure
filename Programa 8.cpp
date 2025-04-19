#include <iostream>
using namespace std;

int main() {
    int n = 20;
    int A[n];
    int B[n]; 

    cout << "Ingresar numeros:\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1;
        cin >> A[i];
        B[i] = false; 
    }

    cout << "Frecuencia:\n";
    for (int i = 0; i < n; i++) {
        if (!B[i]) {
        int cont = 1;
        for (int j = i + 1; j < n; j++) {
        if (A[i] == A[j]) {
        cont++;
        B[j] = true; 
        }
        }
         cout << "El numero " << A[i] << " aparece " << cont << " veces.";
        }
    }

    return 0;
}
