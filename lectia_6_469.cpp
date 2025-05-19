#include <iostream>
using namespace std;

int main()
{
    int a, b, x;
    cout << "Introdu numerele a b x separate printr-un spatiu si la final ENTER.\n";
    cin >> a >> b >> x;
    
    if (x >= a && x <= b)
        cout << "DA";
    else
        cout << "NU";
        
    return 0;
}