#include <iostream>
using namespace std;

bool estePrim (int nr)
{
    if (nr < 2) return false;
    if (nr > 2 && nr % 2 == 0) return false;
    for (int i = 2; i * i <= nr ; i++)
        if (nr % i == 0)
            return false;
    return true;
}

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
        if (estePrim(v[i])) // if (estePrim(v[i]) == true)
        {
            v[i] = 0; // atribui valoarea 0 la pozitia i din vectorul v
        }
    }

    for (int i = 0 ; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;

}
