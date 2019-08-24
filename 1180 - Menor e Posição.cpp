#include <bits/stdc++.h>
int main()
{
   int a,c,N,p;

        scanf("%d", &N);

    int X[N];

    for(a=0; a<N; a++)
        scanf("%d", &X[a]);
    c=X[0];
    for(a=1; a<N; a++)
    {
        if(c>X[a])
        {
            c=X[a];
            p=a;
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n", c, p);

return 0;
}
