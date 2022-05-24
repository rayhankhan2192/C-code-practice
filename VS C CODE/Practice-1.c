#include<stdio.h>
#include<math.h>
int main()
{
    double product_price,selling_price;
    printf("\nEnter product price = ");
    scanf("%lf",&product_price);
    printf("Enter product selling price = ");
    scanf("%lf",&selling_price);

    double profit = selling_price - product_price;
    double loss = product_price - selling_price;

    if(selling_price > product_price){
        printf("\n\nCongratulations!! You make profit.");
        printf("\n\nYour profit is %.2lf",profit);
    }
    else{
        if(selling_price < product_price){
            printf("\n\nSorry!! You make loss.");
            printf("\n\nLoss amount is %.2lf",loss);
        }
        else{
            printf("\n\nProduct price & selling price equal !!");
        }
    }
    return 0;
}
