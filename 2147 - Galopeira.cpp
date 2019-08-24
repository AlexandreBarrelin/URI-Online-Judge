#include<bits/stdc++.h>

int main()
{
    int x;
    char galo[10000];
    float tt=0;

        scanf("%d",&x);

    while(x--)
    {
        scanf(" %s",&galo);
        tt=strlen(galo);
        printf("%.2f\n",tt*.01);
    }

return 0;
}
