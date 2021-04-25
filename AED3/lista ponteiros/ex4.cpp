#include <bits/stdc++.h>

int main(){
	int a,b,c,d;
	float e,f,g,h;
	char v[10];
	int x,*pl;

	scanf("%d%d%d%d", &a,&b,&c,&d);
    scanf("%f%f%f%f", &e,&f,&g,&h);
	pl=&a;
	pl++;
    printf("%d\n", pl);

	if(*pl==a){
		printf("Coincide com a\n");
	}
	if(*pl==b){
		printf("Coincide com b\n");
	}
	if(*pl==c){
		printf("Coincide com c\n");
	}
	if(*pl==d){
		printf("Coincide com d\n");
	}
	if(*pl==e){
		printf("Coincide com e\n");
	}
	if(*pl==f){
		printf("Coincide com f\n");
	}
	if(*pl==g){
		printf("Coincide com g\n");
	}
	if(*pl==h){
		printf("Coincide com h\n");
	}
return 0;
}
