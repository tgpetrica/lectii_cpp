#include <iostream>
using namespace std;

double  suma( double a, double b);
bool    estePar(int numar);
int     produs(int a, int b);
double  medie (int a, int b, int c);
int     factorial(int n);
int     sumaCifrelor(int numar);
int     minimX(int a, int b);
int     maximX(int a, int b);

int main()
{
    cout << minimX (55,55);
    return 0;
}

double suma(double a, double b)
{
    return a + b;
}

// functiile care NU sunt de tip void au instructiune de iesire return;

bool estePar (int numar)
{
    if (numar % 2 == 0) return true; 
    return false;
    
}

// in cadrul functiilor non-void se poate returna O SINGURA valoare

int produs (int a, int b)
{
    return a * b;
}

double medie (int a, int b, int c)
{
    double rezultat = a + b + c;
    rezultat /= 3;
    return rezultat;
}

int sumaCifrelor (int numar)
{
    int suma = 0;
    while (numar > 0) 
    {
        suma += numar % 10;
        numar /= 10;
    }
    return suma;
}

int minimX (int a, int b)
{
    if (a - b < 0) return a;
    return b;
}

int minimY (int a, int b)
{
    if (a < b) return a;
    return b;
}
