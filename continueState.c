/*
About: This simple program is for CONTINUE statement.
Used WHILE loop and IF condition.
Author: Anil Roy
*/
#include<stdio.h>
int main(){
int i;
i=1;
while (i<=15)
    {
    printf("%d\n", i++);
    if(i<7)
    continue;
    if (i==11)
    break;    
    
    }

return 0;
}