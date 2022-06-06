/*Write a program to find a maximum number from an array*/

#include<stdio.h>
int main()
{
    {
        printf("\n\t\t========== FIND MAXIMUM NUMBER ==========\n\n");
        int num[100000],n,i;
        printf("How many numbers = ");
        scanf("%d",&n);
        printf("\nEnter %d digit here = ",n);

        for(i=0; i<n; i++)
        {
            scanf("%d",&num[i]);
        }
        int max=num[0];

        for(i=1; i<n; i++)
        {
            if(max<num[i])
                max=num[i];
        }

        printf("\nMaximum number = %d\n",max);
    }
    getch();

}
