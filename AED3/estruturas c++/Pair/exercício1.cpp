#include <bits/stdc++.h>

using namespace std;

int n;

vector< pair <int, pair<int, pair<int, string> > > > pais;

int main(){

scanf("%d", &n);

for(int i=1; i<=n; i++){
            string p;
            int o,pr,b;
            scanf("%s %d %d %d", &p,&o,&p,&b);
            pais.push_back(make_pair(make_pair(p, o)),(make_pair(p,b))));
}

}
