#include<bits/stdc++.h>

int main(){

    int x,y,tx;
        scanf("%d %d", &x, &y);
            if(x>y){
                tx=x;
                x=y;
                y=tx;
            }

        do{
            x++;
            if(x==y)
                break;
            else if (x%5==2||x%5==3){
                printf("%d\n",x);
            }
        }while(x<y);

return 0;
}
