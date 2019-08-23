#include <stdio.h>

int main(void) {
  int choice,f_value, s_value;
  printf("Enter Your choice\n");
  printf(" 1. AND \n 2. OR \n 3. NOT \n");
  scanf("%d",&choice);
  switch(choice){
    case 1:
          // code for and AND
          printf("\n\t PERFORM AND OPERATION");
          printf("\nEnter the first value:");
          scanf("%d",&f_value);
          printf("Enter the second value:");
          scanf("%d",&s_value); 
          if(f_value == 1 && s_value == 1){
            printf("Result :1");
          } 
          else {
            printf("Result :0");
          }
          break;
    case 2:
         // code for or
          printf("\n\t PERFORM OR OPERATION");
          printf("\nEnter the first value:");
          scanf("%d",&f_value);
          printf("Enter the second value:");
          scanf("%d",&s_value); 
          if(f_value == 1 || s_value == 1){
            printf("Result :1");
          } 
          else {
            printf("Result :0");
          }
          break;
    case 3: 
        // code for not
         printf("\n\t PERFORM NOT OPERATION");
          printf("\nEnter the first value:");
          scanf("%d",&f_value);
          if(f_value == 1){
            printf("Result:0");
          }
          else{
            printf("Result: 1");
          }
          break;
  }
  return 0;
}
