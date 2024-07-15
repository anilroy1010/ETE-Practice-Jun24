/*
About: This is About Register Storage Class.
Author: Anil Roy
*/
#include<stdio.h>
int main(){

    register int i=1;
    for( i = 1; i <=50; i++)
    {
        printf(" i = %d\n", i);
    }
    
    return 0;
}