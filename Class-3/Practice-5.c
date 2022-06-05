/*Check the following number prime or not by taking input from the user */

#include<stdio.h>
int main()
{
    int n,count=0,i;
    printf("Enter the value = ");
    scanf("%d",&n);

    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            count++;
            break;

        }
    }
    if(count==0)
        {
            printf("\nprime number.");
        }
        else
        {
            printf("Not prime number.");
        }
    getch();
}

