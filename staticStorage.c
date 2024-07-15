/*
About: This program is about static Storage Class
Author: Anil Roy
*/
#include<stdio.h>
void display(){

    int y=0;
    static int x=0;
    y=y+1;
    x=x+1;
    printf("X=%d  y=%d\n", x,y);
    return;
}

int main(){
       int i;
       for ( i = 1; i < 5; i++)
       {
        display();
       }

       return 0;
       

}
