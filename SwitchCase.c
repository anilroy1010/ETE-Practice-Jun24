/*About: Enter two integer numbers and do the Arithmetic Operation
Author:Anil Roy
*/
#include<stdio.h>

int main(){
    int num1, num2, result, choice;
    printf("Enter the first number:\n");
    scanf("%d", &num1);
    printf("Enter the second Number:\n");
    scanf("%d", &num2);
    printf("----Enter Your choice---\n");
    //scanf("%d", &choice);
    printf("Enter 1 for addition.\n");
    printf("Enter 2 for subtraction.\n");
    printf("Enter 3 for Multiplication.\n");
    printf("Enter 4 for Division.\n");
    printf("Enter 5 for Modulas.\n");
    scanf("%d", &choice);
    
    switch (choice)
    {
    case 1:
        result=num1+num2;
        printf("Sum is: %d", result);
        break;
    case 2:
         result=num1-num2;
         printf("The Difference is:%d", result);
         break;
    case 3:
         result=num1*num2;
         printf("The Product is: %d", result);
         break;
    case 4:
         result=num1/num2;
         printf("The Quotient is: %d", result);
         break;
    case 5:
         result=num1%num2;
         printf("The Modulas is: %d", result);
         break;
    default:
        printf("Wrong Input");
        break;
    }
    return 0;
}