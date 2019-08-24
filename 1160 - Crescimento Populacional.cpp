#include<bits/stdc++.h>

int main(){

    int i,n,pa,pb,t1,t2,tt=0;
    double g1,g2;
        scanf("%d",&n);

    for(i=0;i<n;i++){
        tt=0;
        scanf("%d %d",&pa, &pb);
        scanf("%lf %lf",&g1, &g2);

    do{
        pa+=(pa*g1)/100;
        pb+=(pb*g2)/100;
        tt++;
    }
    while(pa<=pb && tt<=100);
        if(tt<=100)
            printf("%d anos.\n",tt);
        else
            printf("Mais de 1 seculo.\n");
    }
return 0;
}
