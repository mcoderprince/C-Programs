#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
  int a[] = {1,2,3,45,5,6};
  int b[50] = {1,2,3,4,5};
  int r,i,j,last;
  r = 0;
  last = 5;
  for (i = 0; i < (sizeof(a)/sizeof(int)); i++) {
    int search = a[i];
    for (j = 0; j < (sizeof(a)/sizeof(int)); j++) {
      if (search == b[j]) {
        r = 1;
        break;
      } else {
        r = 0;
      }
    }
    if (r==0) {
      b[last] = a[i];
      last ++;
    }
  }
  //for printing the value of array b 
  i = 0;
  while (b[i]) {
    printf("%d\n",b[i] );
    i++;
  }
  return 0;
}
//end of main function
