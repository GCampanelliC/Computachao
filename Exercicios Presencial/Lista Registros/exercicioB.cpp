#include <bits/stdc++.h>


struct medico{
    int idade[4],dia,mes,ano;
    char nomeMed[60], nome[50];

};

int main(){
    char med;
    double consult;
    struct medico M[5];
        for(int i=0;i<5;i++){
            scanf("%s", &M[i].nome);
            scanf("%d", &M[i].idade);
            scanf("%s", &M[i].nomeMed);
            scanf("%d%d%d", &M[i].dia,&M[i].mes,&M[i].ano);
        }
            scanf("%s", &med);
        for(int j=0;j<5;j++){

                if(strcmp((M[j].nomeMed,med)==0)){
                        if(M[j].idade>=60){
                            consult = 200*0.20;
                            printf("O %s será atendido no dia %d / %d / %d com o valor de R$ %1.lf\n ", M[j].nome,&M[j].dia,&M[j].mes,&M[j].ano, consult);
                        }
                        else if(M[j]<60){
                            printf("O %s será atendido no dia %d / %d / %d com o valor de R$ 200,00. \n", M[j].nome,&M[j].dia,&M[j].mes,&M[j].ano);
                        }

                }
        }


return 0;
}
