
/*
About: This Simple program will Print the EVEN NUMBER from 1 to 20.
Used--> While Loop
Author: Anil Roy

*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i;
    i=1 ;// initialisation
    while (i<=20)  // Condition 
    {
        if (i%2==0)
        {
            printf("\n %d\n", i );
        }
       i++;
        
    }
    return 0;
}