#include<stdio.h>
#define size 10
//define some variable and array
int a[size],b[size],c[size],d[size],temp[size];
int i,j,asize,bsize,csize,dsize;
void disarr(int *a, int len){
  for(size_t i = 0; i<len; i++){
    printf("%d\n",*a );
    *a++;
  }
}
int search(int search, int *a, int len){
  int flag;
  for(size_t i = 0; i<len; i++){
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
int diff(int *a, int *b, int asize, int bsize,int *c){
     j =0;
     for(i=0;i<asize;i++){
       if (!search(*a,b,bsize)) {
        *c = *a;
        c++;
        j++;
       }
        a = a+1;
     }
     return j;
}
//function for union
void setUnion(int *first,int firstsize, int *second, int secondsize){
   disarr(first,firstsize);
   for(i=0;i<secondsize;i++){
     if(!search(*second,first,firstsize)){
       printf("%d\n",*second );
     }
     second++;
   }
}
void main(){
  //insert clrscr() here in turboc++
  printf("Enter the size of set A and B:");
  scanf("%d %d",&asize,&bsize);
  printf("Enter the SET A\n");
  for(i=0; i<asize;i++){
    scanf("%d",&a[i]);
  }
  printf("Enter the SET B\n");
  for(i=0; i<bsize;i++){
    scanf("%d",&b[i]);
  }
  dsize = diff(a,b,asize,bsize,d);
  csize = diff(b,a,bsize,asize,c);
 printf("The union of both set is:\n");
  setUnion(d,dsize,c,csize);
  //insert getch() here in turboc++
}//end of main
