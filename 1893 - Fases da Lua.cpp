#include<bits/stdc++.h>

int main (){

        int x,y;
        scanf("%d %d", &x, &y);

    if (x>=0 && y<=2)
        printf("nova\n");
    else if (y>=97 && y<=100)
        printf("cheia\n");
    else if(y>=3 && y<=96 && y>x)
        printf("crescente\n");
    else if(y>=3 && y<=96 && y<x)
        printf("minguante\n");

return 0;
}
