#include <bits/stdc++.h>

using namespace std;

int n; 
struct Matriz{
    int mat[106][106];

    Matriz operator += (const Matriz& x) const{
        Matriz y;
        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < n; j++)
                y.mat[i][j] = mat[i][j] + x.mat[i][j];
        }

        return y;
    }
};

void fusao(Matriz a){
    int tem = 1;
    while(tem && n){
       
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                if(i == j)
                   a.mat[i][j] = 0;
                else if(a.mat[i][j] > 1)
                   a.mat[i][j] = 1;
            }
        }
        tem = 0;
        int va,vb;

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < n ; j++){
                if(a.mat[i][j])
                {
                    tem = 1;
                    va = i;
                    vb = j;
                    goto vai;
                }
            }
        }
        vai:

        if(!tem)
            break;
        Matrix nova;

        for(int i = 0 ; i < n ; i++){
            a.mat[va][i] += a.mat[vb][i];
        }
        for(int i = 0 ; i < n ; i++){
            a.mat[i][va] += a.mat[i][vb];
        }
        int p,q;
        for(int i = 0 , p = 0; i < n ; i++, p++){
            if(i == vb)
            {
                p--;
                continue;
            }
            for(int j = 0 ,q = 0; j < n ; j++, q++)
            {
                if(j == vb)
                {
                    q--;
                    continue;
                }
                nova.mat[p][q] = a.mat[i][j];
            }
        }
        n--;
        a = nova;
    }

    if(n == 1)
        printf("Grafo conexo!\n");
    else
        printf("Grafo nao conexo | %d componentes!\n", n);
}

int main()
{
    cin >> n;
    
    Matriz a;
    
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0; j < n ; j++) 
            cin >> a.mat[i][j];
    }
    
    fusao(x);
}