#include <bits/stdc++.h>

double tt = 0;

double raiz(double y)
{
    if(y == 0) return (tt+1);

    return(tt = 1/(tt+2) , (raiz(y-1)));

}

int main()
{
    double x;

        scanf("%lf", &x);

        printf("%.10lf\n", raiz(x));

return 0;
}
