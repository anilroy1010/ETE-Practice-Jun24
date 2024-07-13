#include<stdio.h>
#include<stdbool.h>
bool isPrime(int);
bool isPrime(int num){
    if (num<=1)
    {
    return false; // Because 1 is not prime number and <1 negative number.
    }
    if (num==2)
    {
        return true; // because 2 is a prime number
    }
    if (num%2==0)
    {
        return false; // because prime number divided by 2 gives remainder 1.
    }
    for (int i=3; i*i<=num; i+=2){
        if (num%2==0)
        {
            return false;
        }
        return true;
    }
    
    

}
int main(){
    int num;
    int i;
    printf("Enter a the UpRange:\n");
    scanf("%d", &num);
    printf("PRIME NUMBER FORM 1 TO %d ARE:\n", num);
    for ( i = 0; i < num; i++)
    {
        if (isPrime(i))
        {
            printf("%d", i);
        }
        printf("\n");
        
    }
    
    return 0;
}