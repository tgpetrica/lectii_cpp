#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Introdu cate elemente va avea vectorul: ";
    cin >> n;

    int v[100];

    for (int i = 0 ; i < n; i++)
    {
        cin >> v[i];
    }

    int suma = 0;

    for (int i = 0 ; i < n; i++)
    {
        suma += v[i]; // suma  = suma + v[i];
    }

    cout << "Suma: " << suma;

    return 0;
}

// Obs. se poate scrie suma += v[i]; imediat dupa citire (in acelasi for cu citirea)