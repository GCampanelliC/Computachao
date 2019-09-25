#include <bits/stdc++.h>


struct internet{
    int cod,nh;
    char email[60];

};

int main(){
    struct internet C[7];
        for(int i=0;i<7;i++){
            scanf("%d", &C[i].cod);
            scanf(" %s", &C[i].email);
            scanf("%d", &C[i].nh);
        }

        for(int j=0;j<7;j++){
            double np = 0, nt=0;
                if(C[j].nh <= 20.0){
                    printf("O cliente de cod %d tem que pagar: R$ 35,00\n", C[j].cod);
                }
                else if(C[j].nh>20.0){

            np = C[j].nh-20.0;
            np = np*2.50;
            nt = np+350;
                printf("O cliente de cod %d tem que pagar: R$ %.2lf\n", C[j].cod, nt );
                }
            np = nt = 0;
        }




return 0;
}
