/*Write a C program to calculate sum of digits of a number */
#include<stdio.h>
int main()
{
    int num,reminder,sum=0,temp;
    printf("Enter the value = ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        reminder = temp%10;
        sum = sum + reminder;
        temp = temp/10;
    }
    printf("The sum is %d number is = %d",num,sum);
    return 0;
}
