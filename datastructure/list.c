/*
Various operation of linked list using array
*/
#inlude<stdio.h>
#include<stdlib.h>
struct node{
  int data,next;
}a[10];

int create();
void display(int head);
void insert();
void delete();
void search();

void main(){
 char ans;
 int i,head,choice;
 do{
   printf("\n Main Menu\n");
   printf("1. create \n 2.display \n 3. insert \n 4. delete \n 5. search \n 6. exit\n");
   printf("Enter your choice\n");
   scanf("%d",&choice);
   switch (choice) {
     case 1:
           for(i = 0; i<10;i++)
              a[i].data = -1;
           head = create();
           break;
    case 2:
           display(head);
           break;
    case 3:
          insert();
          break;
    case 4:
          delete();
          break;
    case 5:
          search();
          break;
    case 6:
          exit(0);
   }
   printf("Do you wish to go to main menu\n");
   ans = getch();
 }while(ans == 'y' || ans == 'Y');
}//end of main()

int create(){
  int i, head;
  printf("Enter the index of head node\n");
  scanf("%d",&i);
  head = i;
  while(i!= -1){
    printf("Enter the data and next\n");
    scanf("%d %d",&a[i].data, &a[i].next);
    i = a[i].next;
  }
  return head;
}

void display(int i){
  printf("(");
  while(i!= -1){
    if(a[i].data == -1)
      printf("Nothing\n");
    else
      printf("%d",a[i].data);
    i = a[i].next;
  }
  printf("NULL\n");
}

void insert(){
  int i, Newdata, temp;
  printf("Enter the new data which is to be inserted:");
  scanf("%d",&Newdata);
  
}
