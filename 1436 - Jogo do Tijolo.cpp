#include <bits/stdc++.h>

int main()
{
    int t, n, *vetor;

    scanf("%d", &t);

    for(int i=0; i<t; i++){
        scanf("%d", &n);

            vetor = (int *)malloc(n*sizeof(int));

            for(int j=0; j<n; j++){
                scanf("%d", &vetor[j]);
            }
        printf("Case %d: %d\n", i+1, vetor[(n/2)]);

        free(vetor);
    }
return 0;
}
