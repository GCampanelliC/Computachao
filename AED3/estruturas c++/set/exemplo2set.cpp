#include <bits/stdc++.h>
    using namespace std;

        int main(){
        set<int> s;
        set<int>:: iterator it; // uso do iterator;
            s.insert(2);
            s.insert(5);
            s.insert(6);
            s.insert(8);
        printf("Tamanho do Conjunto: %d\n", s.size()); // size mostra o tamanho do Set;
        printf("s = {");
                for (it = s.begin(); it != s.end(); ++it){ // usa o iterator para percorrer o set;
                        printf(" %d", *it);
                }
                printf("}\n");
    return 0;
}
