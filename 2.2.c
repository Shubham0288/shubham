// Write a program to print a given number without its last digit .
#include<stdio.h>
int main()
{
    int num,rem;
    printf("Enter the number :");
    scanf("%d",&num);
    rem=(num/10);
    printf("The entered number without last digit is %d ",rem);
    return 0;
}