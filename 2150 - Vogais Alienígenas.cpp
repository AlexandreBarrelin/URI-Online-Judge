#include<bits/stdc++.h>

int main()
{
    char vogais[100000],teste[100000];
    int n=0;

    while (scanf(" %s",&vogais) != EOF){

        scanf(" %[^\n]",&teste);

        for(int i=0;i<(strlen(vogais));i++){
                for(int j=0;j<(strlen(teste));j++){
                    if(vogais[i] == teste[j]){
                    n++;
                }
            }
        }
        printf("%d\n",n);
        n=0;
    }

return 0;
}
