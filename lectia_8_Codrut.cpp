/*
* STRUCTURI REPETITIVE
*   - while -> cu numar necunoscut de pasi
*   - for   -> cu numar cunoscut de pasi

* SINTAXA

    for (initializare; conditie; actualizare) {
        // blocul de instructiuni
    }

    1. initializare: se executa o singura data
    2. conditia: este evaluata inainte de fiecare iteratie
    3. actualizare: se executa la sfarsitul fiecarei iteratii

    Ordinea pasilor in bucla for:
    1. initializarea
    2. evaluarea conditiei
    3. daca conditia este adevarata => se executa codul
    4. actualizare
    5. se revine la pasul 2.
*/

#include <iostream>
using namespace std; // std::cout

int main() {
    for (int cifra = 0; cifra <= 9; cifra++) {
        cout << cifra << " ";
        cout << " -- ";
    }

    // Obs. Acoladele nu sunt obligatorii daca avem O SINGURA instructiune in for

    cout << endl << " ========== " << endl;

    int produs = 1;
    int x;

    cout << "Introdu un numar: ";
    cin >> x;

    for (int nr = 1; nr <= x; nr++) {
        produs *= nr; // produs = produs * nr;
    }

    cout << "Produsul numerelor de la 1 la " << x << " este " << produs << endl;

    // Obs. Algoritmul anterior calculeaza factorialul unui numar dat.
    // 5! = 5 * (5-1) * (5-2) * ... * 1
    // 5! = 5 * 4 * 3 * 2 * 1

    return 0;
}