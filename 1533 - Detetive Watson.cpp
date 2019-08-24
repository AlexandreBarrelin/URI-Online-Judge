#include<bits/stdc++.h>

int main(){
    int n,v[10000],i,maior,posmaior;
    scanf("%d",&n);

    while(n>0){
        maior=-1;
        for(i=0;i<n;i++){
            scanf("%d",&v[i]);

            if(v[i]>maior){
                maior=v[i];
                posmaior=i;
            }
        }
        v[posmaior]=0;
        maior=-1;

        for(int i=0;i<n;i++){
            if(v[i]>maior){
                maior=v[i];
                posmaior=i;
            }
        }
        printf("%d\n",(posmaior+1));
        scanf("%d",&n);
    }
    return 0;
}
