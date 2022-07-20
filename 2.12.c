// Asume price of 1 USD is INR 76.23 . Write a program to take the amount in INR and convert it into USD .
#include<stdio.h>
int main()
{
    float USD,INR;
    printf("Enter the INR amount : ");
    scanf("%f",&INR);
    USD=((float)INR/76.23);
    printf("The converted amount of INR into USD is %f",USD);
    return 0;
}