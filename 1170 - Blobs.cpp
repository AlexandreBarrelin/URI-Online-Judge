#include<bits/stdc++.h>

int main(){

    int i,n,dias;
    double kg;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%lf",&kg);
        dias=0;

    while(kg>1){
        kg/=2;
        dias++;
    }
        printf("%d dias\n",dias);
    }

return 0;
}
