/*
About: This program  will get the elements of a ARRAY and  display it.
Author: Anil Roy
*/
#include<stdio.h>
int main(){
    int myArray[5], i;
    for(i=0; i<5; i++)
      {
        printf("Enter myArray[%d]:\n", i);
        scanf("%d",&myArray[i]);
      }
      printf("Displaying element of myArray:\n");
      for ( i = 0; i < 5; i++)
      {
        printf("%d\t", myArray[i]);
      }

    return 0;
}