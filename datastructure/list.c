/*
Various operation of linked list using array
*/
#include<stdio.h>
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
   scanf("%s",&ans);
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

    else
      printf("%d,",a[i].data);
    i = a[i].next;
  }
printf(")");
}

void insert(){
  int i, Newdata, temp;
  printf("Enter the new data which is to be inserted:");
  scanf("%d",&Newdata);
  printf("Enter the data after which you want to insert:");
  scanf("%d",&temp);
  for(i =0; i<10;i++){
    if(a[i].data == temp)
    break;
  }
  if(a[i].data = -1){
    a[i+1].next = a[i].next;
    a[i].next = i+1;
    a[i+1].data = Newdata;
  }
}

void delete(){
  int i,temp,current,Newnext;
  printf("Enter the node to be deleted:");
  scanf("%d",&temp);
  for(i=0;i<10;i++){
    if(a[i].data == temp){
      if(a[i].next == -1){
        a[i].data = -1;
      }
    current = i;
    Newnext = a[i].next;
    }
  }
  for(i=0;i<10;i++){
    if(a[i].next == current){
      a[i].next = Newnext;
      a[current].data = i;
    }
  }
}

void search(){
  int i,temp,flag=0;
  printf("Enter the element to be searched:");
  scanf("%d",&temp);
  for(i=0;i<10;i++){
    if(a[i].data == temp){
      flag = 1;
      break;
    }
  }
  if(flag == 1)
  printf("%d node is present in list\n",temp);
  else
  printf("The node is not present in the list\n");
}
