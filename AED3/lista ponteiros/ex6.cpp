#include <bits/stdc++.h>
using namespace std;
void ordena (int *c, int *d, int *e){

int n[3];
n[0]=*c;
n[1]=*d;
n[2]=*e;
    if(n[0]<n[1] && n[0]<n[2]){
        *c = n[0];
    }
    else if(n[1]<n[0] && n[1]<n[2]){
        *c = n[1];
    }
    else if(n[2]<n[0] && n[2]<n[1]){
        *c = n[2];
    }
    if(n[0]<n[1] && n[0]>n[2]){
        *d = n[0];
    }
    else if(n[0]>n[1] && n[0]<n[2]){
        *d = n[0];
    }
    else if(n[1]<n[0] && n[1]>n[2]){
        *d = n[1];
    }
    else if(n[1]>n[0] && n[1]<n[2]){
        *d = n[1];
    }
    else if(n[2]<n[0] && n[2]>n[1]){
        *d = n[2];
    }
    else if(n[2]>n[0] && n[2]<n[1]){
        *d = n[2];
    }
    if(n[0]>n[1] && n[0]>n[2]){
        *e = n[0];
    }
    else if(n[1]>n[0] && n[1]>n[2]){
        *e = n[1];
    }
    else if(n[2]>n[0] && n[2]>n[1]){
        *e = n[2];
    }

return;

}

int main(){

int a,b,c,x;

    scanf("%d%d%d", &a,&b,&c);
ordena(&a,&b,&c);


    printf("%d %d %d\n", a,b,c);
return 0;
}

