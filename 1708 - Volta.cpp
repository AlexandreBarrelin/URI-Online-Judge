#include<bits/stdtr1c++.h>

int main(){

    int x,y,b=0,tx=0,ty=0;

    scanf("%d %d",&x, &y);

    do{
        tx+=x;
        ty+=y;
        b++;
        }

    while((ty-tx)<y);

        printf("%d\n",b);

return 0;
}
