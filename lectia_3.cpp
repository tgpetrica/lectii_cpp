#include <iostream>
using namespace std;

int main()
{
    int numar = 10;
    cout << numar << endl;
    numar++;
    cout << numar << endl;
    
    numar = 123;
    cout << numar << endl;
    
    // declarare
    int var;
    
    // initializare
    var = 1;
    
    // atribuire sau reinitializare
    var = 2;
    
    //          --- Constante
    
    /*
    *   Exemple de constante din viata reala:
    *   - acceleratia gravitationala 
    *   - numarul de secunde dintr-un minut/ora/zi/...
    *   - data la care s-a intamplat un anumit eveniment (de exemplu: data la care a inceput Primul Razboi Mondial)
    *   - temperatura de fierbere a apei : 100 C == 212 F
    *   - numarul PI ~= 3.14149...
    */
    
    
    const double PI = 3.14159265359;
    double raza = 9.0;
    double circumferinta = 2 * PI * raza;
    cout << "circumferinta unui cerc de raza " << raza << " este " << circumferinta << endl;
    
    //          --- Citirea de la tastatura
    
    //  se realizeaza cu OPERATORUL DE EXTRAGERE    >> 
    //  cin - console in
    //  citeste date din fluxul de intrare
    
    int an;
    cout << "Introdu anul curent: ";
    cin >> an;
    cout << "\nValoarea introdusa: " << an;
    
    return 0;
}