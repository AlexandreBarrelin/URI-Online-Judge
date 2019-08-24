#include<bits/stdc++.h>

int main(){

    int a,b,c;

    while(a!=0 && b!=0){
        scanf("%d %d", &a, &b);
            if(a==0 && b==0)
            break;
        c=2*a-b;

        printf("%d\n",c);
    }
return 0;
}
