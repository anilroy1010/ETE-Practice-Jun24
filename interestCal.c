/*
About: This program is for calculating the simple and compound interest.
Author: Anil ROy
*/
#include<stdio.h>
#include<math.h>
int main(){

    double principal, rate, time, simInterest, comInterest;
    int n;
    printf(" Enter the principal amount:\n");
    scanf("%lf", &principal);
    printf("Enter the Rate of interest:\n");
    scanf("%lf", &rate);
    printf("Enter the time of investment:\n");
    scanf("%lf", &time);
    printf("Enter the number of time interest is compounded:\n");
    scanf("%d", &n);

    simInterest=(principal*time*rate)/100;
    comInterest=principal*pow((1+ rate/(n*100)),n*time)-principal;
    printf("The simple interest will be: %.2lf\n", simInterest);
    printf("The compound interest will be : %.2lf\n", comInterest);

    return 0;


    }