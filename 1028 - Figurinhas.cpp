#include <bits/stdc++.h>

int mdc (int a, int b)
{
    if(b == 0) return a;

    return (mdc(b, a%b));
}

int main()
{
    int x, y, num;

    scanf("%d", &num);

    for(int i=0;i<num;i++){
        scanf("%d %d", &x, &y);

        printf("%d\n", mdc(x,y));
    }
return 0;
}
