/*
About: This simple code will print the multiplication table of 1 to 25. Used Nested For Loop.
Author: Anil Roy
*/
#include<stdio.h>
int main(){
    int i, j, result;
    for ( i = 1; i <=25; i++)
    {
        for ( j = 1; j <=10; j++)
        {
            result= i*j;
            printf("%d x %d = %d\n",i,j, result );
        }
        printf("\n Next\n");
    }
    return 0;
}