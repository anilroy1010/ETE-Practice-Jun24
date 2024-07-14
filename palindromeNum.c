/*
About: This code will check and print a palindrome number.
Used while Loop and if ...else Conditiom.
Author: Anil Roy 
*/
#include<stdio.h>

//Function to check a palindrome number.
int isPalindrome(int num){
    int reverseNum=0;
    int originalNum=num;
while (num>0)
{
    int remainder=num%10;
    reverseNum=reverseNum*10+remainder;
    num=num/10;
}
if (originalNum==reverseNum)
    return 1;
else 
    return 0;
}

int main(){
    int start , end;
    printf("Enter the range :\n");
    scanf("%d%d",&start,&end);
    printf("Palindrome number between %d and %d\n", start, end);
    // Crucial Part of the code/LOGIC
    for (int i = start; i <=end; i++)
    {
        if (isPalindrome(i))
        {
            printf("%d\n", i);
        }
        
    }
    return 0;
}
    

