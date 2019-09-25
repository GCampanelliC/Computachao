#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string line;
    char name[100][2];
    char resposta[100], r[100];
    char parte[100];
    bool question;
    map<string, int> numbers;
        scanf ("%d", &n);
        for (int t = 0; t < n; ++t)
        {
            cin >> line;
        for(int i=0; i<line.length();i++)
        {
            name[i][0]=line[i];
            name[i][1]='\0’;
            scanf("%d",&numbers[name[i]]);
        }
        do
        {
        for(int i=0; i<line.length();i++)
        {
            name[i][0]=line[i];
            name[i][1]='\0’;
        }
        question = true;
        for(int i=0; i<line.length()-1;i++)
        {
            question = question && (numbers[name[i]]<=numbers[name[i+1]]);
        }
            strcpy(resposta,"");
        if(question)
        {
            sprintf(parte,"%d",numbers[name[0]]);
            strcat(resposta,parte);
        for(int i=1; i<line.length();i++)
        {
            sprintf(parte," %d",numbers[name[i]]);
            strcat(resposta,parte);
        }
            strcat(resposta,"\n");
            strcpy(r,resposta);
        }
        } while (next_permutation(line.begin(), line.end()));
                printf("%s",r);
        }
        return 0;
}
