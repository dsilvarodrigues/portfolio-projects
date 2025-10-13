/*Author[David Silva Rodrigues]
Date[8/10/2025]*/
#include <stdio.h>

int main() {
    int number1;
    int number2;
    char operation;
    int sum;
    int subtraction;
    float division;
    int multiplication;
    int idx;
//variables    
    
    puts("--------------Welcome to the calculator--------------\n");
    printf("Enter the numbers you want to calculate:");
    scanf("%d %d",&number1, &number2);
    puts("\nChoose the operation you want to calculate:");
    puts("1.+");
     puts("2.-");
      puts("3./");
       puts("4.*\n");
       scanf(" %c",&operation);
//inputs and outputs
switch(operation)
       {
           case '1':
           sum= number1 + number2;
           printf("\nThe sum between %d and %d is %d\n",number1,number2,sum);
           break;
           
           case '2':
          subtraction = number1 - number2;
           printf("\nThe subtraction between %d and %d is %d\n",number1,number2,subtraction);
           break;
           
           case '3':
             if(number2 == 0)
    {
printf("ERROR: Cannot divide by zero!\n");
    break;
    }
    else{
           division = (float) number1 / number2;
           printf("\nThe division between %d and %d is %.2f\n",number1,number2,division);
          
           break;
    }
           case '4':
             multiplication = number1 * number2;
           printf("\nThe multiplication between %d and %d is %d\n",number1,number2,multiplication);
           break;
           
           default :
    printf("ERROR please select a valid option");
       
    break;
       
       }

    return 0;

}
