#include <bits/stdc++.h>
using namespace std;
int main(){

    map<int,string> sal;

    map<int,string>:: iterator it;
    map<int,string>:: iterator tt;
    sal[2345] = "Matheus";
    sal[4500] = "Lucas";
    sal[7800] = "Joao";
    sal[9000] = "Marcos";

    int m = -99999; int menor = 99999; string name,name2;

            for (it = sal.begin(); it != sal.end(); ++it){
                    if(it->first > m){
                        m = it->first;
                        name = it->second;
                    }

            }
             cout << name << " - " << m << "\n";

            for (it = sal.begin(); it != sal.end(); ++it){
                    if(it->first < menor){
                        menor = it->first;
                        name2 = it->second;
                    }

            }
             cout << name2 << " - " << menor << "\n";
}

