#include <bits/stdc++.h>

void maior(int v[5][5]){

  int i=0,ii=0,ma=-999999999;

    for(i=0;i<5;i++){
        for(ii=0;ii<5;ii++){
        if(v[i][ii]> ma){
            ma = v[i][ii];
        }
    }
    printf("o maior elemento e : %d\n", ma);
}
}


int main(){
    int a[5][5];
    int l,c;
    for(l=0;l<5;l++){
        for(c=0;c<5;c++){
            scanf("%d", &a[l][c]);
    }
}
    maior(a);

    return 0;


}


