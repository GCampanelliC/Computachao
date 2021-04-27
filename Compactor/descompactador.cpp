#include<bits/stdc++.h>

using namespace std;
int Deci(string s)
{
    int an=0,k=7;

    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1')an+=pow(2,k);
        k--;
    }
    return an;
}
string Bina(int o)
{
    string aux;
    while(o>0)
    {
        aux+=(o%2)+'0';
        o/=2;
    }
    reverse(aux.begin(),aux.end());
    return aux;
}
int main()
{
    printf("Descompactando arquivo ...\n");
    FILE *fp = fopen("compact.txt","r");
    vector<int> dd;
    char c[1000];
    fscanf(fp,"%s",c);
    fclose(fp);
    for(int i=0;i<strlen(c);i++)
    {
        int x=c[i];
        dd.push_back(x);
    }
    vector<string> de;
    for(int i=0;i<dd.size();i++)
    {
        de.push_back(Bina(dd[i]));
    }
    FILE *xa = fopen("descompact.txt","w");
    for(int i=0;i<de.size();i++)
    {
        string ans;
        if(de[i].size()==6)ans+='a';
        for(int j=0;j<de[i].size();j+=2)
        {
            if(de[i][j]=='0' && de[i][j+1]=='0')ans+='a';
            else if(de[i][j]=='0' && de[i][j+1]=='1')ans+='b';
            else if(de[i][j]=='1' && de[i][j+1]=='0')ans+='c';
            else if(de[i][j]=='1' && de[i][j+1]=='1')ans+='d';
        }
        fprintf(fp,"%s",ans.c_str());
        cout << ans;
    }
    printf("\n");
    return 0;
}