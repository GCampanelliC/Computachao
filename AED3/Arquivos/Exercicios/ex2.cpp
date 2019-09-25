#include <bits/stdc++.h>

    main(int argc, char *argv[])
    {

        FILE *fp;
        FILE *pf;
           char s[1001];
            if((fp=fopen(argv[1],"w"))==NULL)
            {
            printf("arquivo nao pode ser aberto\n");
            exit(1);
            }
            if((pf=fopen(argv[2],"r"))==NULL)
            {
            printf("arquivo nao pode ser aberto\n");
            exit(1);
            }

            do
            {
                printf("Entre uma string (CR para sair) : \n");
                fgets(s,100,pf);
                fputs(s,fp);
            }while(!feof(pf));
            fclose(pf);
            fclose(fp);
    }


