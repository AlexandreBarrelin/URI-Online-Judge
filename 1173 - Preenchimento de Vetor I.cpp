#include<bits/stdc++.h>

int main(){

    int N[10],x,i;
        scanf("%d",&x);

    for(i=0;i<10;i++){
        N[i]=x;
        printf("N[%d] = %d\n",i,x);
        x*=2;
    }
return 0;
}
