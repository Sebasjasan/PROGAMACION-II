#include <iostream>
using namespace std;

int main(){
    int total, nroAdd;
    do
    {
        cout << "TOTAL: ";
        cin >> nroAdd;
        total +=nroAdd;
    } while (nroAdd != 0);
    cout << "TOTAL: " << total;

// int nroSilla = 23, nroCama = 6, m = 0, s = 0;
// if ((nroSilla >= 4) && (nroCama >= 1))
//     {
//         do
//         {
//             m++;
//             s += 4;
//         } while ((nroSilla != s && nroSilla != s+1 && nroSilla != s+2 && nroSilla != s+3) && (nroCama != m));
//         cout << "\nSE TIENE " << m << " JUEGOS DE MESA";
//     }
//     else
//     {
//         cout << "NO TIENE NINGUN JUEGO DE MESA";
//     }
//     return 0;
}