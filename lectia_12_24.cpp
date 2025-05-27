#include <iostream>
using namespace std;

int oglindit (int numar)
{
    int oglindit = 0;
    
    while (numar > 0)
    {
        oglindit = oglindit * 10 + numar % 10;
        numar /= 10;
    }
    
    return oglindit;
}

int main()
{
    int nr;
    cout << "Introdu numar: ";
    cin >> nr;
    
    cout << nr << "||" << oglindit(nr);
    
    return 0;
}

// TPA:

double suma( double a, double b);

bool estePar(int numar);

int produs(int a, int b);

double medie (int a, int b, int c);

int factorial(int n);

int sumaCifrelor(int numar);

int minimX(int a, int b);
int maximX(int a, int b);

