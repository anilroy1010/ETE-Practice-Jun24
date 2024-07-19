/*
About : This program will pass some element of a array to a function and display the elements.
Author: Anil Roy
*/
#include<stdio.h>

void myFunc(int num)
{ 
    printf("%d\t", num);
    
}
int main(){
    int i;
    int myArray[5];
    printf("Enter the elements of a Array: \n");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d", &myArray[i]);
    }
    //printf("--Passing the Array element by element.--")
    printf("Display Array from Function:\n");
    for ( i = 0; i < 5; i++)
    {
        myFunc(myArray[i]);
    }
    return 0;

    
}