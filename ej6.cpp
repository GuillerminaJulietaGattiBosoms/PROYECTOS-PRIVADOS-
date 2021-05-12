#include <iostream>
using namespace std;

int main()
{
  int a, b;

    cout<< "Ingrese dos fechas distintas en el formato (AAAAMMDD)" <<endl;
        cout<<"Primera fecha"<<endl;
    cin >> a;
        cout<<"Segunda fecha"<<endl;
    cin >> b;

    if (a>b)
        cout<< "La primera fecha es mas reciente que la segunda"<<endl;
    else
        cout<< "La segunda fecha es mas reciente que la primera"<<endl;

    return 0;
}