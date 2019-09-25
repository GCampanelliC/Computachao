#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> m;
    map<string,int>:: iterator it;
        m["primeiro"] = 4;
        m["segundo"] = 3;
        m["terceiro"] = 9;
            printf("fulano - %d\n\n", m["fulano"]);
        for (it = m.begin(); it != m.end(); ++it){
                cout << it->first << " - " << it->second << "\n";
        }
return 0;
}
