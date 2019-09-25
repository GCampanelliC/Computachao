#include <bits/stdc++.h>

double volume(int);


int main(){
    double vol;
    int r;
    scanf("%d", &r);
    vol=volume(r);
    printf("%.2lf metros cubicos de volume\n", vol);

    return 0;

}
double volume(int ra){
  double volu;
  volu=(((4*3.14159265359)*(ra*ra*ra))/3);

  return volu;
}
