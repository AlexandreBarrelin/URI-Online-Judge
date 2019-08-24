#include <bits/stdc++.h>

int main ()
{
    int dias,saldoatt,menor;

        scanf("%d",&dias);

    int saldo[(dias+1)];

        scanf("%d",&saldo[0]);

        menor=saldo[0];
        saldoatt=saldo[0];

    for(int i=0;i<dias;i++){
        scanf("%d",&saldo[(i+1)]);

        saldoatt+=saldo[(i+1)];

        if(menor>saldoatt){
            menor = saldoatt;
        }
    }
    printf("%d\n",menor);

return 0;
}
