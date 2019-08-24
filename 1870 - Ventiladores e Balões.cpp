#include <bits/stdc++.h>

int **matriz, l, c, p;

int esq (int i, int p)
{
    while(matriz[i][p] == 0 && 1 < p)
        p--;
    return p;
}

int dir (int i, int p)
{
    while(matriz[i][p] == 0 && p < c)
        p++;
    return p;
}

int main()
{
    bool alive;

    scanf("%d %d %d", &l, &c, &p);

    while(l != 0 && c != 0 && p != 0){

        matriz = (int **)malloc(100*sizeof(int *));

            for(int i=0; i<=10; i++){
                matriz[i] = (int *)malloc(100*sizeof(int));
            }

            for(int i=1; i<=l; i++){
                for(int j=1; j<=c; j++){
                    scanf("%d", &matriz[i][j]);
                }
            }
            alive = true;

            for(int i=1; i<=l; i++){
                if(matriz[i][p] == 0){
                    p += matriz[i][esq(i, p)] - matriz[i][dir(i, p)];
                }
                if(matriz[i][p] != 0){
                    printf("BOOM %d %d\n", i, p);
                    alive = false;
                    break;
                }
            }
            if(alive) printf("OUT %d\n", p);

        scanf("%d %d %d", &l, &c, &p);
    }
        for(int i=1; i<=10; i++){
            free(matriz[i]);
        }
        free(matriz);

return 0;
}
