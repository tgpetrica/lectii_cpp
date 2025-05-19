#include <iostream>
using namespace std;

int main()
{
    /*
    Structura repetitiva do-while
    
    do {
        ...
    } while (conditie);
    
    Observatie: Blocul de instructiuni se executa cel putin o data, chiar daca conditia este falsa.
    Observatie: Conditia este evaluata la final
    */
    
    int numar;
    
    //do {
    //    cout << "Introdu un numar pozitiv: ";
    //    cin >> numar;
    //} while (numar < 0);
    
    do {
        cout << "Introdu un numar pozitiv: ";
        cin >> numar;
        
        
    } while (numar < 0);
    
    cout << numar * (numar + 1) / 2;
    return 0;
}