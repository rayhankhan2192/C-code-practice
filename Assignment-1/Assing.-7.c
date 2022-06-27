/*Write a C program to print prime number from 1 to 200*/

#include<stdio.h>
int main()
{
    int num=200,i,j,count;
    //printf("Enter the value = ");
    //scanf("%d",num);

    for(i=1; i<=num; i++)
    {
        count=0;
        for(j=2; j<=i/2; j++)
        {
            if(i%j==0)
            {
                count++;
                break;
            }
        }
    if(count==0 && i!=1)
    {
        printf("%d\t",i);
    }
    }
    
    getch();

}
