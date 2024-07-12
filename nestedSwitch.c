/* About: Program to manipulate arithmethc operation on two numbers using "Nested Switch", 
may be integer of flowting point numbers.
Author: Anil Roy
*/
#include<stdio.h>
#include<conio.h>
void main(){
    float num1, num2;
    float result;
    char choice;
    printf("Enter the first number:\n");
    scanf("%f", &num1);
    printf("Enter the Operator: \n");
    scanf("%s", &choice);
    printf("Enter the second number:\n");
    scanf("%f", &num2);

    switch (choice)
    {
    case '+':
         result=num1+num2;
         printf("SUM: %.2f", result);
        break;
    case '-':
        result=num1-num2;
        printf("DIFFERENCE: %.2f", result);
        break;
    case '*':
         result=num1*num2;
         printf("PRODUCT: %.2f", result);
         break;
    case '/':
         result=num1/num2;
         printf("QUOTIENT: %.2f\n",result);

    printf("Do you want to do Everything in one GO?? Enter A\n");
    scanf("%s", &choice);
    switch (choice)
    {
    case 'A':
        result=num1+num2;
        printf("SUM: %.2f\n", result);
        result=num1-num2;
        printf("DIFFERENCE: %.2f\n", result);
        result=num1*num2;
        printf("PRODUCT: %.2f\n", result);
        result=num1/num2;
        printf("DFFERENCE:%.2f\n", result);
        printf("-----You Typed All(A)-----\n");
        printf("Enter a arithmetic  Operator:\t");
        scanf("%s", &choice);
        switch (choice)
        {
         case '+':
                  result=num1+num2;
                  printf("SUM: %.2f\n", result);
                  break;
         case '-':
                  result=num1-num2;
                  printf("DIFFERENCE: %.2f\n", result);
                  break;
         case '*':
                  result=num1*num2;
                  printf("PRODUCT: %.2f\n", result);
                  break;
         case '/':
                  result=num1/num2;
                  printf("QUOTIENT: %.2f\n",result);

        //default:
           // printf("--Enter Arithmetic Operator only--");
           // break;
        }
        break;
    }
    default:
        printf("Enter Arithmetic Operator Only.");
        break;
    }
    getch();
    
}