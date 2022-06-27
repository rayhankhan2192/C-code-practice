/*Write a program in C to display the n terms of odd natural number and their sum .*/

#include<stdio.h>
int main()
{
    int number, i=1, sum=0;
    printf("Enter the vale = ");
    scanf("%d",&number);
    while(i<=number)
    {
        if(i%2!=0)
        {
            printf("%d\t",i);
            sum = sum + i;
            i+=2;
        }
    }
    if(number%2==0)
    {
        number = number-1;
        printf("1 + 3 + 5 +.....+ %d = %d",number,sum);
    }
    else
    {
        printf("1 + 3 + 5 +.....+ %d = %d",number,sum);

    }
}


*/

