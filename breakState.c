/*
About: This program is about the break statement. 
Used while Loop and if conditio.
Author: Anil Roy
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i;
    i=1;
    while (i<=10)
    {
        if(i==7)
        break;
        printf("%d\n", i); /* code */
        i++;
    }
    return 0;
     
}