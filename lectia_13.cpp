#include <iostream>
using namespace std;

/*
==== Functii recursive ====

recursivitatea apare atunci cand o functie se apeleaza pe ea insasi.

Cazuri de existenta:
1. cazul de baza: conditia care incheie recursivitatea (condite de oprire)
2. cazul recursiv: logica prin care functia se autoapeleaza

Intr-o functie recursiva avem nevoie de:
1. conditia de oprire
2. apelul recursiv
3. cel putin un parametru de intrare
3* exceptie: pot exista si functii recursive fara parametru, folosind variabile globale

Sintaxa

tip_returnat nume_functie (...)
{
    if (cazul_de_baza)
        return valoare;
    else
    {
        // cazul recursiv
        return nume_functie(...);
    }
}

*/

// afisarea numerelor crescator/descrescator

// sa se afiseze crescator primele X numere intregi mai mari de 0, folosind recursivitatea

void afisareC(int x)
{
    if (x <= 0)
        return; // cazul de baza
    else
    {
        afisareC (x - 1);
        cout << x << " ";
    }
}

// sa se afiseze descrescator primele X numere intregi mai mari de 0, folosind recursivitatea

void afisareD (int x)
{
    if (x <= 0) return;
    else
    {
        cout << x << " ";
        afisareD (x - 1);
    }
}

int main()
{
    afisareD(5);
    return 0;
}
