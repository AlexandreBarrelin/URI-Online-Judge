#include<bits/stdc++.h>

int main()
{
    int n,soma=0;
    char num[9999];

    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%s",&num);
        for(int j=0 ; j < strlen(num) ; j++){


        if(num[j] == '1'){
            soma+=2;
        }
        else if(num[j] == '2'){
            soma+=5;
        }
        else if(num[j] == '3'){
            soma+=5;
        }
        else if(num[j] == '4'){
            soma+=4;
        }
        else if(num[j] == '5'){
            soma+=5;
        }
        else if(num[j] == '6'){
            soma+=6;
        }
        else if(num[j]== '7'){
            soma+=3;
        }
        else if(num[j] == '8'){
            soma+=7;
        }
        else if(num[j] == '9'){
            soma+=6;
        }
        else if(num[j] == '0'){
            soma+=6;
        }

}
    printf("%d leds\n",soma);
    soma=0;
    }

return 0;
}
