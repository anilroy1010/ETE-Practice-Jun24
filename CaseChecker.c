/*
About: This program will get character and check UPPER case , 
Lwer Case, Gigits, Space and special charactor.

Author: Anil Roy
*/
#include<stdio.h>
#include<ctype.h>  // Inbuild c library
int main(){
 char myChar;
 printf(" Enter a character to check:\n");
 scanf("%c", &myChar);
 if (isupper(myChar))
 {
    printf("This is a UPPER CASE character.");
 }
 else if (islower(myChar))
 {
    printf("This is a LOWER CASE charater.");
 }
 else if (isdigit(myChar)){
    printf("This is a DIGIT.");
 }
  else if (isspace(myChar)){
    printf("This is a SPACE.");
 }
 else{
    printf("This is a SPECIAL character.");
 }
  
 return 0;

}