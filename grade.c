#include<stdio.h>
int main(){
    int sub1, sub2, sub3;
    int totalMarks, averageMarks;
    printf("Enter the Marks of THREE SUBJECTS:\n");
    scanf("%d%d%d", &sub1, &sub2,&sub3);
    totalMarks=sub1+sub2+sub3;
    averageMarks=totalMarks/3;
    if (averageMarks>85)
    {
    printf("Grade: A\n");
    }
    else if (averageMarks>=60 && averageMarks<85)
    {
        printf("Grade:B\n");
    }
    else if (averageMarks>=40 && averageMarks<60)
    {
        printf("Grade: C\n");
    }
    else if (averageMarks>=30 && averageMarks<40)
    {
        printf("Grade: D\n");
    }
    else{
        printf("Fail!, Try agin next time.\n");
    }
    
    
    return 0;
    
}