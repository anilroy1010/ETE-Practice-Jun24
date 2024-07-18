/*
About : This program will Swap to number by the mehtod Call by Reference.
Author: Anil Roy
*/
#include<stdio.h>
void swapMyNum(int *val1, int *val2){
    int temp=*val1;
    *val1=*val2;
    *val2=temp;
}
int main(){
    int num1=13, num2=17;
    printf("Before Swapping the numbers: %d, %d\n", num1, num2);
    swapMyNum(&num1, &num2);
    printf("After swapping the the numbers: %d, %d", num1, num2); // value changed by swapping
    return 0;
    
}