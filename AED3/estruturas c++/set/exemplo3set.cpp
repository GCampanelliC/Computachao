#include <bits/stdc++.h>
using namespace std;

    int main(){
    set<int> s;
    set<int>:: iterator it;
        s.insert(2);
        s.insert(5);
        s.insert(6);
        s.insert(8);
            printf("Tamanho do Conjunto: %d\n", s.size());
            printf("s = {");
                for (it = s.begin(); it != s.end(); ++it){
                    printf(" %d", *it);
                }
        printf("}\n");
        s.insert(5);// nao vai inserir pois está repetido;
        s.insert(7);
        s.insert(8);// nao vai inserir pois está repetido;
            printf("Tamanho do Conjunto: %d\n", s.size());
            printf("s = {");
                for (it = s.begin(); it != s.end(); ++it){
                    printf(" %d", *it);
                }
        printf("}\n");
return 0;
}
