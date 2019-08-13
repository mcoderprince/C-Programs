#include <conio.h>
#include <stdio.h>
#include<stdlib.h>
struct node {
  int data;
  struct node *next;
};
void display(struct node *n){
  while(n!=NULL){
    printf("%d\n",n->data );
    n = n->next;
  }
}


//function for searching the element in the list
void search(struct node *n, int s){
  int status;
  while(n!=NULL){
    if (n->data == s) {
      status =1;
      printf("The value  %d is found in the list \n",s );
      break;
    } else {
    n = n->next;
    status = 0;
    }
  }
  if (status==0) {
    printf("Value %d is not found in the list\n",s );
  }
}

//start of main() function
int main(){
  int number;
  struct node  *head;
  struct node *second;
  struct node *last;

  printf("Enter the number you want to search:");
  scanf("%d",&number);
  head = (struct node *) malloc(sizeof(struct node));
  second = (struct node *) malloc(sizeof(struct node));
  last = (struct node *) malloc(sizeof(struct node));
  head->data = 1;
  head->next = second;

  second->data = 2;
  second->next = last;

  last->data = 3;
  last->next = NULL;
  display(head);
  search(head,number);
  return 0;
}
