#include<stdio.h>
int main(){
  int arr[10],i,n,num,found =0;
  printf("Enter the no. of elements in the array:");
  scanf("%d",&n);

  printf("Enter the elements\n");
  for(i=0; i<n; i++)
     scanf("%d",&arr[i]);

  printf("Enter the number that you wan to search:");
  scanf("%d",&num);

  for(i=0; i<n; i++){
    if(arr[i] == num){
      found = 1;
      printf("%d is found in array at position %d",num,i);
      break;
    }
  }
  if(found == 0)
  printf("%d does not exist in the array\n",num);
  return 0;
}
