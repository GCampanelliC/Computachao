#include <bits/stdc++.h>
using namespace std;

typedef double funcao(double x);

double f1(double x){
   double y;
   y = x*x*x*x;
   return(y);
}

double f2(double x){
   double y;
   y = x*x*x - x*x;
   return y;
}
double f3(double x){
   double y;
   y = 2*x*x*x*x*x*x*x*x*x;
   return y;
}
double Simpson(double a, double b, funcao *func){
   double SUM;
   double c;
   double h;
   int N =5;
   int k;

   SUM=func(a);
   c=2;
   h=(b-a)/N;
   while (k <= N-1){
      c=6-c;
      SUM = SUM + c*func(a+k*h);
      k++;
   }
   SUM = (SUM + func(b))*h/3;
   return SUM;
}


int main(){
   double i1;
   double i2;
   double Integral;

printf("Funcao 2: x^3-x^2\n");


   printf("Digite o valor de X1 do intervalo de integracao:\n");
   scanf("%lf",&i1);
   printf("Digite o valor de X2 (maior que X1) do intervalo de integracao:\n");
   scanf("%lf",&i2);

   printf("Funcao (x^3-x^2):\n");
   Integral = Simpson(i1,i1,f2);
   printf("Area: %lf\n", Integral);

   return 0;
}
