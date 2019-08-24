#include<bits/stdc++.h>

int main(){

    double n1,n2,n3,n4,media,ex,f;

        scanf("%lf %lf %lf %lf",&n1, &n2, &n3, &n4);

            media=((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;

    if (media>=7){
        printf("Media: %.1lf\n",media);
        printf("Aluno aprovado.\n");

    }else if (media<5){
        printf("Media: %.1lf\n",media);
        printf("Aluno reprovado.\n");

    }else if (media>=5 && media<=6.9){
        scanf("%lf",&ex);

        printf("Media: %.1lf\n",media);
        printf("Aluno em exame.\n");


        printf("Nota do exame: %.1lf\n",ex);

        f=(ex+media)/2;

        if (f<=4.9){
            printf("Aluno reprovado.\n");

        }else if (f>=5){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n",f);
        }
    }
return 0;
}
