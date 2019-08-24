#include<bits/stdc++.h>

int main (){

    int hi,hf,f;

        scanf("%d %d",&hi, &hf);

        f= hf-hi;

    if (f<0){
        f= 24+(hf-hi);
    }

    if (hi == hf){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }

    else
        printf("O JOGO DUROU %d HORA(S)\n",f);

return 0;
}
