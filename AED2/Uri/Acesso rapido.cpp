#include <bits/stdc++.h>
using namespace std;

int p[45];

int Lajotas(int x){
	if (x==0)
		return 1;
	if(x==1)
		return 1;
	if(p[x]!=-1)

		return dp[x];
	return p[x]=Lajotas(x-1)+Lajotas(x-2);
}
int main(){
	int a;
	while(scanf("%d",&a),a!=0){
	memset(p,-1,sizeof p);

	printf("%d\n",Lajotas(a));

	}
	return 0;
}
