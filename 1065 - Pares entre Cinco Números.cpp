#include<bits/stdc++.h>

int main (){

    int x,i,par=0;

        for(i=0;i<5;i++){
        scanf("%d",&x);

            if(x%2==0)
                par++;
        }

        printf("%d valores pares\n",par);

    return 0;

}
