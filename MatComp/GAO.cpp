#include <bits/stdc++.h>

#define oo 0x3f3f3f3f
using namespace std;

int a,b;
vector<vector<pair<int,int> > >g;
stack<int>ord;
int x[10006];

void dfs(int u){
    x[u] = 1;
    
    for(int i = 0 ; i < (int)g[u].size() ; i++)
    {
        int v = g[u][i].first;
        if(!x[v])
            dfs(v);
    }
    ord.push(u);
}

int main(){
    cin >> a >> b;
    
    g.assign(a+1, vector<pair<int,int> >());
    
    for(int i = 0 ; i < b; i++){
        int n,m,o; cin >> m >> n >> o;
        g[n].push_back(make_pair(m,o));
    }

    memset(x, 0, sizeof x);
    
    for(char i = 1; i <= a ; i++){
        if(!x[i]) dfs(i);
    }
    int dist[10005]; memset(dist, oo, sizeof dist);

    int pai[10005]; memset(pai, -1, sizeof pai); // -1 == NULL
    int ori,dest; cin >> ori >> dest; // origem e destino
    dist[ori] = 0;
    
    while(!ord.empty()) {
        int u = ord.top();
        ord.pop();
        
        for(int i = 0 ; i < (int)g[u].size(); i++)
        {
            int v = g[u][i].first;
            int w = g[u][i].second;

            if(dist[v] > dist[u] + w){
                dist[v] = dist[u] + w;
                pai[v] = u;
            }
        }
    }
    if(dist[dest] != oo)
        printf("Menor caminho de %d para %d = %d\n", ori, dest, dist[dest]);
    else
        printf("Nao existe caminho!\n");
    
    
}