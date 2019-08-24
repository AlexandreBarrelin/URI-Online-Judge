#include<bits/stdc++.h>

int main()
{
    double m[12][12],tt;
    int C;
    char T;

    scanf("%d %c",&C, &T);

    for(int l=0;l<12;l++){
        for(int c=0;c<12;c++){
            scanf("%lf",&m[l][c]);
        }
    }
    if(T=='S'){
        for(int l=0;l<12;l++){
            tt=tt+m[l][C];
        }
    }
    else if(T=='M'){
        for(int l=0;l<12;l++){
            tt=tt+m[l][C];
        }
        tt=tt/12;
    }
    printf("%.1lf\n",tt);

return 0;
}
