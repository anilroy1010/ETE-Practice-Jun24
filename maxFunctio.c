/*
About: This program is the use of function to find greatest number.
Author: Anil Roy
*/
#include<stdio.h>
int maxFinder(int num1, int num2);

int main(){
 int x, y;
 printf("Enter First number:\n");
 scanf("%d", &x);
 printf("Enter the Second Number:\n");
 scanf("%d", &y);
 maxFinder(x,y);
 
return 0;
}
int maxFinder(int num1, int num2){
    if (num1>num2)
    {
        printf("%d is the greatest Number.",num1);
    }
    else{

        printf("%d is greatest Number.", num2);
     }
    return 0;
}