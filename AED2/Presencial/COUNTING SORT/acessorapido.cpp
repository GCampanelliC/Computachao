#include<bits/stdc++.h>
using namespace std;
void QuickSort(int vet[], int esq, int dir){
	int i=esq,j=dir;
	int x,y;
	x=vet[(esq+dir)/2];
	do{
		while((vet[i]>x)&&(i<dir))
			i++;
		while((x>vet[j])&&(j>esq))
			j--;
		if (i<=j){
			y=vet[i];
			vet[i]=vet[j];
			vet[j]=y;
			i++;
			j--;
		}
	} while(i<=j);
	if(esq<j)
	QuickSort(vet,esq,j);
	if(i<dir)
	QuickSort(vet,i,dir);
}
int main(){
	int I=0,i,j,k,l,m,P,M,F,Q,B,K;
	scanf("%d",&P);
	int vetP[P];
	for(i=0;i<P;i++)
		scanf("%d",&vetP[i]);
	scanf("%d",&M);
	int vetM[M];
	for(i=0;i<M;i++)
		scanf("%d",&vetM[i]);
	scanf("%d",&F);
	int vetF[F];
	for(i=0;i<F;i++)
		scanf("%d",&vetF[i]);
	scanf("%d",&Q);
	int vetQ[Q];
	for(i=0;i<Q;i++)
		scanf("%d",&vetQ[i]);
	scanf("%d",&B);
	int vetB[B];
	for(i=0;i<B;i++)
		scanf("%d",&vetB[i]);
	scanf("%d",&K);
	int somas[P*M*F*Q*B],soma=0;
	for(i=0;i<P;i++){
		for(j=0;j<M;j++){
			for(k=0;k<F;k++){
				for(l=0;l<Q;l++){
					for(m=0;m<B;m++){
						somas[I]=vetP[i]+vetM[j]+vetF[k]+vetQ[l]+vetB[m];
						I++;
					}
				}
			}
		}
	}
	QuickSort(somas,0,I-1);
	for(i=0;i<K;i++){
		soma+=somas[i];
	}
	printf("%d\n",soma);

	return 0;
}
