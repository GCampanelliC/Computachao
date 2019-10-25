#include<bits/stdc++.h>

int potenciaIte(int a, int b){
          int tot=1;
        if(b==0)
            return 1;
            for(int i=0;i<b;i++){

                tot= tot*a;
            }
            return tot;

}


int main(){

    int x,y,c;

    scanf("%d%d", &x,&y);

    c = potenciaIte(x,y);
    printf("%d", c);

    return 0;

}
