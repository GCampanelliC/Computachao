#include<bits/stdc++.h>
#include <locale.h>
using namespace std;
struct cat{
    int  cpf,cod;
    char nome[50],endereco[50],nomeg[50],raca[10];

};
FILE *fp;
int main()
{
    cat g[100];
    int op,qtd;
    qtd=0;
    if ((fp=fopen("cat.dat", "rb")) == NULL)
    {
        printf("Voce nao tem uma base de dados.\nSelecione Cadastrar Cats para iniciar uma Base de Dados\n");
        system("pause");
        system("cls");
    }else
    {
        while(!feof(fp))
        {
            fread(&g[qtd],sizeof(struct cat),1,fp);
            if(feof(fp))break;
            qtd++;
        }
        fclose(fp);
    }
    do
    {
printf("                                                                                        \n");
printf("             MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNNmmddddddmmNNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
printf("             MMMMMMMMMMMMMMMMMMMMMMMMMMMMMmdhyyyyyyyyyyyyyyyyhdmMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
printf("             MMMMMMMMMMMMMMMMMMMMMMMMMMmdyyyyyyyyyyyyyyyyyyyyyyyydmMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
printf("             MMMMMMMMMMMMMMMMMMMMMMMMmdhhhhhyyyyyyyyyyyyyyyyyyyyyyyhmMMMMMMMMMMMMMMMMMMMMMMMM\n");
printf("             MMMMMMMMMMMMMMMMMMMMMMmdddNMMMNNNmmddhhhyyyyyyyyyyyyyyyyhmMMMMMMMMMMMMMMMMMMMMMM\n");
printf("             MMMMMMMMMMMMMMMMMMMMMmmMMNmmmmmmmNNNMMMNNmdhhyyyyyyyyyyyyydMMMMMMMMMMMMMMMMMMMMM\n");
printf("             MMMMMMMMMMMMMMMMMMMMdNMMMMMMMMMMMMMMMMMMMMNmdmdhyyyyyyyyyyydMMMMMMMMMMMMMMMMMMMM\n");
printf("             MMMMMMMMMMMMMMMMMMMdNMMMMMMMMMMNMMMMMMMMMMMMmhhmdyyyyyyyyyyydMMMMMMMMMMMMMMMMMMM\n");
printf("             MMMMMMMMMMMMMMMMMMNdMMMMMMMMNmmNNMMMMMMMMMMMMNmdmmdhyyyyyyyyyNMMMMMMMMMMMMMMMMMM\n");
printf("             MMMMMMMMMMMMMMMMMMdNMMMMMMNdmMMMMMMMMMMMMMMMMMMMMNMMNdhhyyyyydMMMMMMMMMMMMMMMMMM\n");
printf("             MMMMMMMMMMMMMMMMMMdMMMMMMMhNMMMMMMMMMMMMMMMMMMMMMMMMMMMNmhyyydMMMMMMMMMMMMMMMMMM\n");
printf("             MMMMMMMMMMMMMMMMMMdMMMMMMNhMMMMMMMMMMMMNdddddmNNMMMMMMMMMMmhydMMMMMMMMMMMMMMMMMM\n");
printf("             MMMMMMMMMMMMMMMMMMdNMMMMMMhMMMMMMMMMMMmyyyyyyyyhhdNMMMMMMMMNhdMMMMMMMMMMMMMMMMMM\n");
printf("             MMMMMMMMMMMMMMMMMMNdMMNNmmhdMMMMMMMMMMhyyyyyyyyyyyyhmMMMMMNyyNMMMMMMMMMMMMMMMMMM\n");
printf("             MMMMMMMMMMMMMMMMMMMdmdhyyyyydNMMMMMMMMdyyyyyyyyyyyyyyNMMMNhydMMMMMMMMMMMMMMMMMMM\n");
printf("             MMMMMMMMMMMMMMMMMMMMdyyyyyyyyyhdmNMMMMNyyyyyyyyyyyyyhMMNhhydMMMMMMMMMMMMMMMMMMMM\n");
printf("             MMMMMMMMMMMMMMMMMMMMMdyyyyyyyyyyyhdNMMMmhyyyyyyyyyyhNNdhyydMMMMMMMMMMMMMMMMMMMMM\n");
printf("             MMMMMMMMMMMMMMMMMMMMMMmhyyyyyyyhdyyhMMMMNdyyyyyyyyhdhyyyhmMMMMMMMMMMMMMMMMMMMMMM\n");
printf("             MMMMMMMMMMMMMMMMMMMMMMMMmhyyyyyyhmmmMMMMMMNmmddhyyyyyyhmMMMMMMMMMMMMMMMMMMMMMMMM\n");
printf("             MMMMMMMMMMMMMMMMMMMMMMMMMMmdyyyyyydmMMMMMMMMNhyyyyyydmMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
printf("             MMMMMMMMMMMMMMMMMMMMMMMMMMMMMmdhyyyyyhddddhyhyyyhdmMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
printf("             MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMNNmmddddddmmNNMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM\n");
printf("          --------------------------------------------------------------------------------------\n");
printf("          --------------------------------------------------------------------------------------\n");
printf("          --------------                THUNDER POWER GATOS                      ---------------\n");
printf("          --------------------------------------------------------------------------------------\n");
printf("          --------------------------------------------------------------------------------------\n");



printf("                                                                                                             \n");
printf("                                                                                                             \n");
printf("                                                                                                             \n");
printf("      ***************************************************************************************************\n");
printf("      *****************               THUNDER POWER GATOS - Petshop                      ****************\n");
printf("      ***************************************************************************************************\n");
printf("      **************  1- Cadastrar       *******************  2 - Alterar                ****************\n");
printf("      ***************************************************************************************************\n");
printf("      **************  3 - Excluir        *******************  4 - Consultar              ****************\n");
printf("      ***************************************************************************************************\n");
printf("      ************************************    5 - Relatorio        **************************************\n");
printf("      ***************************************************************************************************\n");
printf("      ************************************    6 - Sair             **************************************\n");
printf("      ***************************************************************************************************\n");


scanf("%d",&op);
        if(op==1)
        {
            if ((fp=fopen("cat.dat", "wb+")) == NULL)
            {
                printf("arquivo não pode ser aberto\n");
                exit(1);
            }
            int x;
            printf("Quantos cats deseja cadastrar? ");
            scanf("%d",&x);
            system("cls");
            for(int i=0;i<x;i++)
            {
                printf("Cadastrado o Cat %d\n",i+1);
                g[qtd].cod=qtd+1;
                printf("Informe o seu nome (dono):\n");
                scanf(" %[^\n]", &g[qtd].nome);
                printf("Informe seu cpf:\n");
                scanf(" %d",&g[qtd].cpf);
                printf("Informe o nome do seu gato\n");
                scanf(" %[^\n]", &g[qtd].nomeg);

                printf("Informe a raca de seu gato:\n");
                scanf(" %[^\n]",g[qtd].raca);
                printf("Informe o endereco seguido de um espaco e o numero:\n");
                scanf(" %[^\n]",g[qtd].endereco);

                qtd++;
                system("cls");
            }

            fwrite(&g, sizeof(struct cat), qtd, fp);
            fclose(fp);
        }else if(op==2)
        {
            int op;
            printf("Voce precisara do codigo do seu gatinho, para poder altera-lo.\nVoce o tem? 1-Sim 2-Nao\n");
            scanf("%d",&op);
            if(op==1)
            {
                int codAltera=0;
                qtd=0;
                int codi;
                if ((fp=fopen("cat.dat", "rb")) == NULL)
                {
                    printf("arquivo não pode ser aberto\n");
                    break;
                }
                while(!feof(fp))
                {
                    fread(&g[qtd],sizeof(struct cat),1,fp);
                    if(feof(fp))break;
                    qtd++;

                }
                fclose(fp);
                printf("Digite o codigo do gatinho para alteracao:\n");
                scanf("%d",&codi);
                for(int i=0;i<qtd;i++)
                {

                    if(g[i].cod==codi)
                    {
                        codAltera=i;
                    }
                }
                system("cls");
                printf("**************************Informacoes do Cat para alterar*****************************\n");
                printf("Codigo de Cadastro: %d\n",g[codAltera].cod);
                printf("Nome do Dono: %s\n",g[codAltera].nome);
                printf("Nome do seu Cat: %s\n",g[codAltera].nomeg);
                printf("Endereco: %s\n",g[codAltera].endereco);
                printf("Cpf: %d\n",g[codAltera].cpf);
                printf("raca: %s\n",g[codAltera].raca);

                printf("****************************************************************************************\n");
                printf("Digite o dado que deseja alterar:\n1-nome\n2-Nome ddo cat\n3-Endereco\n4-raca\n5-cpf\n");

                int opAltera;
                scanf("%d",&opAltera);
                if(opAltera==1)
                {
                    printf("Informe o novo nome do Dono:\n");
                    scanf("%d/%d/%d",&g[codAltera].nome);
                }else if(opAltera==2)
                {
                    printf("Informe o novo nome do seu cat:\n");
                    scanf(" %[^\n]",g[codAltera].nomeg);
                }else if(opAltera==3)
                {
                    printf("Informe o novo endereco seguido de um espaco e o numero:\n");
                    scanf(" %[^\n]",g[codAltera].endereco);
                }else if(opAltera==4)
                {
                    printf("Informe a nova raca de seu gato:\n");
                    scanf(" %[^\n]",g[codAltera].raca);
                }else if(opAltera==5)
                {
                    printf("Informe o novo cpf:\n");
                    scanf(" %[^\n]",g[codAltera].cpf);
                }

                printf("Alteracao Realizada!\n");
                system("pause");
                if ((fp=fopen("cat.dat", "wb+")) == NULL)
                {
                    printf("arquivo não pode ser aberto\n");
                    exit(1);
                }
                fwrite(&g, sizeof(struct cat), qtd, fp);
                fclose(fp);
                system("cls");

            }else if(op==2)
            {
                goto consulta;
            }
        }else if(op==3)
        {
            qtd=0;
            if ((fp=fopen("cat.dat", "rb")) == NULL)
                {
                    printf("arquivo não pode ser aberto\n");
                    break;
                }
                while(!feof(fp))
                {
                    fread(&g[qtd],sizeof(struct cat),1,fp);
                    if(feof(fp))break;
                    qtd++;

                }
                fclose(fp);
                printf("Voce precisa do codigo do cat no cadastro, para poder exclui-lo.\nVoce o tem? 1-Sim 2-Nao\n");
                scanf("%d",&op);
                if(op==1)
                {
                    int codi;
                    int codExclui=0;
                    printf("Digite o codigo do cadastro para exclusao:\n");
                    scanf("%d",&codi);
                    for(int i=0;i<qtd;i++)
                    {

                        if(g[i].cod==codi)
                        {
                            codExclui=i;
                        }
                    }
                printf("********************Informacoes do Cat a alterar***********************************\n");
                printf("Codigo de Cadastro: %d\n",g[codExclui].cod);
                printf("Nome do Dono: %s\n",g[codExclui].nome);
                printf("Nome do seu Cat: %s\n",g[codExclui].nomeg);
                printf("Endereco: %s\n",g[codExclui].endereco);
                printf("Cpf: %d\n",g[codExclui].cpf);
                printf("raca: %s\n",g[codExclui].raca);

                printf("***********************************************************************************\n");
                    printf("Deseja mesmo excluir?\n1-Sim 2-Nao\n");
                    int op2;
                    scanf("%d",&op2);
                    if(op2==1)
                    {

                        for(int i=codExclui;i<qtd;i++)
                        {
                            g[i]=g[i+1];
                            g[i].cod--;
                        }
                        qtd--;
                        if ((fp=fopen("cat.dat", "wb+")) == NULL)
                        {
                            printf("arquivo não pode ser aberto\n");
                            exit(1);
                        }
                        fwrite(&g, sizeof(struct cat), qtd, fp);
                        fclose(fp);
                        printf("Cadastro excluido!\n");

                        system("pause");
                    }else
                    {
                        printf("Cadastro nao excluido!\n");
                        system("pause");
                    }
                    system("cls");
                }else if(op==2)
                {
                    goto consulta;
                }
        }else if(op==4)
        {
            consulta:
            qtd=0;
            if ((fp=fopen("cat.dat", "rb")) == NULL)
            {
                printf("arquivo não pode ser aberto\n");
                break;
            }
            while(!feof(fp))
            {
                fread(&g[qtd],sizeof(struct cat),1,fp);
                if(feof(fp))break;
                qtd++;

            }
            fclose(fp);
            system("cls");
            int a,flag=0;
            printf("Digite o codigo do cadastro que deseja consultar:\n");
            scanf("%d",&a);
            for(int i=0;i<qtd;i++)
            {
                if(g[i].cod==a){
                    flag=1;
                printf("**********************************************************************************\n");
                printf("Codigo de Cadastro: %d\n",g[i].cod);
                printf("Nome do Dono: %s\n",g[i].nome);
                printf("Nome do seu Cat: %s\n",g[i].nomeg);
                printf("Endereco: %s\n",g[i].endereco);
                printf("Cpf: %d\n",g[i].cpf);
                printf("raca: %s\n",g[i].raca);

                printf("**********************************************************************************\n");
                }
            }
            if(flag==0)
            {
                printf("Nao foram encontrados codigos com este dados.\n");
            }
            system("pause");
            system("cls");
            fclose(fp);
        }else if(op==5)
        {
            qtd=0;
            if ((fp=fopen("cat.dat", "rb")) == NULL)
            {
                printf("Voce nao tem uma base de dados.\n Selecione Cadastrar cats para iniciar uma Base de Dados\n");
                system("pause");
                system("cls");
            }else
            {
                while(!feof(fp))
                {
                    fread(&g[qtd],sizeof(struct cat),1,fp);
                    if(feof(fp))break;
                    qtd++;
                }
                fclose(fp);
            }
            string relatorio;
            int rel=1;
            string xua;
            stringstream help;
            help << rel++;
            help >> xua;
            relatorio = "relatorio";
            relatorio+=xua;
            relatorio+=".txt";
            char filename[100];
            sprintf(filename, " %s", relatorio.c_str());
            FILE *fr = fopen(filename, "w+");

            fprintf(fr,"    ***************************************************************************\n");
            fprintf(fr,"             .               ,.                                                 \n");
            fprintf(fr,"           T. -._..---.._,- /|                                                 \n");
            fprintf(fr,"           l| -.  _.v._   (  |                                                 \n");
            fprintf(fr,"           [l /.'_ \; _~ -.`-t                                                 \n");
            fprintf(fr,"            Y   _(o} _{o)._ ^.|                                                 \n");
            fprintf(fr,"            j  T  ,-<v>-.  T  ]                                                  \n");
            fprintf(fr,"            \  l ( /-^-\ ) !  !                                                  \n");
            fprintf(fr,"            \. \.   ~   ./  /c-..,__                                            \n");
            fprintf(fr,"               ^r- .._ .- .-   `- .  ~ --.                                       \n");
            fprintf(fr,"                > \.                      \                                      \n");
            fprintf(fr,"                ]   ^.                     \                                     \n");
            fprintf(fr,"               3  .   >            .       Y  -Row                              \n");
            fprintf(fr,"     ,.__.--._   _j   \ ~   .         ;       |                                 \n");
            fprintf(fr,"     (    ~ -._~ ^._\   ^.    ^._      I     . l                                 \n");
            fprintf(fr,"      -._ ___ ~ -,_7    .Z-._   7    Y      ;  \        _                       \n");
            fprintf(fr,"        /     ~-(r r  _/_--._~-/    /      /,.--^-._   / Y                      \n");
            fprintf(fr,"          -._      ~~~>-._~]>--^---./____,.^~        ^.^  !                      \n");
            fprintf(fr,"            ~--._    '   Y---.                        \./                       \n");
            fprintf(fr,"                  ~~--._  l_   )                        \                        \n");
            fprintf(fr,"                     ~-._~~~---._,____..---           \                       \n");
            fprintf(fr,"                               ~---- ~       \                                      \n");
            fprintf(fr,"                                              \                                     \n");
            fprintf(fr,"                                                                                 \n");
            fprintf(fr,"   ***************************************************************************\n");
            fprintf(fr,"   *                                                                         *\n");
            fprintf(fr,"   *               THUNDER POWER GATOS - RELATÓRIO DE CADASTROS              *\n");
            fprintf(fr,"   *                                                                         *\n");
            fprintf(fr,"   ***************************************************************************\n");

                for(int i=0;i<qtd;i++)
                {
                fprintf(fr,"   ***************************************************************************\n");
                fprintf(fr,"   ************************     Cat: %s\t*****************************",g[i].nomeg);   fprintf(fr,"*\n");
                fprintf(fr,"   ***************************************************************************\n");
                fprintf(fr,"     1 Nome do Dono * 1-%s\n",g[i].nome);
                fprintf(fr,"     2 Cpf          * 2-%d\n",g[i].cpf);
                fprintf(fr,"     3 Nome do Cat  * 3-%s\n",g[i].nomeg);
                fprintf(fr,"     4 Raça         * 4-%s\n",g[i].raca);
                fprintf(fr,"     5 End          * 5-%s\n",g[i].endereco);
                fprintf(fr,"   ***************************************************************************\n");
                fprintf(fr,"   ***************************************************************************\n");

                }

            fclose(fr);
            printf("Relatorio gerado com sucesso!\n");
            printf("MIAU!\n");

            system("pause");
            system("cls");
        }

    }while(op!=6);
}
