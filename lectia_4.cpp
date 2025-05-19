#include <iostream>
using namespace std;

int main()
{
    
    cout << "== Operatori aritmetici == \n";
    int a, b;
    a = 129; b = 9;
    
    cout << "Adunare: " << a + b << endl;
    cout << "Scadere: " << a - b << endl;
    cout << "Inmultire: " << a * b << endl;
    
    cout << "\n---- Impartirea ----\n";
    
    cout << "Catul: " << a / b << endl;
    cout << "Restul: " << a % b << endl;
    
    cout << "\n---- DIV & MOD 10 ----\n";
    
    int x = 1234567;
    cout << x << "\n" << x / 10 << endl; // DIV ~ dispare ultima cifra din x
    cout << x << "\n" << x % 10 << endl; // MOD ~ gasesc ultima cifra din x
    
    int nr = 98765432;
    cout << "nr = " << nr << endl;
    int cr = nr / 100 % 10;
    cout << "cr = " << cr << endl;
    
    cout << "\n---- Impartirea reala ----\n";
    
    int m = 12;
    double n = 5;
    
    cout << m << ":" << n << "=" << m / n << endl;
    cout << n << ":" << m << "=" << n / m << endl;
    
    cout << endl;
    
    float f = 1.3f;
    float g = 2.1f;
    
    cout << f << ":" << g << "=" << f / g << endl;
    
    cout << "\n == Operatori relationali == \n";
    
    int delta = 5, echo = 7;
    
    cout << (delta == echo) << endl;    // false    (0)
    cout << (delta != echo) << endl;    // true     (1)
    cout << (delta < echo) << endl;     // true     (1)
    cout << (delta <= echo) << endl;    // true     (1)
    cout << (delta >= echo) << endl;    // false    (0)
    cout << (delta > echo) << endl;     // false    (0)
    
    /*
    ==  egalitate
    !=  diferit egal (nu este egal)
    <   mai mic decat
    >   mai mare decat
    <=  mai mic sau egal decat
    >=  mai mare sau egal decat
    */
    
    cout << "\n\n";
    
    char litera1 = 'A'; // litera mare Majuscula
    char litera2 = 'a'; // litera mica minuscula
    char litera3 = '6'; // caracter cifra
    char litera4 = '@'; // caracter special
    
    cout << (litera1 == litera2) << endl;   // false
    cout << (litera1 > litera3) << endl;    // true
    cout << (litera2 < litera1) << endl;    // false
    
    
    
    
    return 0;
}