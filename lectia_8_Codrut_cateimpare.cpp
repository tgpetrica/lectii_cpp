#include <iostream>
using namespace std;

int main() {
    int n;
    int numere_impare = 0;

    cin >> n;
    while (n != 0) {
        if (n % 2 == 1) {
            numere_impare++;
        }
        cin >> n;
    }

    cout << "Numarul de numere impare citite: " << numere_impare << endl;

    int x;
    int numar_pare = 0;
    for (;;) {
        cin >> x;
        if (x == 0) {
            break;
        }
        if (x % 2 == 0) {
            numar_pare++;
        }
    }

    cout << "Numarul de numere pare citite: " << numar_pare << endl;
}