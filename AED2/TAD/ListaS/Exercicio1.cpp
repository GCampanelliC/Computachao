#include<bits/stdc++.h>
#include<bits/stdc++.h>
#define TRUE 1
#define FALSE 0
struct no
{
int dado;
struct no *prox;
};
typedef struct
{
struct no *inicio;
} lista;
void create(lista *q)
{
		q->inicio=NULL;
}
int isEmpty(lista q)
{
	if (q.inicio==NULL)
		return TRUE;
	else
		return FALSE;
}

int insertinicio(lista *q, int d)
{
	struct no *aux, *atual, *anterior;
	aux = (struct no *) malloc(sizeof(struct no));
	if (aux!=NULL)
	{
		aux->dado=d; aux->prox=NULL;
		anterior = NULL; atual = q->inicio;
		aux->prox=atual;
		q->inicio=aux
		}
	}
}

	void imprime(lista q)
	{
		struct no *aux;
		aux = q.inicio;
		if (!isEmpty(q))
		{
			while (aux != NULL)
			{
				printf("%d ", aux->dado);
				aux = aux->prox;
			}
		}
	}

	int remover(lista *q, int d)
	{
		struct no *aux, *atual, *anterior;
		if (d == (q->inicio)->dado)
		{
			aux = q->inicio;
			q->inicio = (q->inicio)->prox;
			free(aux); return(TRUE);
		}
	else
	{
		anterior = q->inicio;
		atual = (q->inicio)->prox;
		while (atual != NULL && atual->dado != d)
	{
		anterior = atual;
		atual = atual->prox;
	}
	if (atual != NULL)
	{
		aux = atual;
		anterior->prox = atual->prox;
		free(aux);
		return(TRUE);
		}
	}
}













printf("1. Inserir no Inicio\n");
printf("2. Inserir no Meio\n");
printf("3. Inserir no Fim\n");
printf("4. Retirar do Inicio\n");
printf("5. Retirar do Meio\n");
printf("6. Retirar do Fim\n");
printf("7. Buscar\n");
printf("8. Imprimir");

int c=0;
scanf("%d",c);
lista casos;
create(&casos);
switch(c){
	case 1:
		int num;
		printf("Digite o Numero\n");
		scanf("%d",&scanf);
		insertinicio(&casos,num);
	}
