#include <iostream>
using namespace std;

int main()
{
    int a, A, B, C;

    cout << "Ingrese un valor: " << endl;
    cin >> a;

    A = a / 5 ;
    B = a%5 ;
    C = ((a/5)/7) ;

    cout <<"1ro= "<<A<<endl;
    cout <<"2do= "<<B<<endl;
    cout <<"3ro= "<<C<<endl;

    return 0;
}
