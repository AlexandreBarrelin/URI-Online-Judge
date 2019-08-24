#include<bits/stdc++.h>

int main (){

    int x,i,par=0,imp=0,pos=0,neg=0;

        for(i=0;i<5;i++){
        scanf("%d",&x);

            if(x<0)
                neg++;
            else if(x>0)
                pos++;
            if(x%2==0)
                par++;
            else
                imp++;
        }

        printf("%d valor(es) par(es)\n",par);
        printf("%d valor(es) impar(es)\n",imp);
        printf("%d valor(es) positivo(s)\n",pos);
        printf("%d valor(es) negativo(s)\n",neg);

    return 0;

}
