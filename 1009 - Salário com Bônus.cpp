#include <bits/stdc++.h>

int main (){

    char nome;
    double sal,vend,total;

        scanf("%s", &nome);
        scanf("%lf %lf", &sal, &vend);

        total = (vend*0.15)+sal;

        printf("TOTAL = R$ %.2lf\n", total);

return 0;
}
