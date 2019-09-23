#include<stdio.h>
#define size 50
struct stack{
  int s[size];
  int top;
}st;

void push(int item){
  st.top++;
  st.s[st.top] = item;
}

int stempty(){
  if(st.top == -1)
  return 1;
  else
   return 0;
}

int pop(){
  int item;
  item = st.s[st.top];
  st.top--;
  return item;
}
void main(){
  int i,item,num;
  st.top = -1;
  printf("Enter the decimal number:");
  scanf("%d",&num);
  while(num>=1){
    item  = num %2;
    push(item);
    num = num /2;
  }
  if(!stempty()){
    while(st.top>= 0){
      printf("%d",pop());
    }
  }
}
