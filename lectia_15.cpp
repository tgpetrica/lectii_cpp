/*
=== STRUCTURI FUNDAMENTALE:: tablouri bidimensionale // matrix // matrici ===

O matrice este un tabel de elemente aranjate pe linii si coloane.

1   2   3
4   5   6

Matrice 2x3 (2 linii si 3 coloane)
Indexarea liniilor si a coloanelor se face de la 0

DECLARAREA SI INITIALIZAREA:

int matrice[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};

ACCESAREA UNUI ELEMENT:

int valoare = matrice[1][1];

CITIREA UNEI MATRICI:
-> dupa linii (caz preferat)
int L, C;
cin >> L >> C;

for (int i = 0; i < L; i++)
{
    for (int j = 0; j< C; j++)
    {
        cin >> matrice [i][j];
    }
}

-> dupa coloane

for (int j = 0; j < C; j++)
{
    for (int i = 0; i< L; i++)
    {
        cin >> matrice [i][j];
    }
}

AFISAREA:
(in general dupa linii)

for (int i = 0; i < L; i++)
{
    for (int j = 0; j< C; j++)
    {
        cout << matrice [i][j] << " ";
    }
    cout << endl;
}

Unde le folosim?

- Harti (sisteme de coordonate: latitudine, longitudine)
- pozitia unui personaj intr-un joc (x, y in 2D)
- fotografia digitala (matrice de pixeli)
- matematica (diverse)


*/

// 767

// Se dă o matrice cu L linii şi C coloane şi elemente numere naturale. 
// Determinați suma valorilor pare din matrice.

#include <iostream>
using namespace std;

int main()
{
    int L, C;
    cout << "Introdu numarul de linii: ";
    cin >> L;

    cout << "Introdu numarul de coloane: ";
    cin >> C;

    int matrice [20][20];

    // citesc matricea
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j< C; j++)
        {
            cin >> matrice [i][j];
        }
    }

    int suma = 0;

    // parcurg matricea
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j< C; j++)
        {
            if (matrice [i][j] % 2 == 0)
                suma += matrice[i][j];
        }
        // cout << suma << " ";
        // suma = 0;
    }

    cout << "Suma elementelor pare este: " << suma;

    return 0;
}

// TPA:
// 658 (asemanator 767, insa se afiseaza suma in cadrul forului dupa i)
// 666 (se foloseste functia estePrim, liniile cu indici pari inseamna 0, 2, 4, 6, etc... parcurgearea se face cu for (int i = 0 ; i < L; i += 2))
// suma elementelor a doua matrici: c_ij = a_ij + b_ij (matricile a, b si c au acelasi numar de linii si coloane)
