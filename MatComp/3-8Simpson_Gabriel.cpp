#include<bits/stdc++.h>
using namespace std;

double func(double x){
    double ax = (x*x) + (x*x*x);
    return ax;
}

int main(){

    printf("Esta e a Funcao (x^2+x^3): \n");
    double h,x,SomaMultiplos3,SomaNaoMultiplos3,R,xo,xn;
    int i,n;
    printf("Intervalo: ");
    cin >> n;
    printf("X0 e Xn: "); 
    scanf("%lf %lf",&xo,&xn);
    if(n==0) 
    	printf("Divisao por zero\n");
    else{
        if(n<0) 
        	printf("Intervalo invalido\n");
    }
    else{
        if(n%3!=0) 
        n =3*((n/3)+1);
        h = (xn - xo)/n;
        x = xo + h;
        SomaMultiplos3 = 0;
        SomaNaoMultiplos3 = 0;
        for(int i=1; i<n-1;i++){
            int k=func(x);
            if(i%3==0){
                SomaMultiplos3+=k;
            }
            else{
                SomaNaoMultiplos3+=k;
            }
            x+=h;
        }
        int m=func(xo);
        int t=func(xn);
        R=((3*h)/8)*((m) + (t) + (3*SomaNaoMultiplos3)+(2*SomaMultiplos3));

        printf("O resultado da Integral da funcao (x^2+x^3) eh: %lf\n",R);
    }
    }
return 0;
}
