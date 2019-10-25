#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,t;
	while(cin >> a){
		int i,j,tamD=0,tamE=0,n1[10002],n2[10002],num;
		memset(n2,-1,sizeof n2);
		memset(n1,-1,sizeof n1);

		char DRES;
            for(t=0;t<a;t++){
                scanf("%d %c",&num,&DRES);
                getchar();
                if(DRES=='D'){
                    n1[tamD]=num;
                    tamD++;
                }else{
                    n2[tamE]=num;
                    tamE++;
                }
            }
                for(i=0;i<tamE-1;i++)
                    for(j=tamE-1;j>i;j--){
                        if(n2[j]<n2[j-1]){
                            swap(n2[j],n2[j-1]);
                        }
                    }
                for(i=0;i<tamD-1;i++)
                    for(j=tamD-1;j>i;j--){
                        if(n1[j]<n1[j-1]){
                            swap(n1[j],n1[j-1]);
                        }
                    }
		i=0;
		j=0;

		int cont=0;

		do{
			if(n2[i]==n1[j]){
				i++;
				j++;
				cont++;
			}else if(n2[i]>n1[j]){
				j++;
			}else if(n2[i]<n1[j]){
				i++;
			}
		}while(i<tamE&&j<tamD);

		printf("%d\n",cont);
	}
	return 0;
}
