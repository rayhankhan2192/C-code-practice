/*Write a program to print all prime numbers from 1 to 300.
(Hint: Use nested loops, break and
continue) */

#include<stdio.h>
int main()
{
    int num,i,prime,count;
    printf("Prime number is 1 to 300 are.\n");

    for(num=1; num<=300; num++){
        if(num==1){
            printf("Number %d is not prime number.\n\n",num);
            continue;
        }
        count=sqrt(num);
        prime=1;
        for(i=2; i<=count; i++){
            if(num%i==0){
                prime=0;
                break;
            }
        }
        if(prime){
            printf("%d\t",num);
        }
    }
    return 0;
}
