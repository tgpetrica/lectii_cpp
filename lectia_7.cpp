#include <iostream>
using namespace std;

int main()
{
    /*  Structura switch-case
    
    switch(expresie)
    {
        case 1: ...
        case 2: ...
        case 3: ...
        ...
        default: ...
    }
    
    */
    
    int zi;
    cout << "Introdu un numar de la 1 la 7: ";
    cin >> zi;
    
    switch(zi)
    {
        case 1:
            cout << "luni";
            break;
        case 2:
            cout << "marti";
            break;
        case 3:
            cout << "miercuri";
            break;
        case 4:
            cout << "joi";
            break;
        case 5:
            cout << "vineri";
            break;
        case 6:
            cout << "sambata";
            break;
        case 7:
            cout << "duminica";
            break;
        default:
            cout << "numar invalid";
    }
    
    /*
    *   Atunci cand se lucreaza cu switch-case este import sa folosim break
    *   break   -   instructiune care salta cursorul executiei la finalul strucuturii switch-case
    *   cazul default - arata ce se intampla in cazul in care expresia din switch nu apare in vreun case
    */
    
    // 3063, 2616, 447, 454, 1309
    return 0;
}