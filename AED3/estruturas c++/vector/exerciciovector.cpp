#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, aux=0, yo, soma=0, a=-1 , c=0,pp;
    vector <int> vet;
    vector <int>:: iterator it;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &yo);
        vet.push_back(yo);
    }
    pp=vet.size()-1;
    for (int i=0; i<vet.size(); i++)
    {
        soma += vet[i];
        if(soma<a&&soma>0) aux++;
        else aux=0;
        a = max(a, soma);

        if(soma < 0){
            c=i+1;
            soma = 0;
        }
    }
    pp-=aux;
    for(int i=c;i<=pp;i++)
    {
        printf("%d ",vet[i]);
    }
    printf("\n");
    return 0;
}
