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

    int minim = 1000;
    int maxim = -1000;
    int imin = -1;
    int imax = -1;

    for (int i = 0 ; i < n; i++)
    {
        if (v[i] < minim)
        {
            minim = v[i];
            imin = i;
        }
    }

    for (int i = 0 ; i < n; i++)
    {
        if (v[i] > maxim)
        {
            maxim = v[i];
            imax = i;
        }
    }

    cout << "minim: " << minim << " la " << imin << endl;
    cout << "maxim: " << maxim << " la " << imax;

    return 0;
}