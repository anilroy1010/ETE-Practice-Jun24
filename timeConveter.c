/*
About: This simple program will get seconds from user and convert HH:MM:SS and display.
Author: Anil Roy
*/
#include<stdio.h>
int main(){
    int totalSecond;
    printf("Enter the total seconds : \n");
    scanf("%d", &totalSecond);
    int hours=totalSecond/3600;
    int minutes=(totalSecond%3600)/60;
    int seconds=totalSecond%60;
    printf(" Time in HH:MM:SS format: %02d:%02d:%02d\n", hours, minutes, seconds);
    return 0;
}