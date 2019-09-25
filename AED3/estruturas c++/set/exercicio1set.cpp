#include <bits/stdc++.h>
using namespace std;

    int main(){
        set<int> a;
        set<int> b;
        set<int> c;
        set<int>:: iterator tt;

        a.insert(4);
        a.insert(8);
        a.insert(10);
        a.insert(20);

        b.insert(5);
        b.insert(20);
        b.insert(3);
        b.insert(8);

         for (tt = a.begin(); tt != a.end(); ++tt){
                   c.insert(*tt);
                }
         for (tt = b.begin(); tt != b.end(); ++tt){
                   c.insert(*tt);
                }
         for (tt = c.begin(); tt != c.end(); ++tt){
                   printf("%d ",*tt);
                }
    }
