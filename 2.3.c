// Write a program to swap values of two int variables.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter any two int values of a and b :");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("a=%d and b=%d",a,b);
    return 0;
}