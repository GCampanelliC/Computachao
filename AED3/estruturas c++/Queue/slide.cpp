#include <bits/stdc++.h>
using namespace std;
int main()
{
queue<int> q;
q.push(3);
printf("Elemento do inicio: %d\n", q.front());
q.push(2);
printf("Elemento do inicio: %d\n", q.front());
q.push(5);
printf("Elemento do inicio: %d\n", q.front());
q.pop();
printf("Elemento do inicio: %d\n", q.front());
return 0;
}
