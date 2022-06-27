/*Write a program that input +, - ,* or / and shows the result by taking variable
input from the user */

#include<stdio.h>
int main()
{
    double num1,num2;
    char operatore;

    printf("Enter an operatore = +,-,*,/ : ");
    scanf("%c",&operatore);

     printf("Enter two numbers : ");
    scanf("%lf %lf",&num1,&num2);


    switch(operatore)
    {

    case '+' :
        {
        printf("%.2lf + %.2lf = %.2lf\n",num1,num2,num1 + num2);
        break;
        }

    case '-' :
        {
            printf("%.2lf - %.2lf = %.2lf\n",num1,num2,num1 - num2);
            break;
        }

    case '*' :
        {
            printf("%.2lf * %.2lf = %.2lf\n",num1,num2,num1 * num2);
            break;
        }

    case '/' :
        {
            printf("%.2lf / %.2lf = %.2lf\n",num1,num2,num1 / num2);
            break;
        }

    default :
        {
           printf("Not a valid operatore\n");
           printf("Please try again with valid operatore\n");
        }

    }


    getch();
    
}
