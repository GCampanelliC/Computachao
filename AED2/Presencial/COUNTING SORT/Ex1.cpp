#include <bits/stdc++.h>
    using namespace std;

    void CountingSort(char vet[],int tam){
    char output[tam];
    int count[256], i; // vetor de contadores
        memset(count, 0, sizeof(count)); //zera o vetor
        for(i = 0;i<tam;i++)count[vet[i]]++;//incrementa
        for (i = 1; i <= 256; i++) count[i]+=count[i-1];
        for (i = 0; i<tam; i++)
        {
        output[count[vet[i]]-1] = vet[i];
        count[vet[i]]--;
        }
        for (i = 0; i<tam; i++) vet[i] = output[i];
    }

int main(){

       char a[1000];
        int x;
                scanf("%s", &a);
            CountingSort(a,strlen(a));

            printf("%s\n",a);


return 0;
}
