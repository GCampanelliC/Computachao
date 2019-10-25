#include <bits/stdc++.h>

int fatores(int v[100],int x, int *t){

    int cont=0,i=0;
    int pt[10]={2,3,5,7,11,13,17,19,23,29};
            while(x!=1){
                while(x%pt[i]==0){
                    x=x/pt[i];
                    v[cont]=pt[i];
                    cont++;
                }
                i++;
            }

    *t=cont;

    if(*t>10)
        return 1;
    else
        return 0;

}

int main(){

int vet[100],z;
int n,y,i;

    scanf("%d", &n);
        printf("%d\n",fatores(vet,n,&z));

        for(i=0;i<z;i++){
            printf("%d\n", vet[i]);
        }

}
