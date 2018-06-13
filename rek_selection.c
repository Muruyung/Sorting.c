#include <stdio.h>

void select(int n,int a[n], int b, int c, int d){
  int wow;
  if (d < n){
    if (a[c] > a[d] && a[b] > a[d]){
      select(n,a,d,c,d+1);
    }else {
      select(n,a,b,c,d+1);
    }
  }else
  if (c < n-1){
    wow = a[c];
    a[c] = a[b];
    a[b] = wow;
    select(n,a,c+1,c+1,c+2);
  }
}

int main(){
  int a[10] = {3,7,1,4,10,8,2,9,5,6};
  int c;
  select(10,a,0,0,1);
  for (c = 0 ; c < 10 ; c++){
    printf("%d ", a[c]);
  }
  return 0;
}
