// Write a program to make the last digit of number stored in a variable as zero :
#include<stdio.h>
int main()
{
    int num,rem,NUM;
    printf("Enter the number : ");
    scanf("%d",&num);
    rem=(num/10);
    NUM=rem*10;
    printf("Entered number become %d",NUM);
    return 0;
}