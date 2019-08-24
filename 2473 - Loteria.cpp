#include<bits/stdc++.h>

int main(){

    int flav[6],sor[6],pts=0;

    for(int i=0;i<6;i++){
        scanf("%d",&flav[i]);
    }
    for(int c=0;c<6;c++){
        scanf("%d",&sor[c]);
    }
    for(int i=0;i<6;i++){
        for(int c=0;c<6;c++){
            if(flav[i] == sor[c])
                pts++;
        }
    }
    switch(pts){
        case 3:
            printf("terno\n");
            break;

        case 4:
            printf("quadra\n");
            break;

        case 5:
            printf("quina\n");
            break;

        case 6:
            printf("sena\n");
            break;

        default:
            printf("azar\n");
            break;
    }
return 0;
}
