/*
About: This is a EVEN LOOP program.
When the number of execution of a loop is known or able 
to count how many time will it print is known as EVEN Loop. 
Author: Anil Roy
*/
#include<stdio.h>
void main(){
    int i;
    i=1;
    int count;
    count=0;
    while (i<=10)
    {
       printf("%d\n",i); /* code */
       i++;
       count++;
    }
    printf("Loop Execution Counted: %d times , so its a EVEN Loop.\n", count);
    
}