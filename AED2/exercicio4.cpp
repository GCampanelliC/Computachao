#include <stdio.h>

int main(){

int d;

scanf("%d", &d);

if(d==61){
    printf("Brasilia\n");
}
else if(d==71){
    printf("Salvador\n");
}
else if(d==11){
    printf("Sao Paulo\n");
}
else if(d==21){
    printf("Rio de Janeiro\n");
}
else if(d==32){
    printf("Juiz de Fora\n");
}
else if(d==19){
    printf("Campinas\n");
}
else if(d==27){
    printf("Vitoria\n");
}
else if(d==31){
    printf("Belo Horizonte\n");
}
else{
    printf("DDD nao cadastrado\n");
}
return 0;
}





---------------------------------------------------------------



#include <bits/stdc++.h>


int main(){

int x,y,cont,contt,som=0;


scanf("%d", &x);

    for(cont=0;cont<x;cont++){
        scanf("%d", &y);
          for(contt=1;contt<y;contt++){
                if(y%contt==0){
                    som=som+contt;
                }
             }
                if(som==y){
                    printf("%d eh perfeito\n", y);
                }
                if(som!=y){
                    printf("%d nao eh perfeito\n", y);
                }
                 som = 0;
    }

}

----------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int h1=0,m1=0,h2=0,m2=0,x,t=0,c=0;
    do{
    x=t=0;
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    h1=(h1*60)+m1;
    h2=(h2*60)+m2;
    x=h1+m1+h2+m2;
    if((h2>=h1)&&(x!=0)){
      t=h2-h1;
      printf("%d\n",t);
    }else if(x!=0){
      t=(60*24)-(h1-h2);
      printf("%d\n",t);
    }
    } while(x!=0);
    system("PAUSE");
    return 0;
}
--------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main ()
{
    int n,z,y,tam = 0, aux = 1;
    char palavra[60];
    scanf("%d",&n);
    getchar();
    for(z = 0;z < n;z++){
        gets(palavra);
        tam = strlen(palavra);
        aux=1;

        for(y = 0;y < tam;y++) {
            if(aux && palavra[y] != ' ')
                printf("%c",palavra[y]);

            if(palavra[y] == ' ')
                aux = 1;
            else
                aux = 0;
       }
       printf("\n");
    }
system("pause");
return 0;
}

-------------------------------------------------------------------------

#include <bits/stdc++.h>
using namespace std;
int main(){

int M,N;

char a[2004], b[2004];

while(scanf("%s %s",a,b) != EOF)
{
    if(strcmp(a, "0") == 0 && strcmp(b, "0") == 0) break;

    int s1 = 0;
    int s2 = 0;
    for(int i = 0 ; i < strlen(a); i++)
            s1 += (a[i] - '0');

    for(int i = 0 ; i < strlen(b); i++)
            s2 += (b[i] - '0');
    while(strlen(a) > 1)
    {
        s1 = 0;
        for(int i = 0 ; i < strlen(a); i++)
            s1 += (a[i] - '0');

        sprintf(a, "%d", s1);
    }

    while(strlen(b) > 1)
    {
        s2 = 0;
        for(int i = 0 ; i < strlen(b); i++)
            s2 += (b[i] - '0');

        sprintf(b, "%d", s2);
    }

    if(s1 > s2) printf("1\n");
    else if(s1 < s2) printf("2\n");
    else printf("0\n");

}






return 0;
}
-----------------------------------------------------------------------
#include <bits/stdc++.h>


int main(){

int a[10],i=0,N;
char V[1000];

while(scanf("%s", &V)!=EOF){
    memset(a,0,sizeof(a));

     N=strlen(V);
     for(i=0;i<N;i++){

     if(V[i]=='0'){
                a[0]++;
     }
     else if(V[i]=='1'){
                a[1]++;
     }
     else if(V[i]=='2'){
                a[2]++;
     }
     else if(V[i]=='3'){
                a[3]++;
     }
     else if(V[i]=='4'){
                a[4]++;
     }
     else if(V[i]=='5'){
                a[5]++;
     }
     else if(V[i]=='6'){
                a[6]++;
     }
     else if(V[i]=='7'){
                a[7]++;
     }
     else if(V[i]=='8'){
                a[8]++;
     }
     else if(V[i]=='9'){
                a[9]++;
     }

   }
    int L=0,ind=0;
    for(int cont=0;cont<10;cont++){
        if(a[cont]>=L){
            L=a[cont];
            ind=cont;
        }
    }
    printf("%d\n", ind);



}
return 0;
}



----------------------------------------------------------------------
