#include <bits/stdc++.h>

int main() {

    int valorTotal, valorContado,valor100=0, valor50=0, valor20=0, valor10=0, valor5=0, valor2=0, valor1=0;

    scanf("%d",&valorTotal);
    valorContado = valorTotal;

    while(valorContado > 0){
        if(valorContado >= 100){
            valor100 = valorContado/100;
            valorContado -= (valor100 * 100);
        }else if(valorContado >= 50){
            valor50 = valorContado/50;
            valorContado -= (valor50 * 50);
        }else if(valorContado >= 20){
            valor20 = valorContado/20;
            valorContado -= (valor20 * 20);
        }else if(valorContado >= 10){
            valor10 = valorContado/10;
            valorContado -= (valor10 * 10);
        }else if(valorContado >= 5){
            valor5 = valorContado/5;
            valorContado -= (valor5 * 5);
        }else if(valorContado >= 2){
            valor2 = valorContado/2;
            valorContado -= (valor2 * 2);
        }else{
            valor1 = valorContado;
            valorContado -= valor1;
        }
    }

    printf("%d\n",valorTotal);
    printf("%d nota(s) de R$ 100,00\n",valor100);
    printf("%d nota(s) de R$ 50,00\n",valor50);
    printf("%d nota(s) de R$ 20,00\n",valor20);
    printf("%d nota(s) de R$ 10,00\n",valor10);
    printf("%d nota(s) de R$ 5,00\n",valor5);
    printf("%d nota(s) de R$ 2,00\n",valor2);
    printf("%d nota(s) de R$ 1,00\n",valor1);

    return 0;
}
