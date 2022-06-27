/*Write a program to sort an array in ascending order.*/

#include<stdio.h>
int main()
{
    int m[]={12,17,3,33,1,23,9};
    int i,j,temp;
    for(i=0; i<7; i++)
    {
        printf("%d\t",m[i]);
    }
    for(i=0; i<7; i++)
    {
        for(j=i+1; j<7; j++)
        {
            if(m[i]>m[j])
            {
                temp=m[i];
                m[i]=m[j];
                m[j]=temp;
            }
        }
    }
    printf("\n\nArray in Ascending order.\n\n");
    for(i=0; i<7; i++)
    printf("%d\t",m[i]);
    printf("\n\n");
    
    
    return 0;
}
