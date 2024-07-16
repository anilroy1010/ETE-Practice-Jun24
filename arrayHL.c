/*
About: This program will find the highest and lowest element of the given array.
Author: Anil Roy
*/
#include<stdio.h>
#define SIZE 10
int main(){
   int myArray[SIZE]={ 12, 14, 7, 15, 19, 8 , 10, 50, 5, 17};
   int i;
   int max, min;
   max=min=myArray[0];
   for ( i = 0; i <SIZE; i++)
   {
     if (myArray[i]>max)
     {
        max=myArray[i];
     }
     if (myArray[i]<min)
     {
        min=myArray[i];
     }
     
   }
    
    printf("Lowest Element: %d\n", min);
    printf("Highest Element:%d\n", max);


    return 0;
}