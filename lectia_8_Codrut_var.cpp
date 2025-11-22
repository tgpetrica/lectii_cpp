#include <iostream>
using namespace std;

int main() {
    int i = -1;
    cout << "Valorea lui i: " << i << endl;

    for (int i = 0; i < 10; i++) {
        if (i % 2 == 1) {
            cout << i << " ";
        }
    }

    // Obs. In bucla for, in partea de initializare se folosesc fie variabile deja declarate,
    //      fie variabile pe care le declar in cadrul structurii for.

    // error: 'i' was not declared in this scope
    
    cout << "Valorea lui i: " << i << endl;

    return 0;
}