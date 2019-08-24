#include<bits/stdc++.h>

int main (){

    int q,i,op,y=0,n=0;

        scanf("%d",&q);
        for(i=0;i<q;i++){
        scanf("%d",&op);
            if(op==0)
                y++;
            else if(op==1)
                n++;
}
        if(y==n)
        printf("N\n");
        else if(y>n)
        printf("Y\n");
        else if(n>y)
        printf("N\n");

return 0;
}
