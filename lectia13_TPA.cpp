// TPA:
// 1. Folosind recursivitatea, scrieți o funcție care calculează suma primelor n numere naturale.
// 2. Folosind recursivitatea, scrieți o funcție care calculează produsul primelor n numere naturale.

// Se poate pleaca de la ideea ca Suma(0) = 0, Suma(n) = n + Suma(n-1)
// idem la produs: Produs(0) = 1, Produs(n) = n * Produs(n-1)

// 3. Folosind recursivitatea, scrieți o funcție care afișează factorialul unui număr n.
// Factorialul se calculeaza ca n! = n * (n-1)! si 0! = 1

// cazul de baza este factorial(0) = 1, iar cazul recursiv este n * factorial(n-1)

// 4. Folosind recursivitatea, scrieți o funcție care afișează numerele Fibonacci până la n.
// Secvența Fibonacci este definită astfel: 
// F(0) = 0, F(1) = 1, 
// F(n) = F(n-1) + F(n-2) pentru n >= 2

// 5. Folosind iterativitatea, scrieți o funcție care afișează numerele prime mai mici decât n.
// Un numar este prim daca este mai mare decat 1 si nu are alti divizori in afara de 1 si el insusi.

// 6. Folosind iterativitatea, scrieți o funcție care verifică dacă un număr este palindrom.
// Un numar este palindrom daca citit de la stanga la dreapta este acelasi cu citit de la dreapta la stanga.

#include<iostream>
using namespace std;

int suma (int n);
int factorial (int n);

int fibonacci (int n);
void afisareFibo (int n);

bool estePrim (int nr);
void afisarePrim (int nr);

bool estePalindrom (int n);

int main()
{
    //cout << suma (5);
    //afisareFibo (22);
    //afisarePrim(20);

    cout << estePalindrom (12321) << endl;
    cout << estePalindrom (12) << endl;
    cout << estePalindrom (9999) << endl;
    cout << estePalindrom (0) << endl;
    return 0;
}

int suma(int n)
{
    if (n == 0)
        return 0;
    return n + suma (n - 1);
}

int factorial (int n)
{
    if (n == 0)
        return 1;
    return n * factorial (n - 1);
}

int fibonacci (int n)
{
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci (n - 2);
}

void afisareFibo (int n)
{
    for (int i = 0; i <= n; i++)
    {
        cout << fibonacci (i) << " ";
    }
}

bool estePrim (int nr)
{
    if (nr < 2) return false;
    if (nr > 2 && nr % 2 == 0) return false;
    for (int i = 2; i * i <= nr ; i++)
        if (nr % i == 0)
            return false;
    return true;
}

void afisarePrim(int nr)
{
    for (int i = 2; i < nr; i++)
        if (estePrim(i))
            cout << i << " ";
}

bool estePalindrom (int n)
{
    if (n >= 0 && n <= 9) return true;

    int copie = n;
    int invers = 0;

    while (n)
    {
        invers = invers * 10 + n % 10;
        n /= 10;
    }

    return copie == invers;
}