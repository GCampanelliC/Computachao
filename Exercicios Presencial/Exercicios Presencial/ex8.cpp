 #include <bits/stdc++.h>

int dia(int v[6][6]){

  int i=0,ii=0,me=999999999;

    for(i=0;i<6;i++){
        for(ii=0;ii<6;ii++){
        if(i==(5-ii)){
            if(v[i][ii]< me){
              me = v[i][ii];
           }
        }
    }
}
    return me;
}


int main(){
    int a[6][6];
    int l,c, m;
    for(l=0;l<6;l++){
        for(c=0;c<6;c++){
            scanf("%d", &a[l][c]);
    }
}
    m=dia(a);

    printf("%d\n", m);

  return 0;
}





