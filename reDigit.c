#include<stdio.h>
int main(){
    int num;
    int digit;
    int rev;
    printf("Enter a number: \n");
    scanf("%d", &num);
    for ( rev= 0; num!=0; num=num/10)
    {
        digit=num%10;
        rev=rev*10+digit;
    }
    
    printf("REVERSE: %d", rev);
    return 0;
}