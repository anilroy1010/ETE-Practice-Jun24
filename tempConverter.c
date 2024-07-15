/*
About: This program will convert the temperature from celsius scale to 
fahrenheit and fahrenheit to celsius.
Author: Anil Roy
*/
#include<stdio.h>

void fahrenToCelsius(){
    float fahrenheit, celsius;
    printf("Enter the temperature in fahrenheit: \n");
    scanf("%f", &fahrenheit);
    celsius=5.0/9.0*(fahrenheit-32);
    printf("Temperature in Celsius Scale: %.2f\n",celsius);

}
void celsiusToFahren(){
    float celsius, fahrenheit;
    printf("Enter the temperature in Celsius Scale: \n");
    scanf("%f", &celsius);
    fahrenheit=(9.0/5.0*celsius)+32;
    printf("Temperature in Fahrenheit Scale: %.2f", fahrenheit);

}
int main(){
    int choice;
    printf("Choice 1 for Fahrenheit to Celsius: \n");
    printf("Choice 2 for Celsius to Fahrenheit: \n");
    printf("Enter your CHOICE :\n");
    scanf("%d", &choice);
    if (choice==1)
    {
        fahrenToCelsius();
    }
    else if (choice==2)
    {
        celsiusToFahren();
    }
    else{
        printf("Invalid Choice, Try again.");
    }

    return 0;
}