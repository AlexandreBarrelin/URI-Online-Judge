#include <bits/stdc++.h>

int BubbleSort (int v[], int cont)
{
    int aux, c=0;

    for(int i=0; i<cont-1; i++){
        for(int j=cont-1; j>i; j--){
            if(v[j]<v[j-1]){
                aux = v[j];
                v[j] = v[j-1];
                v[j-1] = aux;
                c++;
            }
        }
    }
    return c;
}

int main()
{
    int n, m, tt;

    scanf("%d", &n);

    while(n > 0){
        scanf("%d", &m);

    int vetor[m];

        for(int i=0; i<m; i++){
            scanf("%d", &vetor[i]);
        }
    tt = BubbleSort(vetor, m);

    printf("Optimal train swapping takes %d swaps.\n", tt);

    n--;
    }
return 0;
}
