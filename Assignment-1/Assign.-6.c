/*Write a program in C to display the n terms of even natural number and their sum .*/

#include<stdio.h>
int main()
{
    int num,i,sum=0,num2;
    printf("Enter the even value = ");
    scanf("%d",&num);


    for(i=2; i<=num; i+=2)
    {
        printf("%d\t",i);
        sum = sum + i;
        num2 = num/2;
    }
    printf("\nThe sum of 1st %d even numbers is = %d\n",num2,sum);

return 0;
    
    
}
