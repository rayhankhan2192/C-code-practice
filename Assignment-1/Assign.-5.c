/*Write a program in C to make such a
pattern like a pyramid with an asterisk*/

#include<stdio.h>
int main()
{
    int row,col,n;
    printf("Enter the value for pattern = ");
    scanf("%d",&n);

    for(row=1; row<=n; row+=1)
    {
        for(col=1; col<=row; col=col+1)
        {
            printf("* ");
        }
        printf("\n");

    }
    return 0;
    
}

