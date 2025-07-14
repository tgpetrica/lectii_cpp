/*
PROGRAMAREA ORIENTATA PE OBIECTE

INCAPSULAREA
- principiu al POO
- se foloseste pentru a ascunde detaliile interne ale unui obiect
- ofera un mod controlat de a accesa aceste detalii (folosind metode)
*/

#include <iostream>
using namespace std;

class ContBancar 
{
private:
    double sold;

public:
    // Constructor implicit
    ContBancar()
    {
        this->sold = 0.0;
    }
    // Obs. Constructorul implicit nu are parametri SAU are parametri cu valori implicite

    // Constructor cu parametru
    ContBancar(double soldInitial)
    {
        this->sold = soldInitial;
    }

    // getter
    double getSold()
    {
        return sold;
    }

    // setter
    void depune (double suma)
    {
        if (suma > 0)
            this->sold += suma;
    }

    void retrage (double suma)
    {
        if (suma > 0 && suma <= sold)
            this-> sold -= suma;
    }
};

/*
Observatii:
- variabila sold este privata si nu poate fi modificata de catre utilizator
- metodele depunde() si retrage() se comporta ca un setter si ofera un mod controlat de a modifica soldul contului bancar

*/

int main()
{
    ContBancar card; // a fost apelat constructorul implicit
    cout << card.getSold() << endl;

    card.depune(50.0);
    cout << card.getSold() << endl;

    card.depune(12.0);
    cout << card.getSold() << endl;

    card.retrage(100.0);
    cout << card.getSold() << endl;

    card.retrage(59.0);
    cout << card.getSold() << endl;

    cout << endl;

    ContBancar cont(100.0); // se apeleaza constructorul cu parametru
    cout << cont.getSold() << endl;

    return 0;
}