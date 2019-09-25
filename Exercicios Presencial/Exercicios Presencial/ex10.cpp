#include<bits/stdc++.h>

using namespace std;

double v[10];
vector<string>nom;


void media(double et[10][4]){

    for(int i=0;i<10;i++){
        double me=0;
        for(int j=0;j<4;j++){
            me+=et[i][j];
        }
        v[i]=me/4;

        printf("Media aritmetica de %s eh: %.2lf\n",nom[i].c_str(),me/4);
    }

}
void recupera(double vet[10][4]){
    for(int i=0;i<10;i++){
        if(v[i]<6)
          printf("Aluno %s reprovado.", nom[i]);
    }
}
int main(){
    double v[10][4];
    char veto[1000];

    for(int i=0;i<10;i++){
        scanf("%[^\n]",veto);
        getchar();
        nom.push_back(veto);
        for(int j=0;j<4;j++){
        scanf("%lf",&v[i][j]);
        getchar();
        }
    }

        media(v);
        recupera(v);
    return 0;
}
