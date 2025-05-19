#include <iostream>
using namespace std;

int main()
{
    int S, c, n;
    cout << "Introdu suma de bani disponibila: ";
    cin >> S;
    
    cout << "Introdu pretul unei ciocolate: ";
    cin >> c;
    
    cout << "Introdu pretul unei napolitane: ";
    cin >> n;
    
    // verificam daca S se imparte exact la pret ( c sau n )
    bool ciocolate = (S % c == 0);
    bool napolitane = (S % n == 0);
    
    if (ciocolate && napolitane)
        cout << "CN";
    else if (ciocolate)
        cout << "C";
    else if (napolitane)
        cout << "N";
    else
        cout << "nimic";
    
    return 0;
}