#include <bits/stdc++.h>
using namespace std;

    int main(){
        set<int> s; // criação do set;
        s.insert(3);//inserção no set, no caso o 3;
        s.insert(2);
        s.insert(5);
            printf("%d\n", s.count(3)); // COUNT = mostrar quantos elementos tem no set;
            printf("%d\n", s.count(4)); // mostrar o numero de ocorrencias do 4 no set;
        s.erase(3); // apaga o 3 no set / no caso iria ficar zero no lugar do antigo 3.
        s.insert(4); // insere o 4 no set
            printf("%d\n", s.count(3));
            printf("%d\n", s.count(4));
    return 0;
}
