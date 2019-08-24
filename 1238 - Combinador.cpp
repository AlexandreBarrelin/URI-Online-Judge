#include<bits/stdc++.h>

int main()
{
    int n,a,b;
    char vet[50],vet2[50];

    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%s",&vet);
        scanf("%s",&vet2);
        a=0;
        b=0;
            for(int j=0;j<50;j++){
                    if(vet[j] == '\0') a = 1;
                    if(vet2[j] == '\0') b = 1;
                    if(a == 1 && b == 1) break;
                    if(a == 0) printf("%c",vet[j]);
                    if(b == 0) printf("%c",vet2[j]);
        }
        printf("\n");
    }
return 0;
}
