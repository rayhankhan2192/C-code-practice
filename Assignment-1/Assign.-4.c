/*Write a program in C to make such a pattern
like a pyramid with numbers increased by 1 */

#include<stdio.h>
int main()
{
    int row,col,n,num=2;
    printf("Enter the value for pattern = ");
    scanf("%d",&n);

    for(row=2; row<=n; row+=1)
    {
        for(col=1; col<=row; col=col+1)
        {
            printf("%d ",num++);
        }
        printf("\n");

    }
    return 0;
}
