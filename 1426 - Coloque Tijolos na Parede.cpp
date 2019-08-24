#include <bits/stdc++.h>

int main(){

    int n, **matriz;

        scanf("%d",&n);

    for(int i=0; i<n; i++){

    matriz = (int **)malloc(10*sizeof(int *));

    for(int i=0; i<10; i++)
        matriz[i] = (int *)malloc(10*sizeof(int));

    for(int i=0; i<9; i++){
        for(int j=0; j<=i; j++){
            if(i%2 == 0 && j%2==0)
                scanf("%d", &matriz[i][j]);
            else
                matriz[i][j] = -1;
        }
    }

    for(int i=0; i<9; i++){
        for(int j=0; j<=i; j++){
            if(matriz[i][j] == -1 && i%2 == 0)
                matriz[i][j] = (matriz[i-2][j-1] - (matriz[i][j-1]+matriz[i][j+1]))/2;
        }
    }

    for(int i=1; i<9;i+=2){
        for(int j=0; j<=i; j++){
            matriz[i][j] = matriz[i+1][j] + matriz[i+1][j+1];
        }
    }

    for(int i=0; i<9; i++){
        for(int j=0; j<=i; j++){
            if(j != 0) printf(" ");
                printf("%d",matriz[i][j]);
            }
        printf("\n");
    }

    for(int i=0; i<10; i++)
        free(matriz[i]);

    free(matriz);
}
return 0;
}
