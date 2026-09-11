#include<stdio.h>
int main(){
    int num1,num2,num3;
    printf("Enter three numbers to find smallest among them :");
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1<=num2){
        if(num1<num3){
            printf("%d",num1);
        }
        else{
            printf("%d",num3);
        }
    }else if(num3<num2){
        printf("%d",num3);
    }else{
        printf("%d",num2);
    }
}