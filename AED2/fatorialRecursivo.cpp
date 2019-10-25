#include <bits/stdc++.h>

int fatRec(int n){

    if(n==0)
        return 1;
    return(n*fatRec(n-1));




}

int main(){

int x,y;

    scanf("%d", &x);
    y = fatRec(x);

    printf("%d", y);

return 0;
}
