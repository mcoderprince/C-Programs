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
    printf("%d\n",node->info);
    node = node->next;
  }
}
void insert(list *node){
  node = start->next;
  New = (list *)malloc(sizeof(list));
  New->next = node;
  start = New;
  printf("Input the first node:");
  scanf("%d",&New->info);
}
void main(){

  list *node = (list *)malloc(sizeof(list));
  start = node;
int choice;

while(1){
  printf("Enter Your choice:");
  scanf("%d",&choice);
  switch (choice) {
    case 1:
    create(start);
    break;
    case 2:
      display(start);
      break;
      case 3:
      insert(start);
      break;
      case 0:
      exit(0);
  }
}



}
