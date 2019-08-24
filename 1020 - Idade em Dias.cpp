#include<bits/stdc++.h>

int main(){

    int a,m,d;

        scanf("%d",&d);

        a=d/365;
        d=d%365;
        m=d/30;
        d=d%30;

        printf("%d ano(s)\n",a);
        printf("%d mes(es)\n",m);
        printf("%d dia(s)\n",d);

return 0;
}
