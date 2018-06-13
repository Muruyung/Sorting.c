#include <stdio.h>

void insert(int n, int a[n], int b , int c , int d){
  if (a[c] < a[c-1] && c-1 >= 0){
    b = a[c];
    a[c] = a[c-1];
    a[c-1] = b;
    insert(n,a,b,c-1,d);
  }else
  if (d < n){
    insert(n,a,b,d,d+1);
  }
}

int main(){
  int a[10] = {2,4,1,10,9,6,8,3,5,7};
  insert(10,a,0,1,1);
  int c;
  for (c = 0 ; c < 10 ; c++){
    printf("%d ", a[c]);
  }
  return 0;
}
