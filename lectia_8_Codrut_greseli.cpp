#include <iostream>
using namespace std;

int main() {
    // for (;;) { 
    //     cout << ". ";
    // }

    /*
    * - nu exista initializare
    * - nu exista conditie de oprire
    * - nu exista pasul de actualizare
    * => bucla nu se opreste niciodata => BUCLA este INFINITA
    */

    // for (int i = 0; i < 10; i--) {
    //     cout << i << " ";
    // }

    // Obs. Conditia este formulata gresit. Bucla devine INFINITA

    for (int i = 0; i < 10; ) {
        cout << i << " ";
    }

    // Obs. Lipsa actualizarii variabilei de control duce la bucla INFINITA

    return 0;
}