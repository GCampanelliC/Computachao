#include <bits/stdc++.h>
#define oo 0x3f3f3f3f

using namespace std;

const int A = 405;

int adj[A][A];
int path[A][A];

int x,y; 
int main(){
    cin >> x >> y;
    memset(adj, oo, sizeof adj);
    memset(path, -1, sizeof path);
    for(int i = 0 ; i < y ; i++){
        int a,b,c;
        cin >> a >> b >> c;
        a--;
        b--;
        adj[a][b] = c;
        adj[b][a] = c;
        path[a][b] = a;
        path[b][a] = b;
    }

    for(int k = 0 ; k < x ; k++){
        for(int i = 0 ; i < x ; i++){
            for(int j = 0 ; j < x ; j++){
                if(adj[i][j] > adj[i][k] + adj[k][j]){
                    adj[i][j] = adj[i][k] + adj[k][j];
                    path[i][j] = k;
                }
            }
        }
    }

    printf("Matriz com os menores caminhos:\n");
    for(int i = 0 ; i < x ; i++){
        for(int j = 0 ; j < x ; j++){
            if(i == j)
                printf("oo ");
            else
            printf("%d ",adj[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz de Caminhos:\n");
    for(int i = 0 ; i < x ; i++){
        for(int j = 0 ; j < x ; j++){
            if(i == j)
                printf("-1 ");
            else
                printf("%d ",path[i][j]);
        }
        printf("\n");
    }

}