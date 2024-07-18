/*
About: This Program will swap to number by using the function Call by value.
Author: Anil Roy 
*/
#include<stdio.h>
void swapNumber( int val1, int val2){
    int temp;
    temp=val1;
    val1=val2;
    val2=temp;
    printf("After swapping the Number: %d %d\n", val1, val2);
}
int main(){
    
    int num1=10, num2=13;
    printf("Before Swapping the number: %d , %d\n", num1, num2);
    swapNumber(num1, num2);
    printf("After Swapping the number(Unchanged in Main): %d, %d", num1, num2);// Value will be unchanged. 
    return 0;

}