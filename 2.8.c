// Write a program to check wheather the given nnumber is odd or even using bitwise operator.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter any number :");
    scanf("%d",&num);
    (num%2==0 && num%num==0)?printf("Entered number is Even"):printf("Entered number is Odd");
    return 0;
}