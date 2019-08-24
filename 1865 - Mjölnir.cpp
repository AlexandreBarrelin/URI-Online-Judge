#include<bits/stdc++.h>

int main(){

    int n,num;
    char nome[50];


    scanf("%d", &n);

    while(n--){
        scanf("%s",&nome);
        scanf("%d",&num);
        if(strcmp(nome,"Thor")==0){
            printf("Y\n");
        }
        else
            printf("N\n");
            }
return 0;
}
