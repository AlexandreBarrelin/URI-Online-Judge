#include<bits/stdc++.h>

int main(){

    int n=0,i,id,md=0;
    double med;

    do{
        scanf("%d",&id);
            if(id>=0){
            md=md+id;
            n++;
            }
            else
            break;
    }
    while(id>=0);
        med=(double)md/n;

        printf("%.2lf\n",med);

return 0;
}
