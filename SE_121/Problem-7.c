/*Write a C program to enter a number and print its reverse. */
#include<stdio.h>
int main()
{
    int num,reminder,reverse;
    printf("Enter the value = ");
    scanf("%d",&num);

    while(num!=0)
    {
        reminder = num%10;
        reverse = reverse*10 + reminder;
        num = num/10;
    }

    printf("The reverse number is = %d",reverse);
    

    return 0;

}
