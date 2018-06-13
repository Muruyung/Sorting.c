#include <stdio.h>

int main(){
  int a[10] = {2,4,1,10,9,6,8,3,5,7};
  int b,c,d,e;
  for (c = 0 ; c < 10-1 ; c++){
    b = c;
    for (d = c+1 ; d < 10 ; d++){
      if (a[b] > a[d]){
        b = d;
      }
    }
    e = a[c];
    a[c] = a[b];
    a[b] = e;
  }
  for (c = 0 ; c < 10 ; c++){
    printf("%d ", a[c]);
  }
  return 0;
}
