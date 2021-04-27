#include<bits/stdc++.h>
using namespace std;

int main(){
    int m;
    cin >> m;
    double a,b,vetx[m],vety[m],y0,h,xt,yt;
    int x,y;
    double k1,k2,k3,k4;
    cin >> a >> b >> y0;
    h=(b-a)/m;
    xt=a;
    yt=y0;
    vetx[0]=xt;
    vety[0]=yt;
    printf("0 %.4lf %.4lf\n", xt, yt);
    for(int i=1;i<=m;i++){
        x=xt;
        y=yt;
        k1=h*(-y+x+2);
        x=xt+h/2;
        y=yt+h/2*k1;
        k2=h*(-y+x+2);
        y=yt+h/2*k2;
        k3=h*(-y+x+2);
        x=xt+h;
        y=yt+h*k3;
        k4=h*(-y+x+2);
        xt=a+i*h;
        yt=(yt+(k1/6)+(k2/3)+(k3/3)+(k4/6));
        printf("%d %.4lf %.4lf\n", i, xt, yt);
        vetx[i+1]=xt;
        vety[i+1]=yt;
    }
    return 0;
}
