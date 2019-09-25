#include <bits/stdc++.h>

int vetd[10];
int aa=0;
void vet(int vetc[]){

  int i=0,ii=0;

    for(i=0;i<10;i++){
        if(vetc[i]>0)
        {
             vetd[i] = vetc[i];
             aa++;
        }


    }
}

int main(){
    int V[10];
    int i,ii,vetb[10];
    for(i=0;i<10;i++){
    scanf("%d", &V[i]);
    }

    vet(V);

        for(ii=0;ii<aa;ii++){
            printf("%d", vetd[ii]);
        }

    return 0;

}



