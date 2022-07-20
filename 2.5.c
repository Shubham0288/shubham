// Write a progarm to input a three-digit number and display the sum of the digits.
#include<stdio.h>
int main()
{
    int num,sum,rem,div,div1,rem1;
    printf("Enter the digit number :");
    scanf("%d",&num);
    rem=(num%10);
    div=(num/10);
    rem1=(div%10);
    div1=(div/10);
    sum=rem+rem1+div1;
    printf("Sum of the entered three digit number is %d",sum);
    return 0;
}