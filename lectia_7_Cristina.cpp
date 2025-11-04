#include <iostream>
using namespace std;

/*
*   Structuri de control
*   - IF ELSE (de decizie)
*   - SWITCH CASE (alternativa)

    Sintaxa:
    switch (expresie) {
        case valoare1:
            //
        case valoare2:
            //
        default:
            //
    }

    expresie - parte a unei conditii din IF
    valoare1, valoare2, .. - expresia se compara cu fiecare dintre aceste valori
    cand o anumita valoare este egala cu expresia, se executa codul asociat acelei valori (acel caz)
*/

int main() { // de aici incepe executia programului
    int zi;
    cout << "Introdu un numar de la 1 la 7: ";
    cin >> zi;

    /*
    if (zi == 1) {
        cout << "Luni" << endl;
    } else if (zi == 2) {
        cout << "Marti" << endl;
    } else if (zi == 3) {
        cout << "Miercuri" << endl;
    } else if (zi == 4) {
        cout << "Joi" << endl;
    } else if (zi == 5) {
        cout << "Vineri" << endl;
    } else if (zi == 6) {
        cout << "Sambata" << endl;
    } else if (zi == 7) {
        cout << "Duminica" << endl;
    } else {
        cout << "Numar invalid.";
    }
    */

    switch (zi) {
        case 1:
            cout << "Luni" << endl;
            break;
        case 2:
            cout << "Marti" << endl;
            break;
        case 3:
            cout << "Miercuri" << endl;
            break;
        case 4:
            cout << "Joi" << endl;
            break;
        case 5:
            cout << "Vineri" << endl;
            break;
        case 6:
            cout << "Sambata" << endl;
            break;
        case 7:
            cout << "Duminica" << endl;
            break;
        case 9:
        case 10:
        case 11:
            cout << "altceva" << endl;
            break;
        default:
            cout << "numar invalid" << endl;            
    }

    // Obs. Valorile din case sunt unice (case label value has already appeared in this switch)
    // Obs. Daca dorim ca un anumit bloc de instructiuni sa se execute pentru mai multe cazuri (case), acestea
    //      se vor scrie unele sub altele
    // Obs. Structura switch case se foloseste cu instructiunea break dupa fiecare caz. Altfel, sunt executate
    //      instructiuni fie pana la intalnirea unei instructiuni break, fie pana la finalul structurii 
    //      switch case.
    // Obs. Instructiunea break intrerupe executia structurii switch case
    // Obs. Fara instructiunea break, programul continua sa executate toate cazurile, indiferent daca conditia
    //      lor este adevarata sau nu.

    return 0;
}