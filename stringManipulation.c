/*
About: This is a program for string manipulation.
Author: Anil ROy
*/
#include<stdio.h>
#include<string.h>
int main(){
    int x;

    char myChar[10], YourChar[10];
    printf("Enter a String: \n");
    fgets(myChar, sizeof(myChar), stdin); //Standart input
    x=strlen(myChar)-1; // remove new line -1
    printf("Lenght of the character: %d\n", x);
    strcpy(YourChar,myChar);
    printf("The copied Charater is:%s",YourChar);
    return 0;
    
}