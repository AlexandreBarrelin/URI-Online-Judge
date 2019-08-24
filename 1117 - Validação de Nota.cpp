#include<bits/stdc++.h>

int main(){

    double n1,n2,md=0;
    do{
            scanf("%lf",&n1);
        if(n1>=0 && n1<=10)
            n1=n1;
        else
            printf("nota invalida\n");
    }
        while(n1<0 || n1>10);
    do{

            scanf("%lf",&n2);

        if(n2>=0 && n2<=10)
            n2=n2;
        else
            printf("nota invalida\n");
    }
        while(n2<0 || n2>10);

        md=(n1+n2)/2;

    printf("media = %.2lf\n",md);

return 0;
}
