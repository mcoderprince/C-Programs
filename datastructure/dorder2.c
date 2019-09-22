/*
To find the decending order if data is in assending
*/

#include<stdio.h>
#include<stdlib.h>
  int main(int argc, char const *argv[]) {
  int a[10],b[10],n,i,j,mid,temp;
  printf("How many elements you want to enter\n");
  scanf("%d",&n);
  printf("Enter the elements in accending order\n");
  for(i = 0; i<n; i++){
    scanf("%d",&a[i]);
  }

  printf("The elements in decending order\n");

  mid = n/2;
  for(i = 0; i<mid; i++){
    j= (n-1)-i;
    temp = a[i];
    a[i] = a[j];
    a[j] = temp;
  }
  for(i = 0; i<n; i++) {
    printf("%d\n",a[i] );
  }
return 0;
}
