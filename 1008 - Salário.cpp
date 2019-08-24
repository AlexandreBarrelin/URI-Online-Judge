#include<bits/stdc++.h>

int main (){

    int NUMERO,HORAS;
    double SALARIO;

        scanf("%d %d", &NUMERO, &HORAS);
        scanf("%lf", &SALARIO);

            SALARIO = HORAS*SALARIO;

        printf("NUMBER = %d\n",NUMERO);
        printf("SALARY = U$ %.2lf\n",SALARIO);

return 0;
}
