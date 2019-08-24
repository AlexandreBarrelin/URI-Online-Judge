#include<bits/stdc++.h>

int main (){

    int l,r,resp;

    while(l!=0 && r!=0){
        scanf("%d %d",&l, &r);
            if(l==0 && r==0)
            break;

        resp=l+r;

        printf("%d\n",resp);
    }

return 0;
}
