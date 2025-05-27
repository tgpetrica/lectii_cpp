#include <iostream>
using namespace std;

bool esteImpar (int cifra)
{
    return cifra % 2 == 1;
}

bool areTreiImpare (int nr) 
{
    int count = 0;
    while (nr > 0)
    {
        int cifra = nr % 10;
        // daca cifra esta impara?
        // daca este impara cifra?
        
        if (esteImpar(cifra))
        {
            count++;
            if (count == 3) return true;
        } else {
            count = 0;
        }
        
        nr /= 10;
    }
    return false;
}

int main()
{
    int nr;
    cout << "Introdu numarul: ";
    cin >> nr;
    
    if (areTreiImpare(nr) == true)
        cout << "are secventa";
    else
        cout << "NU";

    return 0;
}