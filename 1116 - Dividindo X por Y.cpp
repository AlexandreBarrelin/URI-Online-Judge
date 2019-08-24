#include<bits/stdc++.h>

int main(){

    int i,n,x,y;
    double tt;

        scanf("%d",&n);

        for(i=0;i<n;i++){
            scanf("%d %d",&x, &y);

            if(x==0)
                printf("0.0\n");
            else if(y==0)
                printf("divisao impossivel\n");
            else if(tt=(double)x/y)
                printf("%.1lf\n",tt);
        }

return 0;
}
