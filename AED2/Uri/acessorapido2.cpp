#include <bits/stdc++.h>
using namespace std;

int mdc(int a, int b){
    int c,d;
    c = max(a,b);
    d = min(a,b);
        if(c%d==0){
            return d;
        }
        else{
         return(mdc(d,(c%d)));
        }

}

int main(){
    int a,x,y,z;
        scanf("%d", &a);
        while(a--){
            scanf("%d%d", &x,&y);
            printf("%d\n", mdc(x,y));
        }


return 0;
}
