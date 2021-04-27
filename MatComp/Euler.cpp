#include <bits/stdc++.h>

using namespace std;

double vv(double x) {
	return cos(x);
}


void euli(double a, double b, int m, double y0){
	double VX[m+1];
	double VY[m+1];

	double h = (b - a)/m;
	double x = a;
	double y = y0;

	VX[0] = x;
	VY[0] = y;

	double xy = vv(x); 
	for(int i = 1 ; i <= m ;i++){
		x = a + i*h;
		y = y + h*xy;

		xy = vv(x); 

		printf("X = %.5lf | Y = %.5lf\n",x,y);

		VX[i] = x;
		VY[i] = y;
	}



}

int main(){
	double x,y,z;
	int m;
	system("cls");
	printf("Algoritmo de Euler!\n");

	printf("Digite o limite inferior, superior, numero de intervalos e valor inicial\n");
	cin >> x >> y >> m >> z;

	euli(x,y,m,z);
}