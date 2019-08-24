#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, *vetor, cont=0;

    scanf("%d", &n);

    vetor = (int *)malloc(n*sizeof(int));

        for(int i=0; i<n; i++){
            scanf("%d", &vetor[i]);
        }
    sort(vetor, vetor+n);

        for(int j=0; j<n; j++){
            if(vetor[j+1] != vetor[j]){
                printf("%d aparece %d vez(es)\n",vetor[j], cont+1);
                cont=0;
            }
            else cont++;
        }
    free(vetor);
return 0;
}
