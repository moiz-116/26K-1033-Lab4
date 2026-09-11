#include<stdio.h>
int main(){
    char signal;
    printf("Enter Signal letter (R for red,Y for yellow,G for green) to get corresponding reaction :");
    scanf(" %c",&signal);
    switch(signal){
        case 'R':
        printf("Stop");
        break;
        case 'Y':
        printf("Wait");
        break;
        case 'G':
        printf("Go");
        default:
        printf("Invalid letter");
    }
}