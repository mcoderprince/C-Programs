#include <stdio.h>
#include <stdlib.h>
//SWAPS TO VALUES
int swap(int *a, int *b){
  int temp = *a;
  *a        = *b;
  *b        = temp;
}
//TAKES INPUT FROM USER
int input(char say[50]){
  int number;
  printf("%s:",say );
  scanf("%d",&number);
  return number;
}
// DISPLAYS ARRAY
void disarr(int *a, int size){
  for(size_t i = 0; i<size; i++){
    printf("%d\n",*a );
    *a++;
  }
}

//SEARCH ELEMENT IN THE ARRAY
int search(int search, int *a, int size){
  int flag;
  for(size_t i = 0; i<size; i++){
     if(*a != search){
       flag = 0;
       *a++;
     }
     else{
       flag = 1;
       break;
     }
  }
 return flag;
}
