#include <iostream>
using namespace std;
int main() {
   int nota;
   cout<<"ingrese la nota: ";
   cin>>nota;
   cout<< "Estado: ";
   if (nota>=11) {
       cout<<"aprobado";
   }
   else {
       cout<<"desaprobado";
   }
    return 0;
}