#include <iostream>
using namespace std;
int main()
{
    /*
    Sintaxa generala while()
    
    while (conditie)
    {
        ...
    }
    
    while (conditie)
        ... // valid pentru o singura instructiune
    */
    
    //while (true)
    //{
    //    cout << "\n";
    //    cout << ".\n";
    //    cout << "..\n";
    //    cout << "...\n";
    //    cout << "....\n";
    //}
    
    int numar;
    cout << "Introdu un numar pozitiv: ";
    cin >> numar;
    
    while (numar <= 0) // while (numar < 0 || numar == 0)
    {
        cout << "Hei! Numarul nu este pozitiv. Incearca din nou: ";
        cin >> numar;
    }
    
    cout << "A fost introdusa valoarea: " << numar;
    
    

    return 0;
}