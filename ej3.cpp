#include <iostream>

using namespace std;

int main()
{
    int dd, mm, aaaa, fecha;
    cout << "Ingrese una fecha: " << endl;
    cin >> fecha;
    aaaa = fecha / 10000;
    mm = (fecha % 10000) / 100;
    dd = fecha % 100;
    cout << "La fecha por separado sería: " << dd << "/" << mm << "/" << aaaa << endl;

    return 0;
}
