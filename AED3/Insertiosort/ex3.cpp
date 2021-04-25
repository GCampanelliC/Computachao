#include<bits/stdc++.h>
using namespace std;

typedef struct {
double nota1,nota2,media;
char nome[50];

}alunos;

void InsertionSortNota1(alunos vet[], int tam){
	int i, j;
	alunos eleito;
	for (i = 1; i < tam; i++){
		eleito = vet[i];
		j = i- 1;
	while ((j>=0) && (eleito.nota1 < vet[j].nota1)){
		vet[j+1] = vet[j];
		j--;
	}
	vet[j+1] = eleito;
	}
}


void InsertionSortNome(alunos vet[], int tam){
	int i, j;
	alunos eleito;
	for (i = 1; i < tam; i++){
		eleito = vet[i];
		j = i- 1;
	while ((j>=0) && (strcmp(eleito.nome,vet[j].nome)<0)){
		vet[j+1] = vet[j];
		j--;
	}
	vet[j+1] = eleito;
	}
}
void InsertionSortMed(alunos vet[], int tam){
	int i, j;
	alunos eleito;
	for (i = 1; i < tam; i++){
		eleito = vet[i];
		j = i- 1;
	while ((j>=0) && (eleito.media < vet[j].media)){
		vet[j+1] = vet[j];
		j--;
	}
	vet[j+1] = eleito;
	}
}

int main(){
    int op=0,cont=0;
    alunos A[8];
    int c,ii=-1;
    printf("cadastre os alunos\n");
        for(int i=0;i<8;i++){
                printf("Informe o aluno:\n");
                scanf(" %[^\n]", &A[i].nome);
                printf("Informe a primeira nota de 1 a 10:\n");
                scanf("%lf", &A[i].nota1);
                printf("Informe a segunda nota de 1 a 10:\n");
                scanf("%lf", &A[i].nota2);
                A[i].media=((A[i].nota1*2)+(A[i].nota2*3))/5;
        }
    while(true){

                if(op==4)break;
          printf("------------------------\n");
          printf("Alunos\n");
          printf("1 - Ordenar as Médias dos alunos conforme os pesos 2 e 3\n");
          printf("2 - Listar os alunos em ordem crescente com base na Nota 1\n");
          printf("3 -  Listar em ordem alfabética os alunos reprovados.\n");
          printf("4- Sair\n");
          printf("------------------------\n");
        scanf("%d", &op);


     if(op==1){
                InsertionSortMed(A,8);
                printf("MEDIA DOS ALUNOS: \n");
                    for(int i=0;i<8;i++){
                        printf("%s : %.lf\n", &A[i].nome, &A[i].media);
                        printf("\n");
                    }
     }
     if(op==2){
                InsertionSortNota1(A,8);
                printf("Alunos em ordem da primeira nota: \n");
                    for(int i=0;i<8;i++){
                        printf("%s : %.1lf\n", &A[i].nome, &A[i].nota1);
                        printf("\n");
                    }
     }
    if(op==3){
                printf("Alunos Reprovados: \n");
                InsertionSortNome(A,8);
                for(int i=0;i<8;i++){
                        if(A[i].media < 7.0){
                            printf("Aluno: %s Nota: %.1lf\n",A[i].nome,A[i].media);
                        }
                    }

    }
    }
return 0;
}


