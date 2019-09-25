#include <bits/stdc++.h>
using namespace std;

    int main(){
        set<int> a;
        set<int> b;
        set<int> d;
        set<int>:: iterator tt;
        set<int>:: iterator tb;

        a.insert(4);
        a.insert(8);
        a.insert(10);
        a.insert(20);

        b.insert(5);
        b.insert(20);
        b.insert(3);
        b.insert(8);

            for(tt = a.begin();tt != a.end(); ++tt){
                     if(b.count(*tt)){
                            d.insert(*tt);
                     }
                }

            for(tt = d.begin(); tt != d.end(); ++tt){
                printf("%d ", *tt);
            }


    }
