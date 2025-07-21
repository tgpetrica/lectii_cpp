/*
ABSTRACTIZAREA
- principiu al POO
- se ascund detalii inutile si aratam doar ceea ce este esential pentru utilizarea unui obiect

exemple:
- folosirea volanului, a pedalelor (acceleratie, franare, ambreiaj), schimbatorul de viteze
- telecomanda de la televizor

Abstractizarea
- clase abstracte
- metode virtuale


*/
# include<iostream>
using namespace std;

class Forma
{
public: 
    virtual float arie() = 0;
};
// orice forma geometrica are o arie
// dar nu specificam cum se calculeaza aria formei geometrice

class Cerc : public Forma
{
private:
    float raza;
public:
    Cerc(float r) : raza(r) {}

    float arie()
    {
        return raza * raza * 3.14;
    }
};

class Dreptunghi : public Forma
{
private:
    float lungime; 
    float latime;
public:
    Dreptunghi(float lungime, float latime) : lungime(lungime), latime(latime) {}

    float arie()
    {
        return lungime * latime;
    }
};

int main()
{
    Forma* f1 = new Cerc(5);
    Forma* f2 = new Dreptunghi(2, 7);

    cout << "Aria cercului: " << f1->arie() << endl;
    cout << "Aria dreptunghiului: " << f2->arie() << endl;
    return 0;
}

/*
Diferenta fata de incapsulare:
- la incapsulare se ascund datele (folosind private)
- la abstractizare ascund modalitatea de implementare si arat doar cum functioneaza

Avantajele abstractizarii:
- codul devine mai usor de citit si de inteles
- se permite folosirea polimorfismului
*/

