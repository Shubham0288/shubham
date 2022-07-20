// Write a program to input a number from user and also digit . Append a digit in the number and print the resulting number .(Example -number =234 and digit =9 then the resulting number is 2349)
#include<stdio.h>
int main()
{
    int num,digit,old,new;
    printf("Enter the number :");
    scanf("%d",&num);
    printf("Enter the digit :");
    scanf("%d",&digit);
    old=(num*10);
    new=old+digit;
    printf("Resilting number is %d",new);
    return 0;
}