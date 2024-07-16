/*
About: Thsi program will update the element of a Array.
Author: Anil Roy
*/
#include<stdio.h>
int main(){
int myArray[2][3];
    int i, j, num;
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

    printf("Enter the index 0f row and column of array want to update:\n");
    scanf("%d%d", &i,&j);
    printf(" Enter the number you want to update:");
    scanf("%d", &num);
    myArray[i][j]=num;

    printf("------Updated  element of the array-----\n");
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