/*Write a program in C to display the n terms of odd natural number and their sum*/
#include <stdio.h>
int main()
{
    int num, i,sum=0;
    printf("Enter the value = ");
    scanf("%d",&num);
    printf("The odd numbers between 1-%d = ",num);
    for (i = 1; i <= num; i++)
    {
        if(i%2!=0)
        {
         printf("%d\t",i);
         sum = sum+i;
        }
    }
    printf("\n\nThe sum of odd numbers between 1-%d is = %d\n\n",num,sum);

}
