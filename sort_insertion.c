#include <stdio.h>

int main(){
  int a[10] = {2,4,1,10,9,6,8,3,5,7};
  int b,c,d;
  for (c = 0 ; c < 10 ; c++){
    b = a[c];
    d = c-1;
    while (b < a[d] && d >= 0){
      a[d+1] = a[d];
      d--;
    }
    a[d+1] = b;
  }
  for (c = 0 ; c < 10 ; c++){
    printf("%d ", a[c]);
  }
  return 0;
}
