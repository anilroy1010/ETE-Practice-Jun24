/*
About: This simple code will display the following Pattern--
A
AB
ABC
ABCD
ABCDE
Used Nested for loop.
Author: Anil Roy
*/
#include<stdio.h>
int main(){
    int i , j;
    for ( i = 65; i <=69; i++)
    {
        for ( j = 65; j<=i; j++)
        {
            printf("%c", j);
        }
        printf("\n");
    }
    return 0;
}