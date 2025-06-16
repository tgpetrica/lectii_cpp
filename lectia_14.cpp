/*
=== Structuri de date ===

1. STRUCTURI FUNDAMENTALE
2. STRUCTURI AVANSATE
3. STRUCTURI PERSONALIZATE
4. STRUCTURI ALOCATE DINAMIC (vezi structuri avansate)

1. STRUCTURI FUNDAMENTALE
-> tipuri primare: int, char, float, double, bool
-> tablouri cu dimensiune fixa: arrays[]
-> grupare de variabile sub un singur tip: struct
-> pointer (referinta a zonei de memorie)
s.a.

2. STRUCTURI AVANSATE
ex. list, queue, set, map, stack

3. STRUCTURI PERSONALIZATE
ex. Node*

=== STRUCTURI FUNDAMENTALE:: tablouri unidimensionale // arrays // vectori ===

- este o structura de date care permite stocarea unui set de elemente de acelasi tip

Caracteristici:
- toate elementele trebuie sa aiba acelasi tip primar (int, float, double, ...)
- dimensiunea este definita in momentul initializarii (indexarii)
- fiecare element poate fi accesat printr-un index (care porneste 0)

Declarare:

tip nume[dimensiune]

ex. int note[10]; // se declara un vector de tip "int" de 10 elemente (valori int)
    char litere[6]; // vector de tip char de 6 caractere (valori char)

Initializarea:

(in doua moduri)
    i.  la momentul declararii:
        float temperaturi[5] = {32.5, 35.8, 36.0, 37.1, 38.8};
    ii. ulterior declararii:
        temperaturi [0] = 32.5;
        temperaturi [1] = 35.8;
        temperaturi [2] = 36.0;
        ...

    *   Se poate declara fara sa fie mentionata dimensiunea:
        ex. int numere[] = {10, 20, 30}; // dimensiunea devine automat 3.

    **  Se poate declara un vector cu toate valorile 0:
        ex. int x[5] = {};

Accesarea elementelor: se face cu operatorul de indexare []

ex.
int numere[4] = {10, 11, 12, 13};
int x = numere[3]; // x ia valoarea 13

Obs. Primul element are indexul 0.
Obs. Ultimul element are indexul (dimensiune - 1).

Modificarea elementelor:

ex. 
int numere[4] = {10, 11, 12, 13};
numere[2] = 120; // noul vector numere: {10, 11, 120, 13}

*/

#include <iostream>
using namespace std;

int main()
{
    //633
    int numere[1000];
    int n;
    cout << "Introdu numarul de elemente";
    cin >> n;

    int pare = 0;
    int impare = 0;

    // citire cu for

    for (int i = 0; i < n; i++)
    {
        cin >> numere[i];
    }

    // parcurgere cu for

    for (int i = 0; i < n; i++)
    {
        if (numere[i] % 2 == 0)
            pare++;
        else 
            impare++;
    }

    // afisare diferenta absoluta

    if (pare < impare)
        cout << impare - pare;
    else
        cout << pare - impare;

    return 0;
}

/*
TPA
- 546   (ultimul element are indexul n-1, unde n este numarul de elemente din vector)
- 4382  (se poate folosi functia estePrim de la TPA precedenta)
- 486   (se initializeaza un minim si un maxim, se parcurge vectorul si se actualizeaza valorile minim si maxim   ex. if (vector[i] < minim_actual) => minim_actual = vector[i] // daca se gaseste o valoare in vector mai mica decat valoarea minima actuala cunoscuta, atunci valoarea minima se actualizeaza cu acel index i din vector)
- 553   (asemenator ca mai sus, dar se cere indexul numarului)
- se citeste un vector si sa se afiseze pe ecran suma numerelor din vectorul citit (ex. vector[] = {1,2,3,4,5} => se afiseaza 15)
*/
