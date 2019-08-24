#include <bits/stdc++.h>

int main()
{
    int n, m;

        scanf("%d", &n);

    while(n>0){

        scanf("%d", &m);

    int vetor[m], copia[m], cont=0, aux;

        for(int i=0; i<m; i++){
            scanf("%d", &vetor[i]);
            copia[i] = vetor[i];
        }

        for(int i=0; i<m-1;i++){
            for(int j=m-1; j>i; j--){
                if(vetor[j] > vetor[j-1]){
                    aux = vetor[j];
                    vetor[j] = vetor[j-1];
                    vetor[j-1] = aux;
                }
            }
        }
        for(int i=0;i<m;i++){
            if(vetor[i] == copia[i])
                cont++;
        }
        printf("%d\n", cont);

        n--;
    }
return 0;
}
