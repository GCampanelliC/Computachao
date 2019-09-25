#include <bits/stdc++.h>

double vet[3][4],v[12];

void passar(){
    int i,ii,b=0;
        for(i=0;i<3;i++){
            for(ii=0;ii<4;ii++){
                v[b++] = vet[i][ii];

            }
        }

}


int main(){
    int l,c;
        for(l=0;l<3;l++){
            for(c=0;c<4;c++){
                scanf("%lf", &vet[l][c]);
            }
        }
        passar();
            for(int i=0; i<12; i++)
                printf("%.1lf\n ", v[i]);

        return 0;
}
