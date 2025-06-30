#include <iostream>
using namespace std;

int main()
{
    int L, C;
    int matrice[20][20];

    cout << "Introdu numarul de linii: ";
    cin >> L;
    cout << "Introdu numarul de coloane: ";
    cin >> C;

    // citire
    for (int i = 0; i < L; i++)
        for (int j = 0; j < C; j++)
            cin >> matrice[i][j];
    
    int suma = 0;

    // parcurgere
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            suma += matrice[i][j];
        }
        cout << suma << " ";
        suma = 0;
    }

    return 0;
}