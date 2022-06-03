/*Write a program in C to display the n terms of odd natural number and their sum .*/

#include<stdio.h>
int main()
{
    int num,i,sum=0,num2;
    printf("Enter the Odd value = ");
    scanf("%d",&num);


    for(i=1; i<=num; i+=2)
    {
        printf("%d\t",i);
        sum = sum + i;
        num2 = num/2 + 1;
    }
    printf("\nThe sum of 1st %d Odd numbers is = %d\n",num2,sum);


}

