//Write a program to print unit digit of given number :
#include<stdio.h>
int main()
{
    int num,rem;
    printf("Enter the number : ");
    scanf("%d",&num);
    rem=(num%10);
    printf("The unit digit of the entered number is %d",rem);
    return 0;
}