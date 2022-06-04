/*Write a program in C to read 10 numbers from keyboard and find their sum and average.*/

#include<stdio.h>
int main()
{
    int num[10],i,sum=0;
    printf("Enter 10 numbers = ");

    for(i=0; i<10; i++)
    {
        scanf("%d",&num[i]);
    }

    for(i=0; i<10; i++)
    {
        sum = sum + num[i];
    }
    printf("\nThe sum is %d\n",sum);
    printf("Average number is %.2lf\n\n\n",(float)sum/10);

}
