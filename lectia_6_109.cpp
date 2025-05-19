#include <iostream>
using namespace std;

int main()
{
    int numar;
    cout << "Introdu un numar: ";
    cin >> numar;
    
    if (numar % 2 != 0)
        cout << numar << " este impar";
    else
        cout << numar << " este par";
    return 0;
}