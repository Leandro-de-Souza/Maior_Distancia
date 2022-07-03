#include <stdio.h>


int main()
{

       double D1, D2, D3, MaiorD;

       printf("Digite as tres distancias:\n");
       scanf("%lf", &D1);
       scanf("%lf", &D2);
       scanf("%lf", &D3);

       if (D1 > D2 && D1 > D3) {
           MaiorD = D1;
       }
       else if (D2 > D3) {
           MaiorD = D2;
       }
       else { MaiorD = D3;
        }

       printf("MAIOR DISTANCIA = %.2lf", MaiorD);



    return 0;
}
