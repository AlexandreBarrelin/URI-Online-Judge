#include <bits/stdc++.h>

int FuncRec (int y)
{
    int f=1;

    if(y == 0) return (f);

    return (y * (FuncRec(y-1)));
}

int main()
{
    int x;

    scanf("%d", &x);

    printf("%d\n", FuncRec(x));

return 0;
}
