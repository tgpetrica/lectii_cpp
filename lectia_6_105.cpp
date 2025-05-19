#include <iostream>
using namespace std;

int main()
{
    int nr1, nr2;
    cout << "Introdu valoarea primului numar: ";
    cin >> nr1;
    cout << "Introdu valoarea celui de-al doilea numar: ";
    cin >> nr2;
    
    if (nr1 > nr2)
        cout << nr1;
    else 
        cout << nr2;
    
    
    return 0;
}