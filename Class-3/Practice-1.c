/*Write a program to calculate overtime pay of 10 employees.
Overtime is paid at the rate of Rs.
12.00 per hour for every hour worked above 40 hours.
Assume that employees do not work for
fractional part of an hour. */

#include<stdio.h>
int main()
{
    int i,hour;

    for( i=1; i<=10; i++)
    {
        printf("Employ-%d Enter working hour = ",i);
        scanf("%d",&hour);

    if(hour>40){
        int extra_hour = (hour - 40)*12;
        printf("Over time pay is %d\n\n",extra_hour);
    }
    else
        printf("This employ didn't get over time.\n\n");

    }
    return 0;
}
