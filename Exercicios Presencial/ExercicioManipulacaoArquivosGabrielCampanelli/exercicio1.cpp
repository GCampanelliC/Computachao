#include<bits/stdc++.h>


int main(){
    char vetor[10];
    int i=0;

        for(i=0;i<10;i++){
            scanf("%d", &vetor[i]);
        }

    FILE *arquivo;

    arquivo = fopen("exerc1.txt","wt");

    if(arquivo==NULL){
        printf("Nao foi possivel abrir o arquivo");
        exit(0);
    }
        for(i=0;i<10;i++){
    fprintf(arquivo,"%d ", vetor[i]);
        }
    fclose(arquivo);


    system("pause");
    return 0;
}
