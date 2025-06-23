// Se citește un vector cu n elemente, numere naturale. 
// Să se afișeze elementele din vector care sunt multipli ai ultimului element.

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

    for (int i = 0 ; i < n; i++)
    {
        if (v[i] % v[n - 1] == 0) // v[i] este multiplu al lui v[n - 1]
        {
            cout << v[i] << " ";
        }
    }

    return 0;

}