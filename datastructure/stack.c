#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 10
struct stack{
  int s[size];
  int top;
}st;
int stempty(){
  if(st.top == -1)
    return 1;
  else
    return 0;
}

int stfull(){
  if(st.top >= size-1)
     return 1;
  else
    return 0;
}

void push(int item){
  st.top++;
  st.s[st.top] = item;
  printf("%d is pused \n",st.s[st.top]);
}

int pop(){
  int item = st.s[st.top];
  st.top--;
  return item;
}
void display(){
  int i;
  if(stempty())
    printf("Stack is empty\n");
  else{
    printf("Elements in Stack:\n");
    for(i = st.top; i>= 0; i--)
    printf("%d\n",st.s[i]);
  }

}


int main(){
  int item,ch;
  char ans;
  st.top = -1;

  printf("Emplementation of Stack \n");
  do{
    printf("Main Menu\n");
    printf("1. Push \n 2. Pop \n 3. Display \n 4. Exit\n");
    scanf("%d",&ch);

    switch (ch) {

      case 1:
        if(stfull())
          printf("Stack is full\n");
        else{
          printf("Enter the item to be pushed:");
          scanf("%d",&item);
          push(item);
        }
        break;

      case 2:
        if(stempty())
          printf("Stack is empty\n");
        else
          printf("Poped item is %d",pop());
        break;
      case 3:
        display();
        break;
      case 4:
        exit(0);
    }
  }while(1);

  return 0;
}
