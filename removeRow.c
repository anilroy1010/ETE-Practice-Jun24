#include<stdio.h>
int main(){

    int myArray[2][3];
    int i, j, num, x;
    printf("Enter elemnts in 2-D array:\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j <3; j++)
        {
            scanf("%d", &myArray[i][j]);
        }
        
    }

    printf("--Display the elemnts--\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d\t", myArray[i][j]);
        }
        printf("\n");


    }
      
      printf("--Updated--\n");
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d\t", myArray[i][j]);
        }
        printf("\n");
        break;

    }


    return 0;

}