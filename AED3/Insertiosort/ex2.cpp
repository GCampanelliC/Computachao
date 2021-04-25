#include<bits/stdc++.h>
using namespace std;

typedef struct {
int cod;
char tipo[50],desc[50];
double preco;

}prod;

void InsertionSortTipo(prod vet[], int tam){
	int i, j;
	prod eleito;
	for (i = 1; i < tam; i++){
		eleito = vet[i];
		j = i- 1;
	while ((j>=0) && (strcmp(eleito.desc,vet[j].desc)<0)){
		vet[j+1] = vet[j];
		j--;
	}
	vet[j+1] = eleito;
	}
}
void InsertionSortCod(prod vet[], int tam){
	int i, j;
	prod eleito;
	for (i = 1; i < tam; i++){
		eleito = vet[i];
		j = i- 1;
	while ((j>=0) && (eleito.cod < vet[j].cod)){
		vet[j+1] = vet[j];
		j--;
	}
	vet[j+1] = eleito;
	}
}

int main(){
    int op=0,cont=0;
    prod p[1000];
    int c,ii=-1;
    while(true){

                if(op==5)break;
          printf("------------------------\n");
          printf("Produtos\n");
          printf("1 - Cadastrar produto na Lista\n");
          printf("2 - Consultar produtos por Tipo\n");
          printf("3 - Consultar produtos por Codigo\n");
          printf("4 - Remover item da Lista\n");
          printf("5 - Sair\n");
          printf("------------------------\n");
        scanf("%d", &op);


     if(op==1){

                    scanf("%d", &p[cont].cod);
                    cin >> p[cont].desc ;
                    cin >> p[cont].tipo;
                    scanf("%lf", &p[cont].preco);

                    cont++;

                    }
    if (op==2){

          InsertionSortTipo(p,cont);
          string tt;
            cin >> tt;
            for(int i=0; i<cont;i++){
                printf("Codigo: %d\n",p[i].cod);
					printf("Tipo: %s\n",p[i].desc);
					printf("Descricao: %s\n",p[i].tipo);
					printf("Preco: %.2lf\n",p[i].preco);
					printf("\n");
                }
            }


    if(op==3){
            InsertionSortCod(p,cont);
          int a;
          cin >> a;
            for(int i=0; i<cont;i++){
                printf("Codigo: %d\n",p[i].cod);
					printf("Tipo: %s\n",p[i].desc);
					printf("Descricao: %s\n",p[i].tipo)/
					printf("Preco: %.2lf\n",p[i].preco);
					printf("\n");
                }
            }


    if(op==4){

            printf("Informe qual item da lista deseja remover pelo seu codigo");
            scanf("%d", &c);
                for(int j=0;j<cont;j++){
                    if(c==p[j].cod){
                        ii=j;
                    }
                }
                    if(c==-1){
                        printf("Codigo Inválido\n");
                    }
                    else{
                        for(int i=ii;i<cont-1;i++){
                        p[i].cod=p[i+1].cod;
                        strcpy(p[i].desc,p[i+1].desc);
						strcpy(p[i].tipo,p[i+1].tipo);
						p[i].preco=p[i+1].preco;
                        }
                        cont--;
                    }
    }

    }
    return 0;

}

