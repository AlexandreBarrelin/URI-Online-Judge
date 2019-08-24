#include<bits/stdc++.h>

int main (){

    int n,a=0,b=0,ja=0,jb=0,i=0;

    while(scanf("%d",&n) && n!=0){
        while(n--){
            scanf("%d %d", &a, &b);

            if(a==b)
                ja+=0;
            else if(a>b)
                ja++;
            else if(a<b)
                jb++;
        }

        printf("%d %d\n",ja, jb);
        ja=0;
        jb=0;
}

return 0;
}
