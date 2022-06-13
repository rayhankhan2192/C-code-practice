/*That code can reverse the numbers */
#include<stdio.h>
int main()
{
    
    int num[100],i,n;
    printf("How many numbers = ");
    scanf("%d",&n);
    printf("\nEnter %d value = ",n);

    for(i=1; i<=n; i++)
    {
        scanf("%d",&num[i]);
    }

    printf("\nReverse number is = ");
    for(i=n; i>=1; i--)
    {
        printf("%d  ",A[i]);
    }
    return 0;
}

