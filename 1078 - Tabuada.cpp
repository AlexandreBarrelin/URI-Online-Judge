#include <bits/stdc++.h>

void tabuada(int y, int cont)
{
    if(cont <= 10){
         printf("%d x %d = %d\n", cont, y, y*cont);
    tabuada(y, cont+1);
    }
}

int main()
{
    int x;

    scanf("%d", &x);

    tabuada(x,1);
}
