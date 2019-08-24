#include<bits/stdc++.h>

int main()
{
    int j,k,n,cont;
    char um[10000],dois[10000];

    scanf("%d",&n);

    for(int i=0;i<n;i++){
        cont=0;
        scanf("%s %s", &um, &dois);
        for(j= strlen(dois),k= strlen(um);j>=0;j--,k--){
            if(um[k] == dois[j]) cont++;
                else break;
          }
          if(cont == strlen(dois)+1) printf("encaixa\n");
          else printf("nao encaixa\n");
        }

return 0;
}
