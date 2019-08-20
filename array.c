#include<stdio.h>
#include<conio.h>
//create a structure
struct node{
  int data,next;
}a[10];

int create();
void display(int head);
void insertElement();
void delete();
void main(){
  int head;
  head = create();

  display(head);
  //insertElement();

  delete();
  display(head);
}
//defining the function
//create the function to create the list
int create(){
  int head,i;
  printf("Enter the head of node:");
  scanf("%d",&head);
  i = head;
  while(i != -1){
    printf("Enter the value:");
    scanf("%d",&a[i].data);
    printf("Ener the next index");
    scanf("%d",&a[i.next);
    i = a[i].next;
  }
  return head;
}


//create the function to create display the list

void display(int head){
  int i;
  i = head;
  while(i != -1){
    printf("%d\n",a[i].data);
    i = a[i].next;
  }
}

//define the function to insert the element at any index

void insertElement(){
  int index,data;
  printf("Enter the index on which you want to insert the Element:");
  scanf("%d",&index);
  printf("Enter the value you want to insert :");
  scanf("%d", &data);
  a[index].data = data;
  printf("Data is inserted \n");
}


//define function to delete the data
void delete(){
  int index;
  printf("Enter the index on which you want to delete the data:" );
  scanf("%d",&index);
  a[index].data = ;
}
