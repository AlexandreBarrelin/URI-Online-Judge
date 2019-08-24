#include<bits/stdc++.h>

int main(){

    int a,n,tt=0,i;

        scanf("%d %d",&a, &n);

    do{
        if(n<=0)
            scanf("%d",&n);
    }
    while(n<=0);
        for(i=0;i<n;i++){
            tt+=a+i;
        }
        printf("%d\n",tt);

return 0;
}
