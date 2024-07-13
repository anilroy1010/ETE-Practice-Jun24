/* About: This program code will get a number from user and produce the sum of
 all the digits of the number. Use of for loop.
 Author: Anil Roy
*/
#include<stdio.h>
int main(){
    int number;
    int digit;
    int sum;
    printf("Enter the number:\n");
    scanf("%d", &number);
    for ( sum = 0; number!=0; number=number/10)
    {
       digit=number%10;
       sum=sum+digit;
    }
    printf("The Sum :%d", sum);
    return 0;
}