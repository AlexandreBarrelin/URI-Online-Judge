#include<bits/stdc++.h>

int main (){

    int i,n,t;

        scanf("%d",&n);

        for(i=1;i<=n;i++){
            if (i%2==0){
                t=i*i;
                printf("%d^2 = %d\n",i,t);
            }
        }

return 0;
}
