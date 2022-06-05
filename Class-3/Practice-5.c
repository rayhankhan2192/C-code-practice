#include<stdio.h>
int main()
{
    int num,count=0,i;
    printf("Enter the value = ");
    scanf("%d",&num);

    for(i=2; i<num; i++)
    {
        if(num%i==0)
        {
            count++;
            break;

        }
    }
    if(count==0)
        {
            printf("%d is prime number.",num);
        }
        else
        {
            printf("%d is not prime number.",num);
        }
    getch();
}

