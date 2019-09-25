#include <bits/stdc++.h>
using namespace std;

vector< pair< pair<int, int>, int > > aluno; // declara o vetor que irá guardar os alunos

int n; // declaro o int n

int main()
{
    scanf("%d", &n); // leio o valor de n
        for(int i=1; i<=n; i++) // para cada aluno
        { // declaro e leio sua nota e seu número de faltas
        int s, f;
        scanf("%d %d", &s, &f);
// depois o adiciona ao vetor de alunos
        aluno.push_back(make_pair(make_pair(-s, f), i));
        }
        sort(aluno.begin(), aluno.end()); // ordeno os alunos
// e imprimo suas identificações ordenadas
        for(int i=0; i<n; i++) printf("%d ", aluno[i].second);
// imprimindo, por fim, a quebra de linha
printf("\n");
return 0;
}
