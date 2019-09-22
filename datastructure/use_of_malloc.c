/*
use of dynamic memory allocation function malloc() this program find the sum and Average
of all the elements in array
*/
#include<stdio.h>
#include<stdlib.h>
void main(){
  int *ptr;
  int i,n,sum=0;
  float avg;
  printf("Enter the size of Array:");
  scanf("%d",&n);
  //allocate memory for number is interger
  ptr = (int *)malloc(n*sizeof(int));
  if(){
    printf("The required amount of memory is not available");
    exit(0);
  }
  printf("Enter the elements of the Array:\n");
  for(i=0;i<n;i++){
    printf("Enter the element:");
    scanf("%d",ptr+i);
  }
  //find the sum
  for(i=0;i<n;i++){
    sum += *(ptr+i);
  }
  printf("The sum is %d\n",sum);
  avg = (sum/n);
  printf("Average is %f",avg);
  free(ptr);
}
