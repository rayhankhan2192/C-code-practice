/*Write a program to find a minimum number from an array*/

#include<stdio.h>
int main()
{
    {
        printf("\n\t\t========== FIND MINIMUM NUMBER ==========\n\n");
        int num[100000],n,i;
        printf("Select how many numbers = ");
        scanf("%d",&n);
        printf("\nEnter %d digit here = ",n);

        for(i=0; i<n; i++)
        {
            scanf("%d",&num[i]);
        }
        int min=num[0];

        for(i=1; i<n; i++)
        {
            if(min>num[i])
                min=num[i];
        }

        printf("\nMinimum number = %d\n",min);
    }
    
    getch();

}
