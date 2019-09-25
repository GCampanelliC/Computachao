#include <bits/stdc++.h>

using namespace std;

int main(){

    set<int> a;
    set<int> b;
    set<int> c;
    set<int>:: iterator tt;

    a.insert(5);
    a.insert(56);
    a.insert(2);
    a.insert(7);

    b.insert(2);
    b.insert(44);
    b.insert(3);
    b.insert(9);


    for (tt = a.begin() ; tt != a.end() ; ++tt){
                   c.insert(*tt);
                }
    for (tt = b.begin() ; tt != b.end() ; ++tt){
                   c.insert(*tt);
                }

     for(tt = a.begin() ; tt != a.end() ; ++tt){
         if(b.count(*tt) == 1){
            c.erase(*tt);
        }
    }

    for(tt = c.begin() ; tt != c.end() ; ++tt){
         printf("%d ", *tt);
    }

}
