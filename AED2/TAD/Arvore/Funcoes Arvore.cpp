#include <bits/stdc++.h>

struct no
{
struct no *esq;
struct no *dir;
char dado;
};
typedef struct no *Arvore;


void insertNode(Arvore *t, char d)
{
    if (*t == NULL)
    {
        *t = (struct no*) malloc(sizeof(struct no));
            if ( *t != NULL )
            {
                (*t)->esq = NULL;
                (*t)->dir = NULL;
                (*t)->dado = d;
            }
            else
                printf("Memoria insuficiente");
            }
            else
                if (d < (*t)->dado)
                    insertNode(&(*t)->esq, d);
                else
                    if (d > (*t)->dado)
                        insertNode(&(*t)->dir, d);
                    else
                        printf("Duplicação de no");
}

int ContaNos(Arvore t)
{
    if (t == NULL)
       return 0;
    return ContaNos(t->esq) + ContaNos(t->dir) + 1;
}

int Altura(Arvore t)
{
    int u, v;
    if (t == NULL)
       return -1;
    u = Altura(t->esq);
    v = Altura(t->dir);
    if (u > v)
       return u+1;
    else
        return v+1;
}

int ContaFolhas(Arvore t)
{
	if(t==NULL)
	   return 0;
    if (t->esq == NULL && t->dir == NULL )
       return 1;
    else
        return  ContaFolhas(t->esq) + ContaFolhas(t->dir);
}


void preOrder(Arvore t)
{
    if (t != NULL)
    {
        printf("%c", t->dado);
        preOrder(t->esq);
        preOrder(t->dir);
    }
}


void inOrder(Arvore t)
{
    if (t != NULL)
    {
        inOrder(t->esq);
        printf("%c", t->dado);
        inOrder(t->dir);
    }
}


void posOrder(Arvore t)
{
    if (t != NULL)
    {
        posOrder(t->esq);
        posOrder(t->dir);
        printf("%c", t->dado);
    }
}


int main()
{
    Arvore A = NULL;
    insertNode(&A, 'A');
    insertNode(&A, 'C');
    insertNode(&A, 'B');
    insertNode(&A, 'D');
        printf("Pre-Ordem \n");
        preOrder(A);
        printf("\nIn-Ordem \n");
        inOrder(A);
        printf("\nPos-Ordem \n");
        posOrder(A);
    getchar();
}
