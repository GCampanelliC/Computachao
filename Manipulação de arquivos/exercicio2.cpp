#include <bits/stdc++.h>


int main(){

    int vet[10],c=0, a, b, h ;
    FILE *arquivo;

    arquivo = fopen("exerc1.txt","rt");

    if(arquivo==NULL){
        printf("Nao foi possivel abrir o arquivo");
        exit(0);
    }
        for(a=0;a<10;a++){
            fscanf(arquivo,"%d", &vet[a]);
        }
            for(a=0;a<10;a++){
                for(b=0;b<10;b++){
                        if(vet[b]>vet[a]){
                            h = vet[b];
                            vet[b]=vet[a];
                            vet[a]=h;
                        }
                }
            }

            for(int c=0;c<10;c++){
                printf("%d ", vet[c]);
            }
            fclose(arquivo);
return 0;
}
