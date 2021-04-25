#include <bits/stdc++.h>


void InsertionSort(int vet[], int tam){
int i, j;
    int eleito;
    for (i = 1; i < tam; i++){
    eleito = vet[i];
    j = i- 1;
        while ((j>=0) && (eleito < vet[j])){
                vet[j+1] = vet[j];
                j--;
        }
                    vet[j+1] = eleito;
            }
}
void InsertionSort2(int vet[], int tam){
int i, j;
    int eleito;
    for (i = 1; i < tam; i++){
    eleito = vet[i];
    j = i- 1;
        while ((j>=0) && (eleito > vet[j])){
                vet[j+1] = vet[j];
                j--;
        }
                    vet[j+1] = eleito;
            }
}

int main(){

int v[10],w[10],op;

    for(int i=0;i<10;i++){
        scanf("%d", &v[i]);
        w[i] = v[i];
    }

    while(true){

                if(op==3)break;
          printf("------------------------\n");
          printf("1 - O maior valor e quantas vezes apareceu\n");
          printf("2 - O menor valor e quantas vezes apareceu\n");
          printf("3 - sair\n");
          printf("------------------------\n");
        scanf("%d", &op);


     if(op==1){
          int maior=v[0],a=0,b=0;
          InsertionSort(v,10);
                for(int i=0;i<10;i++){
                    if(v[i]>maior){
                        maior = v[i];
                    }
                }
                for(int j=0;j<10;j++){
                    if(maior>v[j]){
                        a=0;
                    }
                    else{
                        a++;
                    }
                }
                if(a>1){
                    printf("Nao tem maior\n");
                }
                else{
                printf("O maior numero e %d\n", maior);
                }
                    for(int i=0;i<10;i++){
                    if(maior==v[i]){
                      b++;
                    }
                }
                printf("Aparece %d vezes\n", b);

     }
    if (op==2){
          int menor=w[10],c=0,d=0;
          InsertionSort2(w,10);
                for(int i=0;i<10;i++){
                    if(w[i]<menor){
                        menor = w[i];
                    }
                }
                for(int j=0;j<10;j++){
                    if(menor <w[j]){
                        c=0;
                    }
                    else{
                        c++;
                    }
                }
                if(c>1){
                    printf("Nao tem menor\n");
                }
                else{
                printf("O menor numero e %d\n", menor);
                }
                    for(int i=0;i<10;i++){
                    if(menor==w[i]){
                      d++;
                    }
                }
                printf("Aparece %d vezes\n", d);


          }

    }

return 0;

}
