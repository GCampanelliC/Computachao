#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, x;
    vector <int> v;
    vector <int>:: iterator it;
    scanf("%d", &n);
        for (int i = 0; i < n; i++){
            scanf("%d", &x);
            v.push_back(x);
        }
        for (it = v.begin(); it != v.end(); ++it){
            printf("%d ", *it);
        }

    printf("\n");
return 0;
}
