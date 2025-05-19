#include <iostream>
using namespace std;

/*

tip_returnat nume_functie (lista_parametri)
{
    ...
}

tip_returnat
-> void : functia nu returneaza/intoarce valori
-> int  : functia returneaza o valoare de tip int
-> bool : functia returneaza o valoare de tip bool
-> float : functia returneaza o valoare de tip float
-> char : functia returneaza o valoare de tip char

ex. void afisare, int suma, bool estePrim

nume_functie 
-> arata cu ce se ocupa acea functie

Reguli de numire
-> camelCase: afisareFormatata, esteImpar, verificaConditii, validareUtilizatorExtern
-> snake_case , pothole_case: ana_are_mere_dulci
-> UPPERCASE

lista_parametri
-> fara lista_parametri
-> cu lista_parametri

void afisare()
{
    cout << "*";
}

int suma (int a, int b)
{
    return a + b;
}

bool estePar (int numar)
{
    return estePar % 2 == 0 ? true : false;
}

void afisare(char s)
{
    cout << s;
}


Semnatura unei functii
-> numele functiei
-> lista parametrilor formali (si ordinea lor)

afisare(), afisare(int, int), afisare (float, int), afisare (int, float)

Ce nu include semnatura functiei
- tiput returnat
- numele parametrilor
- si altele

Obs. Orice program are cel putin o functie - functia principala - main()
Obs. Executia programului incepe din functia main()
Obs. Functia main poate avea eventual parametri

int main()
{
    ...
    return 0;
}

void main()
{
    ...
}

return X - unde X este valoarea returnata/intoarsa in urma apelului

Obs. return - "iasa" din bloc/functie
Obs. Se executa un singur return din cadrul unei functii

*/

int fact(int n)
{
    if (n == 0) return 1;
    
    int prod = 1;
    
    for (int i = 1; i <= n; i++)
        prod = prod * i;
    
    return prod;
}

int sumaCifrelor (int numar)
{
    int suma = 0;
    
    while (numar != 0)
    {
        suma = suma + numar % 10;
        numar = numar / 10;
    }
    
    return suma;
}


int main()
{
    int numar;
    cout << "Introdu un numar natural: ";
    cin >> numar;
    // cout << fact(numar);
    cout << sumaCifrelor(numar);
    return 0;
}

