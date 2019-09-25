#include<bits/stdc++.h>

using namespace std;

struct alunos{
    int matricula;
    char nome[30], endereco[50], curso[15];
}s[50];


int main(){
    FILE *ff;
    int a=0;
    for(;;){
        printf("1 - Inserir Aluno.\n");
        printf("2 - Gravar alunos e sair.\n");

        int x;
        scanf("%d",&x);

        switch(x){
        case 1:

            ff = fopen("mat.dat", "wb+");
            printf("Matricula: ");
            scanf("%d",&s[a].matricula);
            printf("\n Nome: ");
            scanf(" %[^\n]",s[a].nome);
            printf("\n Endereco: ");
            scanf(" %[^\n]",s[a].endereco);
            printf("\n Curso: ");
            scanf(" %[^\n]",s[a].curso);
            printf("\n");

             a++;
            break;

         case 2:
             printf("Gravando no arquivo mat.dat\n");
             fwrite(&s, sizeof(struct alunos), a, ff);

            break;
        }
        fclose(ff);
    }


    return 0;
}
