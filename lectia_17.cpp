/*
PROGRAMAREA ORIENTATA PE OBIECT (POO / OOP)

- ATRIBUTE  : variabile care stocheaza informatii despre obiecte
- METODE    : functii care definesc comportamentul obiectelor

*/

#include <iostream>
#include <string>
using namespace std;

class Elev
{
private:
    string  nume;
    int     varsta;
    float   medie;

public:
    /*
    CONSTRUCTOR
    = o metoda speciala care se apeleaza automat la momentul crearii unui obiect.
    - are acelasi nume cu numele clasei
    - nu are tip returnat (nu exista instructiunea return)
    - pot exista mai multi constructori (diferentierea se face dupa numarul si tipul de date ale parametrilor)

    */

    Elev(string nume, int varsta, float medie)
    {
        this->nume      = nume;
        this->varsta    = varsta;
        this->medie     = medie;
    }

    /*
    METODE
    - metode care dau acces atributelor (getteri)
    - metode care seteaza noi valori pentru atribute (setteri)
    - alte metode (comportamentele obiectului)
    */

    // GETTERI
    string getNume()
    {
        return nume;
    }

    int getVarsta()
    {
        return varsta;
    }

    float getMedie()
    {
        return medie;
    }

    // SETTERI
    void setNume (string numeNou)
    {
        this->nume = numeNou;
    }

    void setVarsta (int varstaNoua)
    {
        this->varsta = varstaNoua;
    }

    void setMedie (float medieNoua)
    {
        this->medie = medieNoua;
    }

    // Obs. this = pointer intern al obiectului curent (aici, Elev)
    // Obs. this->nume = atributul nume al obiectului curent

    // alte metode
    bool estePromovat()
    {
        return medie >= 5.0;
    }

    /*
    DESTRUCTOR
    - o metoda speciala
    - are acelasi nume ca si clasa, dar incepe cu ~
    - nu are parametri
    - nu are tip returnat
    - se apeleaza automat
    */

    ~Elev()
    {
        cout << "Desctructorul a fost apelat pentru " << this->nume << endl;
    }
};

int main()
{
    // Instantiem (cream) un obiect Elev
    Elev elev1 ("Maria Popescu", 15, 9.06); // se apeleaza constructorul

    cout << "Elevul: " << elev1.getNume() << endl;
    cout << "Varsta: " << elev1.getVarsta() << " ani" << endl;
    cout << "Media: " << elev1.getMedie() << endl;

    if (elev1.estePromovat())
        cout << "Status: Promovat\n";
    else
        cout << "Status: Nepromovat\n";

    elev1.setNume("Andrei Ionescu");
    elev1.setMedie(4.97);
    elev1.setVarsta(16);

    cout << "\nElevul: " << elev1.getNume() << endl;
    cout << "Varsta: " << elev1.getVarsta() << " ani" << endl;
    cout << "Media: " << elev1.getMedie() << endl;
    
    if (elev1.estePromovat())
        cout << "Status: Promovat\n";
    else
        cout << "Status: Nepromovat\n";
    
    return 0;
}