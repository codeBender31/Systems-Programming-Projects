#include "major1.h"
int main(void) {
  //Declare input variable
  int choice;
  int input = 0;
do{
  //Prompt user for input and show menu
 printf("Enter the menu option for operation:  \n");
printf("(1) Count Leading Zeroes \n");
printf("(2) Endian Swap \n");
printf("(3) Rotate-right \n");
printf("(4) Parity \n");
printf("(5) EXIT \n");
printf("--> ");
//Store option chosen
scanf("%d", &choice);
if(choice <= 5 && !(choice < 0)){
      if(choice != 5) {
    while(input < 1 || input > 4294967295)
    {
    // printf("A correct option was chosen\n");
    printf("Enter a 32-bit number (>=1 and <= 4294967295, inclusively): ");
        scanf("%d", &input);
     }
  
    if(choice == 1){
      //Call clz
      printf("Function 1 is called\n");
      //clz(input);}
    }
    else if(choice == 2){
      //Call endian 
      printf("Function 2 is called\n");
    }
    else if(choice == 3){
      //Call rotate
      printf("Function 3 is called\n");
    }
    else if(choice == 4){
      //Call parity
      printf("Function 4 is called\n");
    }
      }
}
else{
  printf("Error: Invalid option. Please try again.\n");
}
}while(choice != 5);
  printf("Program exited \n");
  return 0;
}