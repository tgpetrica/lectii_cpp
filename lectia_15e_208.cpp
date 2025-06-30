#include <iostream>
using namespace std;

int main()
{
    int L, C;

    cout << "Introdu numarul de linii: ";
    cin >> L;
    cout << "Introdu numarul de coloane: ";
    cin >> C;

    int matrice[20][20];

    int elemente = L * C;

    int cate = 0;

    int nr = 1;

    while (cate < elemente)
    {
        int patrat = nr * nr;
        int i = cate / C;
        int j = cate % C;
        matrice[i][j] = patrat;
        cate++;
        nr += 2;
    }

    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cout << matrice[i][j] << " ";
        }
        cout << endl;
    }

    return 0;

}
// 313, 4695, 780, 786, 210, 1451, 1487, 1894
