
    struct no{
        int dado;
        struct no *prox;
    };

    typedef struct{
        struct no *topo;
    }pilha;


int contaNos(pilha s)
{
   struct no *aux = s.topo;
   int c=0;
   if(aux==NULL) return 0;
   do
   {
   	   c++;
   	   aux = aux->prox;
   }
   while(aux!=NULL);
   return c;
}

int somaNos(pilha s)
{
   struct no *aux = s.topo;
   int soma=0;
   if(aux==NULL) return 0;
   do
   {
       soma = soma + aux->dado;
       aux = aux->prox;
   }while(aux!=NULL);
   return soma;
}

int ultimoValor(pilha s)
{
   struct no *aux = s.topo;
   int c=0;
   if(aux==NULL) return 0;
   do
   {
   	   c++;
   	   aux = aux->prox;
   }
   while(aux->prox!=NULL);
   return aux->dado;
}

int penultimoValor(pilha s)
{
   struct no *aux = s.topo;
   int c=0;
   if(aux==NULL) return 0;
   do
   {
   	   c++;
   	   aux = aux->prox;
   }
   while(aux->prox->prox!=NULL);
   return aux->dado;
}

int primeiroValor(pilha s)
{
   struct no *aux = s.topo;
   int c=0;
   if(aux==NULL) return 0;
   else
   return aux->dado;
}

int segundoValor(pilha s)
{
   struct no *aux = s.topo;
   int c=0;
   if(aux->prox==NULL) return 0;
   else
   return aux->prox->dado;
}
void create(pilha *s)
{
s->topo=NULL;
}

int push(pilha *s, int d){
    struct no *aux;
    aux=(struct no *)malloc(sizeof(struct no));
    if(aux==NULL) return (false);
        aux->dado = d;
        aux->prox = s->topo;
        s->topo=aux;
    return(true);
}

int pop(pilha *s, int *d){
    struct no *aux;
    if(s->topo==NULL) return (false);
        aux = s->topo;
        s->topo = (s->topo)->prox;
        *d = aux->dado;
    free(aux);
    return(true);
}

bool isEmpty(pilha s){
    if(s.topo==NULL)return true;
    return false;
}
int te(pilha s)
{
    struct no *aux = s.topo;
    return aux->a;
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

