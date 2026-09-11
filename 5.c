#include<stdio.h>
int main(){
    int units,cost=10,bill,net_bill,discount;
    printf("Rate is Rs.10 per unit \n");
    printf("Enter the amount of units consumed to avail the discount :");
    scanf("%d",&units);
    bill=units*cost;
    if(units<100){
        discount=(bill*10)/100;
        net_bill=bill-discount;
        printf("Total bill :Rs.%d \n",bill);
        printf("Discount :Rs.%d \n",discount);
        printf("Net Bill :Rs.%d \n",net_bill);
    }else{
        printf("Total bill :Rs.%d \n",bill);
        printf("Not eligible for discount");
    }
}