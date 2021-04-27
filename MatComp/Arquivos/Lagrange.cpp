#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    double x[n],y[n],z,r=0,p;
    cin >> z;
    for(int i=0;i<n;i++){
        cin >> x[i];
        cin >> y[i];
    }
    for(int i=0;i<n;i++){
        p=y[i];
        for(int j=0;j<n;j++){
            if(i!=j)
                p=p*((z-x[j])/(x[i]-x[j]));
        }
        r=r+p;
    }
    printf("Ponto: %.2lf\n", z);
    printf("Valor interpolado: %.4lf\n", r);

    return 0;
}
