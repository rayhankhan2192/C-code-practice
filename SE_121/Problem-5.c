/*Write a C program to check whether a given number is an armstrong number or not */

#include<stdio.h>
int main()
{
    int num,reminder,sum=0,temp,n=0;
    printf("Enter the value = ");
    scanf("%d",&num);
    temp=num;
   while(temp!=0)
   {
       temp = temp/10;
       n+=1;
   }
   temp = n;
   int temp_t = num;
   while(temp!=0)
   {
       reminder=temp_t%10;
       sum+=pow(reminder,n);
       temp_t = temp_t/10;
       temp--;

   }
    if(num==sum)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not Armstrong");
    }
    return 0;
}




/* #include<stdio.h>
int main()
{
    int num,reminder,sum=0,temp;
    printf("Enter the value = ");
    scanf("%d",&num);
    temp=num;
    while(temp!=0)
    {
        reminder = temp%10;
        sum = sum + reminder*reminder*reminder;
        temp = temp/10;
    }
    if(num==sum)
    {
        printf("Armstrong Number");
    }
    else
    {
        printf("Not Armstrong");
    }
    return 0;
} */
