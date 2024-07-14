/*
About: This program  will print the following  number Pattern.
Used  while LOOP
author:Anil Roy 
*/
#include<stdio.h>
int main(){

    int i, j;
    i=1;
    while (i<=5)
    {
        j=1;
        while (j<=i)
        {
            printf("%d", j);
            j++;
        }
        printf("\n");
        i++;
        
    }
    return 0;
    
}