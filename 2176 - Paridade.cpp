#include<bits/stdc++.h>

int main()
{

    char mens[101];
    int len,tt;

            scanf("%s",&mens);

            len= strlen(mens);

        for(int i = tt = 0;i<len;i++){
            tt+=mens[i];
        }

        if(tt%2==0){
            printf("%s0\n",mens);
    }
        else
            printf("%s1\n",mens);

return 0;
}
