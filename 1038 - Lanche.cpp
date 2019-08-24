#include<bits/stdc++.h>

int main (){

    int cd,qt;
    double tt;

        scanf("%d",&cd);
        scanf("%d",&qt);

    switch (cd){
        case 1:
        (tt=qt*4);
        printf("Total: R$ %.2lf\n",tt);
        break;

        case 2:
        (tt=qt*4.5);
        printf("Total: R$ %.2lf\n",tt);
        break;

        case 3:
        (tt=qt*5);
        printf("Total: R$ %.2lf\n",tt);
        break;

        case 4:
        (tt=qt*2);
        printf("Total: R$ %.2lf\n",tt);
        break;

        case 5:
        (tt=qt*1.5);
        printf("Total: R$ %.2lf\n",tt);
        break;
        }
return 0;
}
