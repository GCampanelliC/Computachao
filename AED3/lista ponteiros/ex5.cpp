#include <bits/stdc++.h>

using namespace std;
long long int calc(long long int *a,long long int *b){

        long long int sum = *a+*b;
        long long int mul = *a * *b;

    if((sum>INT_MAX) || (mul>INT_MAX)){
        return -1;
    }
    else if(*a==*b){
        return 1;
    }
    else if(*a!=*b){
        return 0;
    }

}



int main(){

long long int a,b,x;
    scanf("%lld%lld", &a, &b);

    x = calc(&a,&b);

    if(x==1){
        printf("Sao Iguais\n");
    }
    else if(x==0){
        printf("Sao Diferentes\n");
    }
    else if(x==-1){
        printf("Soma ou o produto estoura a faixa dos inteiros\n");
    }

    printf("%lld\n", a+b);
    printf("%lld\n", a*b);

return 0;
}
