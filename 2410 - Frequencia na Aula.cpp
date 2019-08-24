#include<bits/stdc++.h>

using namespace std;

int main(){

    int N,v[100000],t;

    scanf("%d",&N);
    t=N;

    for(int i=0;i<N;i++){

        scanf("%d", &v[i]);
    }

    sort(v,v+N);

        for(int i=0;i<N;i++){
            if(v[i] == v[i+1])
                t--;
        }
    printf("%d\n",t);

return 0;
}
