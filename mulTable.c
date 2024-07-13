/*
About: This simple code will print the multiplication table of 1 to 25. Used Nested For Loop.
Author: Anil Roy
*/
#include<stdio.h>
int main(){
    int i, j, res;
    for ( i = 1; i <=25; i++)
    {
        for ( j = 1; j <=10; j++)
        {
            res= i*j;
            printf("%d x %d = %d\n",i,j, res );
        }
        printf("\n Next\n");
    }
    return 0;
}