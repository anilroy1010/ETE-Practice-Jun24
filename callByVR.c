/*
About: This program is for Call by value and Call by reference
Author: Anil Roy
*/
#include<stdio.h>
void incrementByvalue(int num){
    num++;
    
}

int incrementByReference(int *num){
     (*num)++;
   
}
int main(){
    int value=10;
    
    incrementByvalue(value);
    printf("Value After call by value:%d\n", value);
    incrementByReference(&value);
    printf("value after call by reference: %d", value);

    return 0;
}