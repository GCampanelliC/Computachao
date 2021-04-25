#include <bits/stdc++.h>

using namespace std;

void calcula(int a, int b, int *x, int *y)
{
	*x = a + b;
	*y = a - b;
}

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);

	int x,y;

	calcula(a,b,&x,&y);

	printf("soma: %d\n", x);
	printf("subtracao: %d\n", y);

	return 0;
}
