#include<bits/stdc++.h>

main(){

int v1, v2;
int *p;
v1= 5;
p = &v1;
v2 = *p;

printf("%d %d %p\n", v1, v2, p);


short int x, *p1, *p2, *p3,*p4;

p1 = &x;
p2 = p1+1;
p3 = p2+1;
p4 = p3+1;

printf ("%p %p %p %p", p1,p2,p3,p4);




}




