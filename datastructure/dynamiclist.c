#include<stdio.h>
#include<stdlib.h>
typedef struct link{
  int info;
  struct link * next;
}list;

int i;
list *newnode,*New;
list *start = NULL;
void create(list * node){
  char ch;
  i = 0;
 gets(&ch);
   while(ch != 'n'){
    printf("Input the node %d :",i+1);
    scanf("%d",&node->info);
    newnode = (list *)malloc(sizeof(list));
    node->next = newnode;
    node = node->next;
    i++;
    printf("Input choice: n for break:");
    scanf("%s",&ch );
}
}

void display(list *node){
  printf("Linked list\n");
  while(node != newnode){
    printf("%d->",node->info);
    node = node->next;
  }
}
void insert_Start(list *first){
  New = (list *)malloc(sizeof(list));
  printf("Input the first node:");
  scanf("%d",&New->info);
  New->next = first;
  start = New;
}
//insert element at end of list
void insert_End(list *node){
  printf("Input the node:");
  scanf("%d",&node->info);
  newnode = (list *)malloc(sizeof(list));
  node->next = newnode;
  node = node->next;

}


//Start of main function
void main(){

  list *node = (list *)malloc(sizeof(list));
  start = node;
int choice;

while(1){
  printf("\nEnter Your choice:");
  scanf("%d",&choice);
  switch (choice) {
    case 1:
    create(start);
    break;
    case 2:
      display(start);
      break;
      case 3:
      insert_Start(start);
      break;
      case 4:
      insert_End(newnode);
      break;

      case 0:
      exit(0);
  }
}
}
