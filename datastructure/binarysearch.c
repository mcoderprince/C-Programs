#include<stdio.h>
int main(){
  int arr[10],num,i,n,big,mid,end;
  printf("Enter the numbers of elements in array:");
  scanf("%d",&n);

  for(i =0; i<n; i++)
    scanf("%d",&arr[i]);

  printf("Enter the number which you want to search:");
  scanf("%d",&num);
  big = 0; end = n-1;
  while(big <= end){
    mid = (big+end)/2;
    if(arr[mid] == num){
      printf("%d element in array at postion %d",num,mid);
      break;
    }
    else {
    if(arr[mid] > num){
         end = mid - 1;
         }
         else{
         big = mid + 1;
       }
     }
  }
  if(big > n)
    printf("%d element not found \n",num );
}
