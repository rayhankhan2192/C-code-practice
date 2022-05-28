/*Write a program to add first seven terms of the following series using a for loop:
1/1! + 2/2! + 3/3! + ............. */

#include<stdio.h>
int main()
{
    int num=7,i;
    float sum=0.00, factorial=1.00;
    //printf("Enter the last number of the series = ");
    //scanf("%d %d",&num1,&num2);
    printf("\n\n1/1! + 2/2! + 3/3!+.......+ %d/%d!",num,num);

    for(i=1; i<=num; i++)
    {
        factorial = factorial * i;
        sum = sum + (i/factorial);
    }
    printf(" = %.4f\n\n", sum);




    return 0;
}
