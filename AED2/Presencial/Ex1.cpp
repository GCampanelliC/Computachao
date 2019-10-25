#include <bits/stdc++.h>

using namespace std;
struct carro{
    int ano,qe;
    char marca[10],np[10];

    };


void SelectionSortAno(struct carro vet[], int tam){
    int i, j, min;
    struct carro aux;
    for (i = 0; i < (tam-1); i++){
        min = i;
        for (j = (i+1); j < tam; j++){
            if(vet[j].ano < vet[min].ano){
            min = j;
            }
        }
                if (i != min){
                    aux = vet[i];
                    vet[i] = vet[min];
                    vet[min] = aux;
                }
            }
    }
void SelectionSortMarca(struct carro vet[], int tam){
    int i, j, min;
    struct carro aux;
    for (i = 0; i < (tam-1); i++){
        min = i;
        for (j = (i+1); j < tam; j++){
            if(strcmp(vet[j].marca,vet[min].marca)<0){
            min = j;
            }
        }
                if (i != min){
                    aux = vet[i];
                    vet[i] = vet[min];
                    vet[min] = aux;
                }
            }
    }
    void SelectionSortNp(struct carro vet[], int tam){
    int i, j, min;
    struct carro aux;
    for (i = 0; i < (tam-1); i++){
        min = i;
        for (j = (i+1); j < tam; j++){
            if(strcmp(vet[j].np,vet[min].np)<0){
            min = j;
            }
        }
                if (i != min){
                    aux = vet[i];
                    vet[i] = vet[min];
                    vet[min] = aux;
                }
            }
    }
    void SelectionSortQe(struct carro vet[], int tam){
    int i, j, min;
    struct carro aux;
    for (i = 0; i < (tam-1); i++){
        min = i;
        for (j = (i+1); j < tam; j++){
            if(vet[j].qe < vet[min].qe){
            min = j;
            }
        }
                if (i != min){
                    aux = vet[i];
                    vet[i] = vet[min];
                    vet[min] = aux;
                }
            }
    }



int main(){

int op=25,n;


    printf("Informe qts carros deseja listar:\n");
    scanf("%d\n", &n);
    struct carro J[n];

        for(int i=0;i<n;i++){

            scanf("%d",&J[i].ano);
            scanf(" %[^\n]",&J[i].marca);
            scanf(" %[^\n]",&J[i].np);
            scanf("%d",&J[i].qe);

        }

        while(true){
                if(op==5)break;
    printf("______________________________\n");
    printf("Ordenacao De automoveis:\n");
    printf("1- Ordenacao por ano.\n");
    printf("2- Ordenacao por marca.\n");
    printf("3- Ordenacao por numero da placa.\n");
    printf("4- Ordenacao por qtd em estoque.\n");
    printf("______________________________\n");
        scanf("%d", &op);

    switch(op){

        case 1:
                SelectionSortAno(J,n);
                printf("Os automoveis ordenados por marca sao:\n");
                for(int j=0;j<n;j++){
                    printf("%d\n",J[j].ano);
                }
                break;

        case 2:
                SelectionSortMarca(J,n);
                printf("Os automoveis ordenados por marca sao:\n");
                for(int j=0;j<n;j++){
                   cout << J[j].marca << endl;
                }
                break;

        case 3:
                SelectionSortNp(J,n);
                printf("Os automoveis ordenados por numero da placa sao:\n");
                for(int j=0;j<n;j++){
                   cout << J[j].np << endl;
                }
                 break;

        case 4:
                SelectionSortQe(J,n);
                printf("Os automoveis ordenados por qtde de estoque sao:\n");
                for(int j=0;j<n;j++){
                    printf("%d\n",J[j].qe);

                }
                break;

        }

    }
return 0;
}
