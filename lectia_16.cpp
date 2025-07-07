/*
PROGRAMARE ORIENTATA PE OBIECT (POO / OOP)
C++, Java, Python

- codul este organizat in CLASE si OBIECTE
- datele si comportamentele obiectelor fac parte din aceeasi entitate, numita CLASA
- se pot instantia mai multe obiecte din aceeasi clasa
- punem accentul pe CINE face actiunea, nu doar pe ce face programul.

Obiecte din viata reala: pahar, penar, telefon, laptop, pat, ...
Pahar: 
    > atribute: 
    - materialul din care este facut paharul (plastic, hartie, sticla, metal);
    - capacitatea
    - culoare

    > comportamente:
    - se umple
    - se varsa
    
Telefon:
    > atribute:
    - nume
    - model
    - dimensiune
    - masa
    - culoare
    - sistem de operare

    > comportamente:
    - apeleaza
    - trimite_mesaje
    - face_poze
    - filmeaza
    - inregistreaza_audio

CLASA reprezinta un sablon, un tipar, "reteta unei prajituri"
OBIECTUL reprezinta un lucru concret, o instanta, "prajitura pe care o mananci"

Exemple: 
    CLASA       OBIECTUL
    masina      masina_1, masina_2, masina_vecinului


POO este un model de programare care organizeaza codul in jurul conceptelor de CLASA si OBIECT.

Fiecare OBIECT reprezinta o instanta a unei clase si combina ATRIBUTELE (date, caracteristici) cu METODELE (comportamente)

De ce POO?
- ne usureaza organizarea proiectelor mari
- permite reutilizarea codului
- ne ajuta sa intelegem in mod natural probleme din viata reala

PRINCIPII POO
0. CLASA si OBIECTUL (Structura)
1. Incapsulare (en. Encapsulation) (Protejarea datelor)
    Se ascund detaliile interne ale unui obiect, dar se pot face accesibile prin utilizarea metodelor
2. Mostenire (en. Inheritance) (Refolosirea codului)
    O clasa mosteneste caracteristicile altei clase.
3. Polimorfismul (en. Polymorphism) (Comportamente diferite, in contexte diferite)
    Descrierea unui obiect in functie de contextul in care se afla
4. Abstractizarea (en. Abstraction) (Focusarea pe ceea ce este important)
    Se ascund detaliile irelevante si arata doar aspectele importante.

Specficatori de acces
-> specifica cine are voie sa acceseze/modifice/stearga atributele si metodelele unei clase.
private     vizibile doar din interior
protected   vizibil in interiorul curente sau din clase care mostenesc clasa curenta
public      toata lumea vede pe toata lumea

Obs. private - atributele sau metodele NU pot fi accesate direct din exteriorul clasei


#include <iostream>
using namespace std;

// STRUCTURA
class NumeClasa 
{
private:
    // ATRIBUTE
    TipData atribut1;
    TipData atribut2;

public:
    // CONSTRUCTOR
    NumeClasa(TipData param1, TipData param2)
    {
        atribut1 = param1;
        atribut2 = param2;
    }
    
    // METODE (functii membre)
    void afisare()
    {
        cout << atribut1 << " " << atribut2;
    }
};

*/

#include <iostream>
#include <string>
using namespace std;

class Animal
{
    private:
        string nume;
        int varsta;
    
    public:
        // Constructorul
        Animal(string n, int v)
        {
            nume = n;
            varsta = v;
        }

        // Metoda
        void afisare()
        {
            cout << "Animal: " << nume << ", varsta: " << varsta << endl;
        }
};

class Masina
{
private:
    string marca;
    int anFabricatie;

public:
    // constructor
    Masina(string marca, int anFabricatie)
    {
        this->marca = marca;
        this->anFabricatie = anFabricatie;

        /*
        this            = pointer catre obiectul curent (pe care il creez)
        this->marca     = se refera la atributul marca al clasei Masina
        marca           = parametrul transmis in constructor (marca de dupa egal)
        */
    }

    // metode

    void porneste()
    {
        cout << "Masina " << marca << " fabrica in " << anFabricatie << " porneste." << endl;
    }

};

int main()
{
    Animal caine("Bobby", 4);
    caine.afisare();

    // Obs.     Operatorul . (punct) se numeste "member access operator"

    // Exemple si tipuri de instantieri:
    
    // Instantierea directa
    Animal soarece("Jerry", 1);
    soarece.afisare();

    // Instantierea cu ajutorul operatorulului new
    Animal* pisica = new Animal("Miti", 2);
    pisica->afisare();

    // Obs.     Operatorul * (steluta) se numeste "pointer declarator" (in acest context)
    // pisica este un pointer la un obiect de tip Animal
    // pisica pointeaza catre un obiect Animal

    // Obs.     Operatorul -> se numeste "operator sageata"

    // Instantierea prin copiere
    Animal original("Azorel", 5);
    Animal copie = original;
    copie.afisare();

    /*
    Caracteristica          Stack                   Heap
    memorie                 automata                dinamica (pe heap)
    se elibereaza           automata                manual (folosind op "delete")
    accesul                 .                       ->
    */

    cout << "\n\n\n";

    Masina m1 ("Dacia", 2016);
    Masina m2 ("Toyota", 2018);

    m1.porneste();
    m2.porneste();

    return 0;
}