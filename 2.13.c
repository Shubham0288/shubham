// Write a program to take a three-digit number from the user and rotate its digit by one position towards the right .
#include<stdio.h>
int main()
{
    int num,rem,div,new,c;
    printf("Enter the number : ");
    
    scanf("%d",&num);
    div=(num/10);
    rem=(num%10);
    c=rem*100;
    new=(div+c);
    printf("After shifting unit digit by one position towards to rigit nnumber become %d",new);
    return 0;
}