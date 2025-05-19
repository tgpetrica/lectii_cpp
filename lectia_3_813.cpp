#include <iostream>
using namespace std;
int main()
{
	int albe;
	int rosii;
	int verzi;

	cout << "Numarul de globuri albe din brad: ";
	cin >> albe;

	rosii = 2 * albe;

	verzi = rosii - 3;

	int total = albe + rosii + verzi;

	cout << "Numarul total de globuri este: " << total;

	return 0;
}