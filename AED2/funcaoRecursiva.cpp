#include<bits/stdc++.h>

int potenciaRec(int a, int b){
          int tot=1;
        if(b==0)
            return 1;
            return (a*potenciaRec(a,b-1));

}


int main(){

    int x,y,c;

    scanf("%d%d", &x,&y);

    c = potenciaRec(x,y);
    printf("%d", c);

    return 0;

}

