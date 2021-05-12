
#include <iostream>

using namespace std;

int main()
{
    int dd, mm, aaaa, fecha;
    cout << "Ingrese dia: ";
    cin >> dd;
    cout << "Ingrese mes: ";
    cin >> mm;
    cout << "Ingrese año: ";
    cin >> aaaa;
    fecha = dd + mm * 100 + aaaa * 10000;
    cout << fecha << endl;
    return 0;
}
