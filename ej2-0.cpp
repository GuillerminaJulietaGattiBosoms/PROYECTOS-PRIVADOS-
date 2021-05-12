#include <iostream>

using namespace std;

int main()
{
    string dd, mm, aaaa, fecha;
    cout << "Ingrese dia: ";
    cin >> dd;
    cout << "Ingrese mes: ";
    cin >> mm;
    cout << "Ingrese año: ";
    cin >> aaaa;
    fecha = aaaa + mm + dd;
    cout << fecha << endl;
    return 0;
}
//en este ejercicio usamos STRING. ver como funciona!!
/* ESTE PROGRAMA NO FUNCIONA BIEN CON NUMEROS A LOS 
QUE NO SE LES PONE CEROSSS */