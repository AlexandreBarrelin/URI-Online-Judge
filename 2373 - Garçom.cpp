#include<bits/stdc++.h>

int main(){

    int band,tt=0;

        scanf("%d",&band);

    int latas[band],copos[band];

    for(int i=0;i<band;i++){
        scanf("%d %d", &latas[i], &copos[i]);
         if(latas[i]>copos[i]){
                tt=tt+copos[i];

         }
    }
        printf("%d\n",tt);

return 0;
}
