#include <iostream>
using namespace std;

// o variabila globala poate fi accesata din orice functie din acest fisier
const int MAX = 100;
// const = variabila devine constanta; valoarea variabilei NU se poate modifica pe parcursul executiei

void citire (int matrice[MAX][MAX], int L, int C);

void afisare (int matrice[MAX][MAX], int L, int C);

void transpunere (int matrice[MAX][MAX], int transpusa[MAX][MAX], int L, int C);

int main()
{
    int L, C;

    cout << "Introdu numarul de linii: ";
    cin >> L;
    cout << "Introdu numarul de coloane: ";
    cin >> C;

    int matrice[MAX][MAX], transpusa[MAX][MAX];

    citire(matrice, L, C);

    transpunere(matrice, transpusa, L, C);

    cout << "\nMatricea initiala:\n";
    afisare (matrice, L, C);

    cout << "\nMatricea transpusa:\n";
    afisare (transpusa, C, L);

    return 0;
}

void citire (int matrice[MAX][MAX], int L, int C)
{
    cout << "Introdu elementele matricii:\n";
    for (int i = 0; i < L; i++)
        for (int j = 0; j < C; j++)
            cin >> matrice[i][j];
}

void afisare (int matrice[MAX][MAX], int L, int C)
{
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }
}

void transpunere (int matrice[MAX][MAX], int transpusa[MAX][MAX], int L, int C)
{
    for (int i = 0 ; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            transpusa[j][i] = matrice[i][j];
        }
    }
}



