#include<stdio.h>
int main(){
    int num1,num2;
    char opt;
    printf("Enter first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);
    printf("Enter Operator (+,-,/,*,%)");
    scanf(" %c",&opt);
    switch(opt){
        case '+':
        printf("The Sum of numbers is %d",num1+num2);
        break;
        case '-':
        printf("The Difference of numbers is %d",num1-num2);
        break;
        case '*':
        printf("The Product of numbers is %d",num1*num2);
        break;
        case '/':
        printf("The Division of numbers is %d",num1/num2);
        break;
        case '%':
        printf("The Remainder of numbers is %d",num1%num2);
        break;
        default:
        printf("Invalid operator");
    }
}