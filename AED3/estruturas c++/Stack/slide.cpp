#include <bits/stdc++.h>
using namespace std;
int main()
{
stack<int> s;
s.push(3);
printf("Elemento do topo: %d\n", s.top());
s.push(2);
printf("Elemento do topo: %d\n", s.top());
s.push(5);
printf("Elemento do topo: %d\n", s.top());
s.pop();
printf("Elemento do topo: %d\n", s.top());
return 0;
}
