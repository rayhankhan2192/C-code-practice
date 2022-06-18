/*Write a program in C to display the pattern like right angle triangle with a number. The pattern
like :
1
12
123
1234 */

#include<stdio.h>
int main()
{
    int row,col,num;
    printf("Enter the value = ");
    scanf("%d",&num);

    for(row=1; row<=num; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ",col);
        }
            printf("\n");
    }
}