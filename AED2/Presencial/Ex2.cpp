#include <bits/stdc++.h>

using namespace std;

struct corredores {
int cod,minu,segu,total;
char nome[20];

};

void SelectionSortCod(struct corredores vet[], int tam){
    int i, j, min;
    struct corredores aux;
    for (i = 0; i < (tam-1); i++){
        min = i;
        for (j = (i+1); j < tam; j++){
            if(vet[j].cod < vet[min].cod){
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
void SelectionSortNom(struct corredores vet[], int tam){
    int i, j, min;
    struct corredores aux;
    for (i = 0; i < (tam-1); i++){
        min = i;
        for (j = (i+1); j < tam; j++){
            if(strcmp(vet[j].nome , vet[min].nome)<0){
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
void SelectionSortFin(struct corredores vet[], int tam){
    int i, j, min;
    struct corredores aux;
    for (i = 0; i < (tam-1); i++){
        min = i;
        for (j = (i+1); j < tam; j++){
            if(vet[j].total < vet[min].total){
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

int op=36;

    struct corredores C[2];

        for(int i=0;i<2;i++){

            scanf("%d",&C[i].cod);
            scanf(" %[^\n]",&C[i].nome);
            scanf("%d",&C[i].minu);
            scanf("%d",&C[i].segu);

           C[i].total = ((C[i].minu*60)+ C[i].segu);

        }

        while(true){
                if(op==4)break;
    printf("______________________________\n");
    printf("Corredores:\n");
    printf("1- Ordenacao por Codigo.\n");
    printf("2- Ordenacao por Nome.\n");
    printf("3- Resultado final.\n");
    printf("4- Sair.\n");
    printf("______________________________\n");
        scanf("%d", &op);

    switch(op){

        case 1:
                SelectionSortCod(C,2);
                printf("Os Corredores ordenados por Codigo:\n");
                for(int j=0;j<2;j++){
                    printf("%d\n",C[j].cod);
                }
                break;

        case 2:
                SelectionSortNom(C,2);
                printf("Os Corredores ordenados por Nome:\n");
                for(int j=0;j<2;j++){
                   cout << C[j].nome << endl;
                }
                break;

        case 3:
             SelectionSortNom(C,2);
            SelectionSortFin(C,2);
                printf("Resultado Final:\n");
                for(int j=0;j<2;j++){
                cout << C[j].nome << ":";
                   printf(" %d : %d\n",C[j].total/60,C[j].total%60);
                }
                break;


        }
    }
return 0;
}
