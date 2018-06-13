#include <stdio.h>

void bubble(int tes, int m, int a[m], int n){
  int c,e;
  if (tes == 1){
    tes = 0;
    for (c = 0 ; c < n ; c++){
      if (a[c] > a[c+1]){
        e = a[c];
        a[c] = a[c+1];
        a[c+1] = e;
        tes = 1;
        if (c == n){
          n--;
        }
      }
    }
    bubble(tes,m,a,n);
  }
}

int main(int argc, char const *argv[]) {
  int a[4] = {1, 3, 2, 4};
  int c,d=4;
  bubble(1,d,a,d-1);
  printf("Hasil : \n");
  for (c = 0 ; c <  4; c++){
    printf("%d ", a[c]);
  }
  return 0;
}
