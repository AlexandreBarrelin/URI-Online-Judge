#include <bits/stdc++.h>

void BubbleSort (int *Pb, int *Pc, int cont_a, int cont_d)
{
    int aux;

    for(int i=0; i<cont_a-1; i++){
        for(int j=cont_a-1; j>i; j--){
            if(Pb[j] < Pb[j-1]){
                aux = Pb[j];
                Pb[j] = Pb[j-1];
                Pb[j-1] = aux;
            }
        }
    }
    for(int i=0; i<cont_d-1; i++){
        for(int j=cont_d-1; j>i; j--){
            if(Pc[j] < Pc[j-1]){
                aux = Pc[j];
                Pc[j] = Pc[j-1];
                Pc[j-1] = aux;
            }
        }
    }
}

int main()
{
    int a, d;

        scanf("%d %d", &a, &d);

    while(a != 0 && d != 0){

    int b[a], c[d];

        for(int i=0; i<a; i++){
            scanf("%d", &b[i]);
        }
        for(int i=0; i<d; i++){
            scanf("%d", &c[i]);
        }

    BubbleSort(&b[0], &c[0], a, d);

        if(b[0] < c[0] || b[0] < c[1]) printf("Y\n");

        else printf("N\n");

        scanf("%d %d", &a, &d);
    }
return 0;
}
