#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Citeste cele doua numere: ";
    cin >> a >> b;
    
    while (b != 0)
    {
        int rest = a % b;
        a = b;
        b = rest;
    }
    
    cout << "CMMDC: " << a;
    return 0;
}