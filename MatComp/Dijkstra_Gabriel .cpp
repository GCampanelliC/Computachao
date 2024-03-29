#include <bits/stdc++.h>
#define inf 0x3f3f3f3f

using namespace std;

int n,m;
vector<vector<pair<int,int> > >h;
int a,b,c;
 int ori, end;

int pai[100005];

void backtracking(int u)
{
    if(u == pai[u])
        return;

    backtracking(pai[u]);
    printf( "- > %d", u);

}

int dijkstra()
{

    int rotulos[n+1];
    memset(rotulos, inf, sizeof rotulos);

    priority_queue<pair<int,int>,  vector<pair<int,int> > , greater<pair<int,int> > >pq;

    rotulos[ori] = 0;

    pq.push(make_pair(0,ori));
    map<int,bool>conjunto;

    for(int i = 1 ; i <= n ; i++) conjunto[i] = true;


    pai[ori] = ori;
    while(!pq.empty())
    {
        int u = pq.top().second;
        int w = pq.top().first;

        pq.pop();

        conjunto[u] = false;


        for(int i = 0 ; i < (int)h[u].size(); i++)
        {
            int v = h[u][i].first;
            int ww = h[u][i].second;

            if(rotulos[v] > w + ww && conjunto[v])
            {
                pai[v] = u;
                rotulos[v] = w + ww;
                pq.push(make_pair(rotulos[v], v));
            }
        }
    }

    return rotulos[end];

}

int main()
{
    cin >> a;
    cin >> b;

    h.assign(a+1, vector<pair<int,int> >());

    for(int i = 0 ; i < b ; i++)
    {
        cin >> x;
        cin >> y;
        cin >> z;

        h[x].push_back(make_pair(y,z));
        h[y].push_back(make_pair(x,z));
    }


    cin >> ori >> end;

    printf("Valor do menor caminho : %d\n", dijkstra());

    printf("Caminho:\n");
    printf("%d",ori);
    backtracking(end);

}