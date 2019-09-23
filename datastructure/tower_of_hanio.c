#include<stdio.h>
void tower(int n, char from, char to, char aux){
  if(n == 1){
    printf("\n Move  disk 1 from %c to %c\n",from,to);
    return;
  }
  tower(n-1, from, aux, to);
  printf(" Move disk %d   from %c to %c peg\n",n,from,to);
  tower(n-1, aux, to, from);
}
void main(){
  int n;
  printf("Enter the number of disk:");
  scanf("%d",&n);
  tower(n,'A','C','B');
}
