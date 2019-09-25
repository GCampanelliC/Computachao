#include <bits/stdc++.h>
using namespace std;
int main()
{
priority_queue<int> q;
q.push(3);
printf("Elemento do inicio: %d\n", q.top());
q.push(5);
printf("Elemento do inicio: %d\n", q.top());
q.push(7);
printf("Elemento do inicio: %d\n", q.top());
q.push(2);
printf("Elemento do inicio: %d\n", q.top());
q.pop();
printf("Elemento do inicio: %d\n", q.top());
q.pop();
printf("Elemento do inicio: %d\n", q.top());
q.push(6);
printf("Elemento do inicio: %d\n", q.top());
return 0;
}
