/*Write a program to find the factorial value of any number entered through the keyboard */

#include<stdio.h>
int main()
{
    int i,num,factorial=1;
    printf("Enter the value = ");
    scanf("%d",&num);

    for(i=1; i<=num; i++)
    {
        factorial = factorial*i;
    }
    printf("\nFactorial of %d! is = %d\n\n",num,factorial);

    return 0 ;
}
