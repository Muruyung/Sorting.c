#include<stdio.h>
void quicksort(int n, int a[n],int depan,int belakang){
   int c, d, pivot, e;
   if(depan<belakang){
      pivot=depan;
      c=depan;
      d=belakang;
      while(c<d){
         while(a[c]<=a[pivot]&&c<belakang){
           c++;
         }
         while(a[d]>a[pivot]){
           d--;
         }
         if(c<d){
            e=a[c];
            a[c]=a[d];
            a[d]=e;
         }
      }
      e=a[pivot];
      a[pivot]=a[d];
      a[d]=e;
      quicksort(n,a,depan,d-1);
      quicksort(n,a,d+1,belakang);
   }
}

int main(){
   int c, n;

   printf("How many elements are u going to enter?: ");
   scanf("%d",&n);
   int a[n];

   printf("Enter %d elements: \n", n);
   for(c=0;c<n;c++)
      scanf("%d",&a[c]);

   quicksort(n,a,0,n-1);

   printf("Order of Sorted elements: ");
   for(c=0;c<n;c++)
      printf(" %d",a[c]);

   return 0;
}
