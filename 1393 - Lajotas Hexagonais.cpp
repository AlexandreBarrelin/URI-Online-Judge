#include <bits/stdc++.h>

long int mult (int y, int num = 1, int ant = 0)
{
    if (y==0) return ant;

    return (mult(y-1,num + ant,num));
}

int main()
{
    int x;

    scanf("%d", &x);

    while ( x!=0 ){
         printf("%ld\n", mult(x+1));

         scanf("%d", &x);
    };
return 0;
}
