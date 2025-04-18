#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int n = 100;
    int A[n];
    int Primos = 0;

    srand(time(0)); 

    for (int i = 0; i < n; i++) {
        A[i] = rand() % 500 + 1;
    }

    cout << "Numeros arreglo:\n";
    for (int i = 0; i < n; i++) {
        cout << A[i] << ;
    }

    for (int i = 0; i < n; i++) {
        int num = A[i];
        int cont = 0;

        for (int j = 1; j <= num; j++) {
            if (num % j == 0) {
                cont = cont + 1;
            }
        }
        
        if (cont == 2) {
            Primos = Primos + 1;
        }
    }
    
    cout << "Cantidad de numeros primos: " << Primos << endl;

    return 0;
}