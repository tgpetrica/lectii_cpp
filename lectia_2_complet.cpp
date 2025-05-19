#include <iostream>
#include <limits>
using namespace std;

int main()
{
    cout << "tipul bool\n";
    bool nume_variabila;
    cout << nume_variabila;
    nume_variabila = true;
    cout << nume_variabila;

    cout << "\n\nTipul char\n";
    // char - character
    char litera = 'A';
    cout << litera;
    litera = '?';
    cout << litera;
    
    cout << "\n\nTipul short\n";
    short nume = 5454;
    cout << nume;
    
    cout << "\n\nTipul int\n";
    // int - integer
    int intreg = -1200000;
    cout << intreg;
    
    //long
    
    //long long
    
    cout << "\n\nTipul float\n";
    // float - floating point - virgula mobila
    // de citit extra : IEEE 754
    
    float real = 8.87;
    cout << real;
    
    cout << "\n\nTipul double\n";
    double val = 1.123456789;
    cout << val;
    
    cout << "\n\n\t---Overflow\n";
    unsigned int x = 4294967295;
    cout << x << endl;
    x++;
    cout << x << endl;
    x++;
    cout << x;
    
    cout << "\n\n\t---Dimensiune tipuri de date\n";
    cout << "Tip de date\tDimensiune (bytes)\n";
    cout << "bool\t\t" << sizeof(bool) << "\n";
    cout << "char\t\t" << sizeof(char) << "\n";
    cout << "short\t\t" << sizeof(short) << "\n";
    cout << "int\t\t" << sizeof(int) << "\n";
    cout << "long\t\t" << sizeof(long) << "\n";
    cout << "float\t\t" << sizeof(float) << "\n";
    cout << "double\t\t" << sizeof(double) << "\n";
    
    cout << "\n\n\t---Limite tipuri de date\n";
    cout << "int\t min\t" << numeric_limits<int>::min() << "\n";
    cout << "int\t max\t" << numeric_limits<int>::max() << "\n";
    
    cout << "float\t max\t" << numeric_limits<float>::max() << "\n";
    
}