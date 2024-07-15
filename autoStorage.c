/*
About: Auto storage Class
Author: Anil Roy
*/
#include<stdio.h>
int main(){
      auto int a=10;
      {
        auto int a=20;
        {
            auto int a=30;
            printf("Inner a: %d\n", a);
        }
        printf("Middle a: %d\n",a);
      }
      printf("Outer a: %d\n",a);

      return 0;

}