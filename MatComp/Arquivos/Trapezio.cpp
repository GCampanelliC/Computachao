#include<bits/stdc++.h>
using namespace std;


double f(double a){
  return 1.0 / exp(a * a);
}


int main(){
  int n = 0;
  double x, y;
  double s = 0;
  double h;
  double a;

  printf("Este programa calcula a função de e^(-x^2) no intervalo [x,y]\n");

  printf("Introduza limite inf x = ");
  scanf("%lf", &x);
  printf("Introduza limite sup y (y>x) = ");
  scanf("%lf", &y);
  printf("Introduza número de partições do intervalo (n>1) n = ");
  scanf("%d", &n);

  h = (y - x) / (n - 1);

  a = x;

  for (int i=1; i<=n-1;i++){
    s =s +f(a) + f(a + h);
    a = a + h;
  }
  s = s * h / 2;

  printf("O resultado da soma e': %lf\n", s);

  return 0;
}


