/*
About: This program is about external storage class
Author: Anil Roy
*/
#include<stdio.h>
extern int a=10;

void display(){
    printf("Global a: %d\n", a);
}

int main(){


    int a=30;
    printf("Local a:%d\n", a);
    display();
    return 0;
}
