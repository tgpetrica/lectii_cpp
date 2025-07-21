/*
Sa se scrie un program care sa modeleze un carnet de note. Notele sunt ascunse, 
iar accesul catre acestea se va face prin intermediul getterilor.
In carnet se pot inscrie note de la 1 la 10 (se cere validarea adaugarii unei noi note).
Clasa va contine si metode pentru afisarea tuturor notelor introduse (valide) si 
o metoda pentru a calcula media aritmetica a notelor. (Suma notelor impartite la numarul lor).

Hint:
- notele se stocheaza intr-un vector.
*/

#include <iostream>
using namespace std;

class CarnetNote
{
private:
    int note[50];
    int numar;

public:
    // constructorul nu are tip returnat
    // numele constructorului este dat de numele clasei
    // constructor implicit
    CarnetNote() // initializam membrii privati ai clasei
    {
        numar = 0;
        for (int i = 0; i < 50; i++)
        {
            note[i] = 0;
        }
    }

    void adaugaNota (int nota)
    {
        if (nota >= 1 && nota <= 10)
        {
            if (numar < 50)
            {
                note[numar] = nota;
                numar++;
            } 
            else 
            {
                cout << "Nu mai exista spatiu pentru adaugarea unei note.\n";
            }
        } 
        else 
        {
            cout << "Nota invalida!\n";
        }
    }

    int getNota (int i)
    {
        if (i >= 0 && i < numar)
        {
            return note[i];
        }
        else
        {
            return -1;
        }
    }

    void afiseazaNote()
    {
        if (numar == 0)
        {
            cout << "Nu exista note inregistrate.\n";
            return;
        }
        cout << "Notele introduse sunt: ";
        for (int i = 0; i < numar; i++)
        {
            cout << note[i] << " ";
        }
        cout << endl;
    }

    float calculeazaMedia()
    {
        if (numar == 0)
        {
            return 0.0f;
        }
        int suma = 0;
        for (int i = 0; i < numar; i++)
        {
            suma += note[i];
        }
        return (float) suma / numar;
    }
};

int main()
{
    CarnetNote carnet;

    carnet.adaugaNota(10);
    carnet.adaugaNota(20);
    carnet.adaugaNota(7);
    carnet.adaugaNota(5);
    carnet.adaugaNota(9);

    carnet.afiseazaNote();

    cout << "Media: " << carnet.calculeazaMedia() << endl;

    return 0;
}