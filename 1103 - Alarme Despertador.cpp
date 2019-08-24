#include<bits/stdc++.h>

int main()
{
    int h1,m1,h2,m2,inicio,fim;

    while(1){
        scanf("%d %d %d %d",&h1,&m1, &h2, &m2);

        if(h1+m1    +h2+m2==0)
            break;
        if(h1==0)
            inicio=24*60+m1;
        else
            inicio=h1*60+m1;
        if(h2==0)
            fim=24*60+m2;
        else
            fim=h2*60+m2;
        if(inicio<fim)
            printf("%d\n",fim-inicio);
        else
            printf("%d\n",24*60-(inicio-fim));
}
    return 0;
}
