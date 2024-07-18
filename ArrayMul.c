/*
About: This program will give the product of two array.
Author: Anil roy
*/
#include<stdio.h>
#include<stdlib.h>
int main(){

    int myArray1[10][10], myArray2[10][10];
    int i, j, r, c, k;
    int mul[10][10];
    printf("Numbers of column and and Row should be Equal:\n");
    printf("Enter the number of row:");
    scanf("%d", &r);
    printf("Enter the number of column:");
    scanf("%d", &c);
    printf("Enter the First Matrix Element:\n");
    for ( i = 0;i < r; i++)
    {
        for ( j= 0; j < c; j++)
        {
          scanf("%d", &myArray1[i][j]);
        }
        
    }
    printf("Enter the Second Matrix Element:\n");

    for ( i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &myArray2[i][j]);
        }
        
    }
    printf("---Display the product of the two array:---\n");
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            mul[i][j]=0;
            for ( k = 0; k < c; k++)
            {
                mul[i][j]+=myArray1[i][j]*myArray2[i][j];
            }
            
        }
        
    }
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            printf("%d\t", mul[i][j]);
        }
        printf("\n");
    }
    
    return 0;
    
    }