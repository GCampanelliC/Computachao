#include<bits/stdc++.h>]
using namespace std;
void CountingSort(int vet[],int tam)
{
    int output[tam];



    int *count, i;
    count=(int *)calloc(3000000,sizeof(int));

    for(  i = 0;i<tam;i++)count[vet[i]]++;
    for ( i = 1; i <=3000000; i++) count[i]+=count[i-1];
    for ( i = 0; i<tam; i++)
    {
        output[count[vet[i]]-1] = vet[i];
        count[vet[i]]--;
    }
    for ( i = 0; i<tam; i++) vet[i] = output[i];
        free(count);

}
int main(){
    int i, n, j;
    int C, ii=0;
    scanf("%d",&C);

    while(C--){
        scanf("%d", &n);
        int *vetor;
        vetor=(int *)malloc(300000*sizeof(int));

        for(j=0; j<n; j++){
        scanf("%d",&vetor[j]);

        }
        CountingSort(vetor,n);

        for(i=0;i<n-1;i++){
            printf("%d ",vetor[i]);

        }
            printf("%d\n",vetor[i-1]);


    }
        free(vetor);

    return 0;
}
