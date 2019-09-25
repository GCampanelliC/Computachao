#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
string line;
scanf ("%d", &n);
for (int t = 0; t < n; ++t)
{
cin >> line;
sort(line.begin(), line.end());
do
{
printf("%s\n", line.c_str());
} while (next_permutation(line.begin(), line.end()));
printf("\n");
}
return 0;
}
