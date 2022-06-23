/*Write a program in C to display the n terms of odd natural number and their sum .*/

#include<stdio.h>
int main()
{
    int num,i,sum=0,num2;
    printf("Enter the Odd value = ");
    scanf("%d",&num);


    for(i=1; i<=num; i+=2)
    {
        printf("%d\t",i);
        sum = sum + i;
        num2 = num/2 + 1;
    }
    printf("\nThe sum of 1st %d Odd numbers is = %d\n",num2,sum);


}

/* previous code has an error. There we needed to be deaclear specific odd number. But in this code we can declare any integer 
number suppose we want to print 1 to 50 all odd number it will print the odd number 1,2,3.....49. But in previous code 
we needed to deacleat 49 to priant either it was given error in sequence */


#include<stdio.h>
int main()
{
    int number, i=1, sum=0;
    printf("Enter the vale = ");
    scanf("%d",&number);
    while(i<=number)
    {
        if(i%2!=0)
        {
            printf("%d\t",i);
            sum = sum + i;
            i+=2;
        }
    }
    if(number%2==0)
    {
        number = number-1;
        printf("1 + 3 + 5 +.....+ %d = %d",number,sum);
    }
    else
    {
        printf("1 + 3 + 5 +.....+ %d = %d",number,sum);

    }
}


*/

