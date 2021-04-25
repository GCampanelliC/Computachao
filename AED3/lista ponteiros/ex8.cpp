#include <bits/stdc++.h>
using namespace std;

int DIVS(int n,int *a, int *b){

    int cont=0,maior=999999,menor=-999999;
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                menor = min(menor, i);
                maior = max(maior, i);
                cont++;
            }
    if(cont>0){
        return 1;
    }
    else{
        return 0;

    }

        }
}
int main(){

int a,b,c,d,x,y;

    scanf("%d",&x);
    scanf("%d",&a);
    scanf("%d",&b);
c = max(a,b);
d = min(a,b);

 y = DIVS(x,&c,&d);

    if(y==1){
        printf("nao e primo\n");
    }
    if(y==0){
        printf("e primo\n");
    }


return 0;
}

