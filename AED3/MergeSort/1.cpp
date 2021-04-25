#include<bits/stdc++.h>
using namespace std;

typedef struct {
int cod;
char nome[50];
double preco;

}prat;

void MergeSortCod(prat vet[], int tam)
{
    int mid;
    if (tam > 1){
        mid = tam / 2;
    MergeSort(vet, mid);
    MergeSort(vet + mid, tam - mid);
    mergeC(vet, tam);
    }
}
void MergeSortNom(prat vet[], int tam)
{
    int mid;
    if (tam > 1){
        mid = tam / 2;
    MergeSort(vet, mid);
    MergeSort(vet + mid, tam - mid);
    mergeN(vet, tam);
    }
}
void MergeSortPre(prat vet[], int tam)
{
    int mid;
    if (tam > 1){
        mid = tam / 2;
    MergeSort(vet, mid);
    MergeSort(vet + mid, tam - mid);
    mergeP(vet, tam);
    }
}

void mergeC(prat vet[], int tam){
    int mid;
    int i, j, k;
    prat tmp[tam];
        mid = tam / 2;
        i = 0;
        j   = mid;
        k = 0;
            while (i < mid && j < tam){
                if (vet[i].cod <= vet[j].cod){
                    tmp[k] = vet[i++];
                }
                else{
                    tmp[k] = vet[j++];
                }
                ++k;
            }
            if (i == mid){
                while (j < tam){
                    tmp[k++] = vet[j++];
                }
            }
            else{
                while (i < mid){
                    tmp[k++] = vet[i++];
                }
            }
                for (i = 0; i < tam; ++i){
                    vet[i] = tmp[i];
                }
}
void mergeP(prat vet[], int tam){
    int mid;
    int i, j, k;
    prat tmp[tam];
        mid = tam / 2;
        i = 0;
        j   = mid;
        k = 0;
            while (i < mid && j < tam){
                if (vet[i].preco <= vet[j].preco){
                    tmp[k] = vet[i++];
                }
                else{
                    tmp[k] = vet[j++];
                }
                ++k;
            }
            if (i == mid){
                while (j < tam){
                    tmp[k++] = vet[j++];
                }
            }
            else{
                while (i < mid){
                    tmp[k++] = vet[i++];
                }
            }
                for (i = 0; i < tam; ++i){
                    vet[i] = tmp[i];
                }
}
void mergeN(prat vet[], int tam){
    int mid;
    int i, j, k;
    prat tmp[tam];
        mid = tam / 2;
        i = 0;
        j   = mid;
        k = 0;
            while (i < mid && j < tam){
                if (strcmp(vet[i].preco,vet[j].preco)<0){
                    tmp[k] = vet[i++];
                }
                else{
                    tmp[k] = vet[j++];
                }
                ++k;
            }
            if (i == mid){
                while (j < tam){
                    tmp[k++] = vet[j++];
                }
            }
            else{
                while (i < mid){
                    tmp[k++] = vet[i++];
                }
            }
                for (i = 0; i < tam; ++i){
                    vet[i] = tmp[i];
                }
}


int main(){
    int op=0,cont=0;
    prat P[10];
    int c,ii=-1;
    printf("cadastre os pratos\n");
        for(int i=0;i<10;i++){
                printf("Informe o Codigo do Prato:\n");
                scanf("%d", &P[i].cod);
                printf("Informe o Nome do Prato:\n");
                scanf(" %[^\n]", &P[i].nome);
                printf("Informe o Preco do Prato:\n");
                scanf("%lf", &P[i].preco);

        }

        while(true){

                if(op==4)break;
          printf("------------------------\n");
          printf("Pratos\n");
          printf("1 - Ordenar por codigo\n");
          printf("2 - Ordenar por nome\n");
          printf("3 - Ordenar por preco\n");
          printf("4- Sair\n");
          printf("------------------------\n");
        scanf("%d", &op);


     if(op==1){

                 MergeSortCod(P,10);
                printf("Pratos em ordem de Codigo: \n");
                    for(int i=0;i<10;i++){
                        printf("%s : %.%d\n", P[i].nome, P[i].cod);
                        printf("\n");
                    }
     }
    if (op==2){

          MergeSortNom(P,10);
                printf("Pratos em ordem de seu Nome: \n");
                    for(int i=0;i<10;i++){
                        printf("%s\n", P[i].nome);
                        printf("\n");
                    }
    }

    if(op==3){
          MergeSortPre(P,10);
                printf("Pratos em ordem de Preco: \n");
                    for(int i=0;i<10;i++){
                        printf("%s : %.%.2lf\n", P[i].nome, P[i].preco);
                        printf("\n");
                    }

            }

}
    return 0;

}

