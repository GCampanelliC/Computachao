#include <bits/stdc++.h>

int fatorial(int N){

  int a=0,m=1;

    for(a=N;a>=1;a--){
        m*=a;
}
  return m;
}

double calc(int N){

  double s=1;
    for(int i=1; i<=N; i++){
        s += (1.0/fatorial(i));
    }


  return s;
}


int main(){
    double c,r;
    int n;
    scanf("%d", &n);

    c=calc(n);

    printf("%.2lf\n", c);

    return 0;

}


