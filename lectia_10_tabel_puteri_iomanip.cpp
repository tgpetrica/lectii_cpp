#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // tabel de puteri intre start si end
    
    int start, end;
    
    do {
        cout << "Introdu valoarea de start (pozitiva): ";
        cin >> start;
        cout << "Introdu valoarea de end (mai mare decat start): ";
        cin >> end;
    } while (start <= 0 || end <= start);
    
    cout << "\nTabelul numerelor si patratelor lor:\n";
    cout << left << setw(10) << "Numar" << "Patrat" << endl;
    
    for (int i = start; i <= end; i++)
    {
        cout << left << setw(10) << i << i * i << endl;
    }
    
    return 0;
}