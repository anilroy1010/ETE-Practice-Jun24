/*
About:This a two dimentional array
Author: Anil Roy
*/
#include<stdio.h>
int main(){

    int myArray[2][3];
    int i, j;
    printf("Enter elements of 2-D Array:\n");
    for ( i = 0; i < 2; i++)
    {
        for( j = 0; j < 3; j++)
        {
            scanf("%d", &myArray[i][j]);
        }
        
    }
    printf("------Display the element of the array-----\n");

    for ( i = 0; i < 2; i++)
    {
        for( j = 0; j < 3; j++)
        {
           printf("%d\t", myArray[i][j]);
        }
        printf("\n");
    }
      

    return 0;
}