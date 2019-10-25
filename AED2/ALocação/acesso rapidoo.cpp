#include<bits/stdc++.h>
using namespace std;

void Bubble(int vet[], int t){
int aux;

for(int i = 0; i < t-1; i++)
        {
            for(int j = t-1; j > i; j--)
            {
                if ( vet[j]<vet[j-1])
                {

                    aux=vet[j];
                    vet[j]= vet[j-1];
                    vet[j-1]=aux;
                }
            }
        }

}

int main(){
   int a,d,b[11],c[11];



    do{
        scanf("%d %d", &a, &d);

        if(a!=0 && d!=0)
        {

        for(int i=0; i<a; i++)
        {
            scanf("%d", &b[i]);

        }
        for(int i=0; i<d; i++)
        {
            scanf("%d", &c[i]);

        }
        Bubble(b,a);
        Bubble(c,d);

        if(b[0]<c[1]){
            printf("Y\n");
        }
        else{
            printf("N\n");
        }

        }
    }while(a!=0 && d!=0);


    return 0;
}
