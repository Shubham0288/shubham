// Write a program to find the position of first 1 in LSB.
#include<stdio.h>
int main()
{
    int num,least;
    printf("Enter the number :\n");
    scanf("%d",&num);
    least=num&1;
    printf("The position of first 1 in LSB is %d",least);
    return 0;
}