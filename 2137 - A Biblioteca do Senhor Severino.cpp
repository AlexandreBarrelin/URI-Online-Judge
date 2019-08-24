#include <bits/stdc++.h>

int main()
{
    int n;

    while(scanf("%d",&n)!= EOF){

    int vetor[n], aux;

        for(int i=0; i<n; i++){
            scanf("%d", &vetor[i]);
        }
        for(int i=0; i<n-1; i++){
            for(int j= n-1; j>i; j--){
                if(vetor[j]<vetor[j-1]){
                    aux = vetor[j];
                    vetor[j] = vetor[j-1];
                    vetor[j-1] = aux;
                }
            }
        }
        for(int i=0; i<n; i++){
            printf("%04d\n", vetor[i]);
        }
    }

return 0;
}
