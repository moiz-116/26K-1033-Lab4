#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two numbers to compare :");
    scanf("%d %d",&num1,&num2);
if(num1==num2){
    printf("Both numbers are equal \n");
}
else if(num1>num2){
    printf("First Number is greater than Second Number \n");
}
else{
   printf("Second Number is greater than First Number \n");
}
}