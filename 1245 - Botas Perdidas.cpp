 #include <bits/stdc++.h>

void BubbleSort (int *Pnum, char *Plad, int cont)
{
    int aux1;
    char aux2;

    for(int i=0; i<cont-1; i++){
        for(int j=cont-1; j>i; j--){
            if(Pnum[j] < Pnum[j-1]){
                aux1 = Pnum[j];
                aux2 = Plad[j];
                Pnum[j] = Pnum[j-1];
                Plad[j] = Plad[j-1];
                Pnum[j-1] = aux1;
                Plad[j-1] = aux2;
            }
        }
    }
}

int main()
{
    int n;

    while(scanf("%d", &n) != EOF){

    int numero[n], par=0;
    char lado[n];

        for(int i=0; i<n; i++){
            scanf("%d %c", &numero[i], &lado[i]);
        }

        BubbleSort(&numero[0], &lado[0], n);

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(numero[i] == numero[j]){
                    if(numero[j] != 0 && lado[i] != lado[j]){
                        par++;
                        numero[i] = 0;
                        numero[j] = 0;
                    }
                }
            }
        }
        printf("%d\n", par);
    }
return 0;
}
