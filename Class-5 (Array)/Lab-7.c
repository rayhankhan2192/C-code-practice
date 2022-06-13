#include<stdio.h>
int main()
{
    int num[]={18,35,52,73,85,1,11,13,14,1,20,22,25,26,27,28,30,33,3,34,37,38,45,67,89,86,54,89,87,65,35,98,
    56,78,56,44,98,67,90,92,94,60,73,88,95,16,84,90,100,8,};
    int i,pos=0,n;
    printf("Enter any number 1-100 = ");
    scanf("%d",&n);
    for(i=0; i<=51; i++)
    {
        if(n==num[i])
        {
            pos=i+1;
            break;
        }
    }
    if(pos==0)
    {
        printf("Not found.");
    }
    else
    {
        printf("Numbers are available.\n");
        printf("Numbers position is %d\n",pos);
    }
    getch();
}