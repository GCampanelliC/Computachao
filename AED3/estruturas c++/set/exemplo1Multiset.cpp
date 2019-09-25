#include <bits/stdc++.h>
using namespace std;

    int main(){
        multiset<int> s; // declaração do multiset;
        multiset<int>:: iterator it; // uso do iterator
            s.insert(5); s.insert(5); s.insert(5); // no multiset da pra inserir valores iguais no mesmo set;
            printf("Quantidade de 5: %d\n", s.count(5));
            printf("s = {");
                    for (it = s.begin(); it != s.end(); ++it){
                        printf(" %d", *it);
                    }
            printf("}\n");
            s.erase(5); // apaga o 5 do multset, so que apaga todas as ocorrencias dele;
            printf("Quantidade de 5: %d\n", s.count(5));
            printf("s = {");
                    for (it = s.begin(); it != s.end(); ++it){
                        printf(" %d", *it);
                    }
            printf("}\n");
            s.insert(5); s.insert(5); s.insert(5);
            s.erase(s.find(5)); // para apagar somente um, se usa a função find pra procurar o valor proposto e apagar somente ele;
            printf("Quantidade de 5: %d\n", s.count(5));
            printf("s = {");
                    for (it = s.begin(); it != s.end(); ++it){
                        printf(" %d", *it);
                    }
                        printf("}\n");
return 0;
}
