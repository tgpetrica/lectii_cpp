#include <iostream>
using namespace std;

/*
* Vom citi o litera reprezentand note din sistemul american si vom afisa un mesaj.
*/

int main() {
    char nota;
    cout << "Introdu o nota (A, B, C, D, F): ";
    cin >> nota;

    // Verificam daca nota este caracter litera mica (minuscula) => o transformam in litera mare (majuscula)

    if (nota >= 'a' && nota <= 'z') {
        nota = nota - 32;
    }

    // Tabela codului ASCII: https://www.ascii-code.com/
    
    switch (nota) {
        case 'A': 
        case 'a':
            cout << "Excelent";
            break;
        case 'B': 
            cout << "Foarte bine";
            break;
        case 'C': 
            cout << "Bine";
            break;
        case 'D': 
            cout << "Suficient";
            break;
        case 'F': 
            cout << "Respins";
            break;
        default:
            if (nota >= '0' && nota <= '9') { // verifica daca nota este caracter cifra
                cout << "Ai introdus o cifra, nu o litera!";
            } else {
                cout << "Nota invalida";
            }
    }


    return 0;
}


