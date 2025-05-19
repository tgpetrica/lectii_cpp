#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main()
{
    string nume1 = "Andreea";
    string nume2 = "Anastasia";
    
    cout << (nume1 < nume2) << endl;
    
    cout << "\n\n ==== \n\n";
    
    char oras1[] = "Adjun";
    char oras2[] = "Aiud";
    
    cout << (oras1 == oras2) << endl; // nu verifica valoarea, ci adresa din memorie
    
    cout << strcmp(oras1, oras2) << endl; // string compare
    
    /* strcmp din <cstring>
    returneaza  0   siruri egale
                <0  primul sir mai mic decat al doilea
                >0  al doilea sir mai mare decat primul
    Valoarea returnata (afisata pe ecran) este 
        diferenta dintre codurile ASCII pentru primul caracter diferit
    */
    
    cout << "\n\n ==== \n\n";
    
    string parola1 = "abc123";
    string parola2;
    
    cout << "Introdu parola: ";
    //cin >> parola2;
    
    cout << (parola1 == parola2) << endl;
    
    // if (parola1 == parola2) {// daca e adevarat} else {// daca e fals}
    
    cout << "\n\n == Operatori logici == \n\n";
    
    /*
    AND     &&      SI logic
    OR      ||      SAU logic
    NOT     !       negare logica / NU
    */ 
    
    int x = 5;
    cout << (x > 0 && x < -10) << endl; // toate adevarate
    cout << (x > 0 || x < -10) << endl; // cel putin una adevarata
    
    // 8, 9, 11, 13, 15, 16, 17, 18

    return 0;
}