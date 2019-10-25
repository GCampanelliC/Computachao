#include <bits/stdc++.h>

using namespace std;
string aux;
int main()
{
    string nome,op;
    set<string>yes;

    int n=-1;
    vector<string>a,b;
    while(cin >> nome && nome != "FIM"){
        cin >> op;

        if(op == "YES"){
            yes.insert(nome);

                if((int)nome.size()>n){
                n = nome.size();
                aux = nome;

              }
        }
        else if (op == "NO"){
            b.push_back(nome);
        }

    }
    set<string>::iterator it;

    for(it = yes.begin(); it != yes.end(); it++){
        string x = *it;
        a.push_back(x);

    }
        for(int i = 0; i < b.size()-1; i++){

            for(int j = b.size()-1; j > i; j--){

                if (b[j]<b[j-1])swap(b[j],b[j-1]);
            }
        }

        for (int i = 0; i < a.size(); i++) {
            cout << a[i] << endl;
        }

        for (int j = 0; j < b.size(); j++) {
            cout << b[j] << endl;
        }

        printf("\n");


        printf("Amigo do Habay:\n");

        cout << aux << endl;



    return 0;
}
