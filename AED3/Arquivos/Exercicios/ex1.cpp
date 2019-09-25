#include <stdio.h>
#include <stdlib.h>
#include <string.h>
    main(int argc, char *argv[])
    {

        FILE *fp;
        char str[80];
            if((fp=fopen(argv[1],"w"))==NULL)
            {
            printf("arquivo nao pode ser aberto\n");
            exit(1);
            }
            do
            {
                printf("Entre uma string (CR para sair) : \n");
                gets(str);
                strcat(str, "\n");
                fputs(str, fp);
            }while(*str != '\n' );
    }


