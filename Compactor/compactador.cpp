#include<bits/stdc++.h>

using namespace std;
int Dec(string ss)
{
    int ans=0,k=7;

    for(int i=0;i<ss.size();i++)
    {
        if(ss[i]=='1')ans+=pow(2,k);
        k--;
    }
    return ans;
}
string Bin(int x)
{
    string aux;
    while(x>0)
    {
        aux+=(x%2)+'0';
        x/=2;
    }
    reverse(aux.begin(),aux.end());
    return aux;
}
int main()
{
    char a[1000];
    scanf("%s",a);
    string aux;
    vector<string>w;
    int c=0;
    for (int i = 0; i < strlen(a); i++)
    {
        if(a[i]=='a')
            aux+="00";
        if(a[i]=='b')
            aux+="01";
        if(a[i]=='c')
            aux+="10";
        if(a[i]=='d')
            aux+="11";

        if(aux.size()==8)
        {
            w.push_back(aux);
            aux.clear();
        }
    }
    printf("A string %s ficou com %d bits depois da compactacao : ",s,w.size());
    FILE *fp=fopen("compact.txt","w");

    for(int i=0;i<w.size();i++)
    {
        printf("%c",Dec(w[i]));
        fprintf(fp,"%c",Dec(w[i]));
    }
    fclose(fp);
    printf("\n");

    return 0;
}