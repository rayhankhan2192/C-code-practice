/*Write a C program to calculate the factorial of a given number */
#include<stdio.h>
int main()
{
    int i,num,fact=1;
    printf("Enter the value = ");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
        fact = fact*i;
    }
    printf("\nFactorial of %d! is = %d\n\n",num,fact);

    return 0;
}