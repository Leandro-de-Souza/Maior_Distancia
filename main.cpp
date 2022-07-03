#include <bits/stdc++.h>


using namespace std;

int main()
{

       double D1, D2, D3, maiorD;

       cout << "Digite as tres distancias: " << endl;
       cin >> D1;
       cin >> D2;
       cin >> D3;

       if (D1 > D2 && D1 > D3) {
           maiorD = D1;
       }
       else if (D2 > D3) {
           maiorD = D2;
       }
       else { maiorD = D3;
       }

       cout << fixed << setprecision(2);
       cout << "MAIOR DISTANCIA = " << maiorD << endl;



    return 0;
}
