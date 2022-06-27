/* Write a program in C to display n terms of natural number and their sum */

#include<stdio.h>
int main()
{
    int num,i,sum=0;
    printf("Enter the value = ");
    scanf("%d",&num);

    for(i=1; i<=num; i++)
    {
        printf(" %d \t",i);
        sum = sum+i;

    }

    printf("\nThe first %d numbers sum is = %d\n\n",num,sum);

    return 0 ;
}
