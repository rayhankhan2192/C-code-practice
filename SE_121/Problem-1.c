/*Write a program in C to read 10 numbers from keyboard and find their sum and average*/
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    float avg;
    printf("Input 10 numbers : \n");
    for(i=1;i<=10;i++)
    {
        printf("Number-%d : ",i);
        scanf("%d",&n);
        sum = sum + n;
    }
    avg = sum/10.00;
    printf("sum = %d \n",sum);
    printf("Average = %.2f ",avg);

    return 0;
}
