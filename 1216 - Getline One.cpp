#include<bits/stdc++.h>

int main()
{
    char nome[1000];
    int dist,x=0;
    double tt=0;

    while (scanf(" %[^\n]",&nome)!= EOF){

        scanf("%*c%lld%*c",&dist);
          tt += dist;
          x++;
    }

    printf("%.1lf\n", tt/(float)x);

return 0;
}
