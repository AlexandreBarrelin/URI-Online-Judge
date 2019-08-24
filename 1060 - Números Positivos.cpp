#include<bits/stdc++.h>

int main (){

    int i,pos=0;
    double x;

        for(i=0;i<6;i++){
        scanf("%lf",&x);

            if(x>0)
                pos++;
        }

        printf("%d valores positivos\n",pos);

return 0;
}
