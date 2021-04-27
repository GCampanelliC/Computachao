#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,IterMax,Iterac;
    double Tolerancia,Soma,DifMax,r,Norma1,Norma2,Erro;
    
    printf("Entre com a Ordem da Matriz: ");
    scanf("%d",&n);
    double Vet[n][n], b[n],x[n],v[n];

    printf("Digite a Matriz com o quoeficiente dado: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%lf",&Vet[i][j]);
        }

        scanf("%lf",&b[i]);
    }
    printf("Qual a Tolerância? \n");
    scanf("%lf",&Tolerancia);
    printf("Qual o número máximo de iterações? \n");
    scanf("%d",&IterMax);


    //Convergencia
    int ii,som=0,lin=0,col=0,perm;
    int aux[n][n],Va[n];
    while(lin<n) {
        ii=Vet[lin][col];
        perm=col;
        for(int i=0;i<n;i++){
                if(i!=perm) som+=Vet[lin][i];
        }
        if(ii>=som){
            for(int i=0;i<n;i++)
            aux[perm][i]=Vet[lin][i];
            Va[perm]=b[lin];
            lin++;
            col=0;
            som=0;
        }
        else
        {
            col++;
            som=0;
        }
}
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            Vet[i][j]=aux[i][j];
        }
        b[i]=Va[i];
    }

    //
    for(int i=0;i<n;i++){
        r = 1/Vet[i][i];
        for(int j=0;j<n;j++){
            if(i!=j){
                Vet[i][j]=Vet[i][j] * r;
            }
        }
        b[i]=b[i]*r;
        x[i]=b[i];
    }
    Iterac=0;
    //Iterações de Jacobi
     while(true){
        Iterac++;

        for(int i=0;i<n;i++){
            int soma=0;
            for(int j=0;j<n;j++){
                if(i!=j) soma=soma + Vet[i][j]*x[j];
            }
            v[i]=b[i]-soma;
        }
        Norma1 = 0;
        Norma2 = 0;
        for(int i=0;i<n;i++){
            if(abs(v[i]-x[i]) > Norma1) Norma1 = abs(v[i]-x[i]);
            if(abs(v[i]) > Norma2) Norma2 = abs(v[i]);
            x[i] = v[i];
        }
        DifMax = Norma1/Norma2;

        printf("\nIteracao %d: \n",Iterac);
        for(int i=0;i<n;i++)
        printf(" X%d = %.4lf | ",i+1,x[i]);
        printf(" | DifMax = %.4lf\n",DifMax);

        //Teste de Convergencia
        if(DifMax < Tolerancia || Iterac >= IterMax) break;

    }
    Erro = DifMax;
    printf("\n\nResultado : ");
     for(int i=0;i<n;i++)
        printf(" X%d = %.4lf | ",i+1,x[i]);
        printf("\nNum de iteracoes: %d\n",Iterac);
        printf("Erro atingido: %.4lf\n",Erro);

    return 0;
}
