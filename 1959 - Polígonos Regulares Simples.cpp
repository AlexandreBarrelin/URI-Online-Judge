#include <bits/stdc++.h>

long long int MultiRec( long long int x, long long int y)
{
    if(y==0 || x==0) return 0;

    return(y + MultiRec(y, x-1));
}

int main()
{
    long long int a, b;

    scanf("%lld %lld",&a, &b);

    printf("%lld\n", MultiRec(a,b));

return 0;
}
