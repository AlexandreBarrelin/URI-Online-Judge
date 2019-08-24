#include<bits/stdc++.h>

int main(){

    int x,h=0,m=0,o=0,i;

        scanf("%d",&x);

    for(i=0;i<x;i++){

        scanf("%d %d %d",&h, &m, &o);

        if(h<10)
            printf("0%d:",h);
        else
            printf("%d:",h);
        if(m<10)
            printf("0%d",m);
        else
            printf("%d",m);
        if(o==1)
            printf(" - A porta abriu!\n");
        else
            printf(" - A porta fechou!\n");

        }

return 0;
}
