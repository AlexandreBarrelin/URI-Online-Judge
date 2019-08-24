#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nc, *vetor;
    int long long n;

        scanf("%d", &nc);

    while(nc > 0){
        scanf("%lld", &n);

            vetor = (int *)malloc(n*sizeof(int));

        for(int i=0; i<n; i++){
            scanf("%d", &vetor[i]);
        }

        sort (vetor, vetor+n);

        for(int i=0; i<n; i++){
            if(i == n-1)
                printf("%d\n", vetor[i]);
            else
                printf("%d ", vetor[i]);
        }
        nc--;
    }

    free(vetor);

return 0;
}
