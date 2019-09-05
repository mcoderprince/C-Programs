/*
PROGRAM TO FIND THE DIFFRENCE TO SETS
Coded By: Prince Vishwakarma
DATE:5,SEPTEMBER,2019
TIME:8:OO PM
*/

#include <stdio.h>
#include "mylib.h"
int main() {
  int setA[50];
  int setB[50];
  int setC[50];
  int find,k,lensetA,lensetB;
  k = 0;
// Enter the element of set A
  printf("Enter the number of element you want in set A:\n");
  scanf("%d",&lensetA);
  printf("Enter the elements of set A\n" );
  for (int i = 0; i < lensetA; i++) {
    scanf("%d",&setA[i] );
  }
// Enter the element of set B
  printf("Enter the number of element you want in set B:\n");
  scanf("%d",&lensetB);
  printf("Enter the elements of set B\n");
  for (int i = 0; i < lensetB; i++) {
    scanf("%d",&setB[i] );
  }

//Performing diffrence opration on set

for (int i = 0; i < lensetA; i++) {
  find = setA[i];
  printf("Valueof find id %d\n",find );
  //search(VALUE WHICH YOU WANT TO SEARCH,ADDRESS OF ARRAY, LENGTH OF ARRAY)
  if(search(find,setB,lensetB)){
   printf(" %d id found \n",find);
  }
  else{
    printf("%d is not found\n",find);
    setC[k] = find;
    k++;
  }
}

printf("DIFFRENCE is\n");
for (int i = 0; i < k; i++) {
  printf("%d\n",setC[i]);
}

  return 0;
}
