#include<bits/stdc++.h>

int main()
{
    double m[12][12],tt=0;
    char T;

    scanf("%c",&T);

    for(int l=0;l<12;l++){
        for(int c=0;c<12;c++){
            scanf("%lf",&m[l][c]);
        }
    }
    if(T=='S'){
        for(int c=0;c<12;c++){
                for(int l=0;l<12;l++){
                        if(c == l){
                            break;
                        }
                    tt=tt+m[l][c];
                }
            }
        }
    else if(T=='M'){
        for(int c=0;c<12;c++){
                for(int l=0;l<12;l++){
                        if(c==l){
                            break;
                        }
                    tt=tt+m[l][c];
                }
            }
                    tt=tt/66.0;
    }
            printf("%.1lf\n",tt);

return 0;
}
