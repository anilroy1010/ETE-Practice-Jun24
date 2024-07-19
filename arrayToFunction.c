/*
About: This program will get an array as argument of a function and and display value.
Author: Anil Roy 
*/
#include<stdio.h>
void myFunc(int myArray[]){
   int i;
   for ( i = 0; i < 5; i++)
   {
     myArray[i]=myArray[i]+10;
   }
   
}
int main(){
    int myArray[5];
    printf("Enter the array elements:\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &myArray[i]);
    }
    printf("--Display The Array--\n");
    for ( int i = 0; i < 5; i++)
    {
        printf("%d\t", myArray[i]);
    }
    printf("\n");
    myFunc(myArray);
    printf("---After Function Called---\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", myArray[i]);
    }
    
    return 0;
}