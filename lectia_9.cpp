#include <iostream>
using namespace std;
int main()
{
    /*
    Structura repetitiva while
    
    while (conditie)
    {
        ...
    }
    
    // Executa un set/bloc de instructiuni "cat timp" conditie este adevarata
    
    Structura repetitiva for
    
    for (lista de initializare; conditie; modificare parametri)
    {
        ...
    }
    
    // 1. Se initializeaza lista de initializare. Se verifica conditia.
    // 2. Daca conditia este adevarata, executa blocul de instructiuni.
    // 3. La final, actualizeaza parametri
    // 4. Verifica din nou conditia + se intoarce la pasul 2.

    */
    
    int i = 1;
    int n;
    cout << "Citeste n";
    cin >> n;
    
    while (i <= n)
    {
        cout << i << " ";
        i++; // i = i + 1   sau     i += 1
    }
    
    for (i = 1; i <=n; i++)
    {
        cout << i << " ";
        
    }
    
    
    int n;
    cout << "Introdu numarul: ";
    cin >> n;
    
    for (int i = 0; i <= n; i = i + 2)
    {
        cout << i << " ";
    }
    
    return 0;
}