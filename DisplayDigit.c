/*
About: This simple program will Diplay all the digits of a Entered number by user.
Used While Loop.
Auhtor: Anil Roy.
*/
#include<stdio.h>
void main(){

    int num, digit;
    printf("Enter a number:\n");
    scanf("%d", &num);
    while (num!=0)
    {
        digit=num%10;  // geting the digits
        printf("%d\n", digit);// printing the digits
        num=num/10;  // Decrementation  statement
    }
    
}
