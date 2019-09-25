#include <bits/stdc++.h>

int fatorial(int);


int main(){
    int fat;
    int n;
    scanf("%d", &n);

    fat=fatorial(n);

    printf("O fatorial desse numero e: %d\n", fat);

    return 0;

}
int fatorial(int N){

  int a=0,m=1;

    for(a=N;a>=1;a--){
        m*=a;
}
  return m;
}
