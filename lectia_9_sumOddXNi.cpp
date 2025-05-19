#include <iostream>
using namespace std;

int main()
{
    // suma primelor X numere impare
    
    int x; 
    cout << "Introdu un numar: ";
    cin >> x;
    
    if (x < 1) return -1;
    
    int suma = 0;
    
    for (int pas = 0; pas < x; pas = pas + 1)
    {
        suma = suma + 2 * pas + 1;
    }
    
    cout << "Suma primelor " << x << " numere impare este " << suma;
    return 0;
}