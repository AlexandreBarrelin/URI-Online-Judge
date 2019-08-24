#include <stdio.h>
#include <stdlib.h>
#define MAX 10000

int main(){

    int **matriz, m, n, x, y, k, c;

        scanf("%d", &c);

    for(int p=0; p<c; p++){

        scanf("%d%d%d%d", &m,&n,&x,&y);

    matriz = (int **)malloc(m*sizeof(int *));

    for(int i=0;i<m;i++)
        matriz[i] = (int *)malloc(n*sizeof(int));

        x--;y--;

        int xa=0,ya=0;

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d", &k);
                xa = x - i;
                ya = y - j;
                if(xa<=0)xa*=-1;
                if(ya<=0)ya*=-1;
                if(xa>=10)xa=9;
                if(ya>=10)ya=9;

                if(xa<ya){
                    if(ya<=9)matriz[i][j]=k+(10-ya);
                    else matriz[i][j]=k+1;
                }else{
                    if(ya<=9)matriz[i][j]=k+(10-xa);
                    else matriz[i][j]=k+1;
                }
            }
        }
        printf("Parede %d:\n", p+1);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d", matriz[i][j]);
                if(j<n-1)printf(" ");
        }
            printf("\n");
    }
    for(int i=0;i<m;i++)
        free(matriz[i]);

    free(matriz);
    }

return 0;
}
