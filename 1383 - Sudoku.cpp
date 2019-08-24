#include<bits/stdc++.h>
using namespace std;

int main(){

    int n=0,**m;

        scanf("%d", &n);

    for(int i=0;i<n;i++){

    bool r = true;

    m = (int **)malloc(81*sizeof(int *));

    for(int i=0;i<9;i++){
        m[i] = (int *)malloc(9*sizeof(int));

        for(int j=0;j<9;j++){
            scanf("%d", &m[i][j]);
        }
    }

    for(int i=0;i<9;i++){

        int v[10] = {0,0,0,0,0,0,0,0,0,0};

        for(int j=0;j<9;j++){
            v[(m[i][j])]+=1;
                if(v[(m[i][j])]>1){
                    r=false;
                    break;
                }
        }
        if(!r) break;
    }

    for(int j=0;j<9;j++){

        int v[10] = {0,0,0,0,0,0,0,0,0,0};

    for(int i=0;i<9;i++){
        v[(m[i][j])]+=1;
            if(v[(m[i][j])]>1){
                r=false;
                break;
            }
    }
        if(!r) break;
    }

        if(!r)printf("Instancia %d\nNAO\n\n", i+1);

        else{
            int cont_z=0,cont_y=0;

        for(int g=0;g<3;g++){
            for(int h=0;h<3;h++){

            int d[10] = {1,0,0,0,0,0,0,0,0,0};

                for(int z=cont_z;z<cont_z+3;z++){

                    for(int y=cont_y;y<cont_y+3;y++){
                        d[m[z][y]]+=1;
                    }
                }

                for(int i=0;i<9;i++){
                    if(d[i]==0){
                        r = false;
                        break;
                    }
                }
        if(!r)break;

            cont_z+=3;
        }

        if(!r)break;

            cont_z=0;
            cont_y+=3;
        }

        if(!r)printf("Instancia %d\nNAO\n\n", i+1);
        else printf("Instancia %d\nSIM\n\n", i+1);

            }
    }

    for(int i=0;i<81;i++)
    free(m[i]);

return 0;
}
