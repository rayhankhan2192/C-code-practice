/*Write a programe that takes the number obtained by  three students in the examination
and print them in order of highest to lowest.exammple 70 60 90
print 90 80 70 */

#include<stdio.h>
int main()
{
    int mash_num,shitol_num,rayhan_num;
    printf("Enter Mash number = ");
    scanf("%d",&mash_num);
    printf("Enter Shitol number = ");
    scanf("%d",&shitol_num);
    printf("Enter Rayhan number = ");
    scanf("%d",&rayhan_num);

    printf("\n\n");

    if(mash_num>shitol_num && mash_num>rayhan_num)
        printf("1st highest number %d Mashrafe\n",mash_num);
    else if(shitol_num>mash_num && shitol_num>rayhan_num)
        printf("1st highest number %d Shitol\n",shitol_num);
    else if(rayhan_num>mash_num && rayhan_num>shitol_num)
        printf("1st highest number %d Rayhan\n",rayhan_num);



    if(mash_num<shitol_num && mash_num>rayhan_num)
        printf("2nd highest number %d Mashrafe\n",mash_num);
    else if(mash_num<rayhan_num && mash_num>shitol_num)
        printf("2nd highest number %d Mashrafe\n",mash_num);

    if(shitol_num<mash_num && shitol_num>rayhan_num)
        printf("2nd highest number %d Shitol\n",shitol_num);
    else if(shitol_num<rayhan_num && shitol_num>mash_num)
        printf("2nd highest number %d Shitol\n",shitol_num);

    if(rayhan_num<mash_num && rayhan_num>shitol_num)
        printf("2nd highest number %d Rayhan\n",rayhan_num);
    else if(rayhan_num<shitol_num && rayhan_num>mash_num)
        printf("2nd highest number %d Rayhan\n",rayhan_num);




    if(mash_num<shitol_num && mash_num<rayhan_num)
        printf("3rd highest number %d Mashrafe\n",mash_num);
    else if(shitol_num<mash_num && shitol_num<rayhan_num)
        printf("3rd highest number %d Shitol\n",shitol_num);
    else if(rayhan_num<mash_num && rayhan_num<shitol_num)
        printf("3rd highest number %d Rayhan\n",rayhan_num);


    getch();
}
