#include <bits/stdc++.h>

int main()
{
    double vetor[6], tt=0;
    int cont=0;

    for(int i=0; i<6; i++){
        scanf("%lf", &vetor[i]);
            if(vetor[i] > 0){
                cont++;
                tt += vetor[i];
            }
    }

    printf("%d valores positivos\n", cont);
    printf("%.1lf\n", tt/cont);

return 0;
}
