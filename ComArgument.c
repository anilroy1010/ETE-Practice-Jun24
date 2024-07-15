/*
About: This program is about command line argument , it take two integer 
arguments from the command line and print their sum.
Author: Anil Roy
*/
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
//argc is argument count and argv is argument vector.

{

    if (argc!=3){
   printf(" Usage: %s<num1> <num2>\n", argv[0]);
   return 1;
    }
    
int num1=atoi(argv[1]);
int num2=atoi(argv[2]);
int sum=num1+num2;
printf("Sum: %d\n",sum );
return 0;

}