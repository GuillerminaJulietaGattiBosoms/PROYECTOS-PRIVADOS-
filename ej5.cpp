#include <iostream>
using namespace std;

int main()
{
  int a, b;

    cout<< "Ingrese dos valores enteros distintos" <<endl;
    cout<<"Primer valor"<<endl;
    cin >> a;
    cout<<"Segundo valor"<<endl;
    cin >> b;

    if (a>b)
    cout<< "El primer valor es mas grande que el segundo"<<endl;
    else
    cout<< "El segundo valor es mas grande que el primero"<<endl;

    return 0;
}
