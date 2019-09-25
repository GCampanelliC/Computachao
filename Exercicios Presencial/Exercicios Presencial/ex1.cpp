#include <bits/stdc++.h>

int acrescimo(void);
int s1,s2;

int main(){
    int acre;

    scanf("%d", &s1);
    scanf("%d", &s2);
    acre=acrescimo();
    printf("%d %% de acrescimo\n", acre);

    return 0;

}
int acrescimo(){
  int acr,v1;
  v1 = ((s2-s1)*100)/200;

  return v1;
}
