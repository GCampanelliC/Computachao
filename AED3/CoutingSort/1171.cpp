#include<bits/stdc++.h>
using namespace std;
void CountingSort(int vet[],int tam)
{
    int output[tam];
    int maior=vet[0];

    for(int i=1; i<tam; i++){
        if(vet[i]>maior){
            maior=vet[i];
        }
    }

    int count[maior+1], i;
    memset(count, 0, sizeof(count));
    for(  i = 0;i<tam;i++)count[vet[i]]++;
    for ( i = 1; i <= maior; i++) count[i]+=count[i-1];
    for ( i = 0; i<tam; i++)
    {
        output[count[vet[i]]-1] = vet[i];
        count[vet[i]]--;
    }
    for ( i = 0; i<tam; i++) vet[i] = output[i];


}
int main(){
    int N, cont, x;
    scanf("%d",&N);
    int vetor[N];

    for(cont=0; cont<N; cont++){
        scanf("%d",&vetor[cont]);
    }

    CountingSort(vetor, N);
    int k=1;

    for(cont=0; cont<N; cont++){
        if(vetor[cont]==vetor[cont+1]){
            k++;

        }
        else{
            printf("%d aparece %d vez(es)\n",vetor[cont], k);
            k=1;
        }


   }




return 0;
}
