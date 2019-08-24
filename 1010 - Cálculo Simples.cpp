#include <bits/stdc++.h>

int main (){

    int cd1,nm1,cd2,nm2;
    double vl1,vl2,total;

        scanf("%d %d %lf", &cd1, &nm1, &vl1);
        scanf("%d %d %lf", &cd2, &nm2, &vl2);

            total=(nm1*vl1)+(nm2*vl2);

        printf("VALOR A PAGAR: R$ %.2lf\n",total);

return 0;
}
