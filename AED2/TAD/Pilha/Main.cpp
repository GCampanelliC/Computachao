#include<bits/stdc++.h>

using namespace std;
struct no{
    char n;
    struct no *prox;
};

struct pilha{
    struct no *topo;
};

void create(pilha *s){
    s->topo=NULL;
}

void push(pilha * s, char d){
	struct no *aux;
	aux=(struct no *)malloc(sizeof(struct no));
	if(aux==NULL)return ;
	aux->n=d;
	aux->prox = s->topo;
	s->topo=aux;
}

void pop(pilha *s){
	struct no *aux;
	if(s->topo==NULL)return ;
	aux=s->topo;
	s->topo = (s->topo)->prox;
	free(aux);
}

bool isEmpty(pilha s){
    if(s.topo==NULL)return true;
    return false;
}

void pt(pilha s,char q[]){
	struct no *aux = s.topo;
	q[0]=aux->n;
	aux=aux->prox;
	q[1]=aux->n;
	aux=aux->prox;
	q[2]=aux->n;
	aux=aux->prox;
	q[3]=aux->n;
	q[4]='\0';

}

int main(){
	int a,s=0;
	pilha p;
	create(&p);
	scanf("%d",&a);
	while(a--){
		char N1[10],N2[5];
		scanf(" %[^\n]",N1);
		if(isEmpty(p)){


            push(&p,'F');
            push(&p,'A');
            push(&p,'C');
            push(&p,'E');
        }

    N2[0]=N1[0];
    N2[1]=N1[2];
    N2[2]=N1[4];
    N2[3]=N1[6];
    N2[4]='\0';

      pt(p,N1);

if(strcmp(N1,N2)==0){
			pop(&p);
			pop(&p);
			pop(&p);
			pop(&p);
			s++;
		}
		else{
            push(&p,N2[0]);
            push(&p,N2[1]);
            push(&p,N2[2]);
            push(&p,N2[3]);
		}

	}
	printf("%d\n",s);
	return 0;
}
