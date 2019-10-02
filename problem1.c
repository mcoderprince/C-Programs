#include<stdio.h>
#include "mylib.h"

int main(){
  int n,a[10],b[10];
  int sizea,sizeb,search,count=0;
  // ask the size of set A
  sizea = input("Enter the size of set A:");
  //get the list of first set
  for(int i=-0;i<sizea;i++)
     scanf("%d",&a[i]);

    //get the list of first set
  printf("Enter the numbers you want to search\n");
  for(int i=0;i<sizea;i++)
     scanf("%d",&b[i]);

  for(int i=0;i<sizea;i++){
    search = b[i];

    for(int j=0;j<sizea;j++){
      if(search == a[j])   count++;
    }
    if(count == 0) printf("Not found\n");
    else printf("%d\n",count);
    count = 0;
  }

  return 0;
}
