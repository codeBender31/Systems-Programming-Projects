// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
int main() {
//Abel Hernandez
//Aih0013
//Declare variable pointer
int *int_ptr = malloc(2 * sizeof *int_ptr);
//If malloc fails return but print message
if(int_ptr == NULL)
{
    printf("Sorry, the mem allocation failed. Please try again\n");
    //Exit with a 1
    return 1;
}
printf("Please provide 2 numbers to swap\n");
printf("What is the first number? \n");
scanf("%d", &int_ptr[0]);
printf("What is the second number? \n");
scanf("%d", &int_ptr[1]);
//Print before swapping
printf("First Before Swap: %d \n", int_ptr[0]);
printf("Second Before Swap: %d \n",  int_ptr[1]);
//Conduct swapping
int_ptr[0] = int_ptr[0]^int_ptr[1];
int_ptr[1] = int_ptr[0]^int_ptr[1];
int_ptr[0] = int_ptr[0]^int_ptr[1];
//Print swapped elements
printf("First After Swap: %d \n", int_ptr[0]);
printf("Second After Swap: %d \n",  int_ptr[1]);
//Success
//Free up memory
free(int_ptr);

    return 0;
}