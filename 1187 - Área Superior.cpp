#include<bits/stdc++.h>

int main()
{
    double m[12][12],tt;
    char T;

        scanf("%c",&T);

        for(int l=0;l<12;l++){
            for(int c=0;c<12;c++){
                scanf("%lf",&m[l][c]);
            }
        }
        for(int l=0;l<5;l++){
            for(int c=l+1;c<=10-l;c++){
                tt+=m[l][c];
            }
        }
        if(T == 'M'){
                tt=tt/30;
        }
        printf("%.1lf\n",tt);

return 0;
}
