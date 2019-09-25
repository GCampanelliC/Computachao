#include <bits/stdc++.h>

double verif(double vet[], double B){

  int i=0;
  double c=0;
    for(i=0;i<12;i++){

        if(vet[i]==B){
          c=1;
    }
}
  return c;

}


int main(){
    double V[12],Y,a;
    int i;

    for(i=0;i<12;i++){
    scanf("%lf", &V[i]);
    }

    scanf("%lf", &Y);

    a=verif(V,Y);

    if(a==1){
        printf("Esta no vetor\n");
    }
    else if(a==0){
        printf("Nao esta no vetor\n");
    }

    return 0;
}



