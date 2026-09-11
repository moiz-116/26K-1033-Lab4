#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age to check that you are eligible to vote or not :");
    scanf("%d",&age);
    if(age>=18){
       printf("You are eligible to vote");
    }
    else{
       printf("You are not eligible to vote (under 18)");
    }
}