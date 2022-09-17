#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct userinfo
{
    char name[30];
    char phonenumber[15];
    char nid[20];
    char gmail[30];
    char address[50];
    char date[10];
    char user_name[20];
    char password[30];
    char Re_enter_pass[30];
    char pass_1[30];
    char pass_2[30];
    char login_pass[15];
} user;
void cont_loop(int n)
{
    printf("\t\t\t\t\t1.Back\n\t\t\t\t\t2.Exit\n");
    printf("\t\t\t\t\tChoose an option: ");
    scanf("%d",&n);

    if(n==1)
    {
    }
    if(n==2)
    {
        exit(0);
    }
}

void apply_user_Ac(FILE *file,char createFile[30],int n)
{
    system("cls");
    printf("\t\t\t\t\t____________________________________\n\n");
    printf("\t\t\t\t\t      APPLY FOR ACCOUNT\n");
    printf("\t\t\t\t\t____________________________________\n\n");
    printf("\t\t\t\t\tEnter Name\t: ");
    fgets(user.name,30,stdin);
    user.name[strlen(user.name)-1]=0;

    printf("\t\t\t\t\tEnter Number\t: ");
    fgets(user.phonenumber,15,stdin);
    user.phonenumber[strlen(user.phonenumber)-1] = 0;

    printf("\t\t\t\t\tEnter NID\t: ");
    fgets(user.nid,20,stdin);
    user.nid[strlen(user.nid)-1] = 0;

    printf("\t\t\t\t\tEnter Gmail\t: ");
    fgets(user.gmail,30,stdin);
    user.gmail[strlen(user.gmail)-1] = 0;

    printf("\t\t\t\t\tYour Address\t: ");
    fgets(user.address,50,stdin);
    user.address[strlen(user.address)-1] = 0;

    printf("\t\t\t\t\t____________________________________\n\n");
    printf("\t\t\t\t\tDo you want to submit: \n\t\t\t\t\t1.Yes\n\t\t\t\t\t2.NO\n");
    scanf("%d",&n);
    if(n==1)
    {
        strcpy(user.date,__DATE__);
        strcpy(createFile,user.date);
        file = fopen(strcat(createFile,".txt"),"a+");
        fprintf(file,"%s\t\t\t\t%s\t\t\t\t%s\t\t\t\t%s\t\t\t\t%s\n",user.name,user.phonenumber,user.nid,user.gmail,user.address);
        fclose(file);

        system("cls");
        printf("\t\t\t\t\t____________________________________\n\n");
        printf("\t\t\t\t\t      ONLINE BANKING SYSTEM\n");
        printf("\t\t\t\t\t____________________________________\n");
        printf("'\n\t\t\t\t\t Successfully Applied !\n\n");
        printf("\t\t\t\t\t____________________________________");
    }
    if(n==2)
    {
        system("cls");
        printf("\t\t\t\t\t____________________________________\n\n");
        printf("\t\t\t\t\t      ONLINE BANKING SYSTEM\n");
        printf("\t\t\t\t\t____________________________________\n");
        printf("\n\t\t\t\t\tApplication Successfully Canceled!\n\n");
        printf("\t\t\t\t\t____________________________________");
    }
}

void crecate_user_Ac(FILE *file,char createFile[30],int n)
{
    fgetc(stdin);

    printf("\t\t\t\t\tEnter Name\t\t: ");
    fgets(user.name,30,stdin);
    user.name[strlen(user.name)-1]=0;

    printf("\t\t\t\t\tEnter Number\t\t: ");
    fgets(user.phonenumber,15,stdin);
    user.phonenumber[strlen(user.phonenumber)-1] = 0;

    printf("\t\t\t\t\tEnter NID\t\t: ");
    fgets(user.nid,20,stdin);
    user.nid[strlen(user.nid)-1] = 0;

    printf("\t\t\t\t\tEnter Gmail\t\t: ");
    fgets(user.gmail,30,stdin);
    user.gmail[strlen(user.gmail)-1] = 0;


    strcpy(createFile,user.phonenumber);
    file = fopen(strcat(createFile," "),"r");
    fread(&user,sizeof(struct userinfo),1,file);
    fclose(file);
    if(file!=NULL)
    {
        printf("\t\t\t\t\tAccount registered before!\n\n");
    }
    else
    {
        printf("\t\t\t\t\tCreate Password\t\t: ");
        fgets(user.password,30,stdin);
        user.password[strlen(user.password)-1]=0;

        printf("\t\t\t\t\tReEnter Password\t: ");
        fgets(user.Re_enter_pass,30,stdin);
        user.Re_enter_pass[strlen(user.Re_enter_pass)-1]=0;

        if(!strcmp(user.password,user.Re_enter_pass))
        {
            strcpy(createFile,user.phonenumber);
            file = fopen(strcat(createFile," "),"w");
            fwrite(&user,sizeof(struct userinfo),1,file);
            fclose(file);
            if(fwrite!=NULL)
            {
                printf("\n\t\t\t\t\tAccount registered successfully!\n");
            }
            else
            {
                printf("\n\t\t\t\t\tSomething went wrong! Please try again.\n");
            }
        }
    }
}

void crecate_Admin_Ac(FILE *file,char createFile[30],int n)
{
    fgetc(stdin);

    printf("\t\t\t\t\tEnter Name\t\t: ");
    fgets(user.name,30,stdin);
    user.name[strlen(user.name)-1]=0;

    printf("\t\t\t\t\tEnter Number\t\t: ");
    fgets(user.phonenumber,15,stdin);
    user.phonenumber[strlen(user.phonenumber)-1] = 0;

    printf("\t\t\t\t\tEnter NID\t\t: ");
    fgets(user.nid,20,stdin);
    user.nid[strlen(user.nid)-1] = 0;

    printf("\t\t\t\t\tEnter Gmail\t\t: ");
    fgets(user.gmail,30,stdin);
    user.gmail[strlen(user.gmail)-1] = 0;

    printf("\t\t\t\t\tCreate Username\t\t: ");
    fgets(user.user_name,20,stdin);
    user.user_name[strlen(user.user_name)-1] = 0;

    strcpy(createFile,user.user_name);
    file = fopen(strcat(createFile,".docx"),"r");
    fread(&user,sizeof(struct userinfo),1,file);
    fclose(file);
    if(file!=NULL)
    {
        printf("\t\t\t\t\tUsername taken before! Try again\n\n");
    }
    else
    {
        printf("\t\t\t\t\tCreate Password\t\t: ");
        fgets(user.password,30,stdin);
        user.password[strlen(user.password)-1]=0;

        printf("\t\t\t\t\tReEnter Password\t: ");
        fgets(user.Re_enter_pass,30,stdin);
        user.Re_enter_pass[strlen(user.Re_enter_pass)-1]=0;

        if(!strcmp(user.password,user.Re_enter_pass))
        {
            strcpy(createFile,user.user_name);
            file = fopen(strcat(createFile,".docx"),"w");
            fwrite(&user,sizeof(struct userinfo),1,file);
            fclose(file);
            if(fwrite!=NULL)
            {
                printf("\n\t\t\t\t\tAccount registered successfully!\n");
            }
            else
            {
                printf("\n\t\t\t\t\tSomething went wrong! Please try again.\n");
            }
        }
    }
}

void crecate_management_Ac(FILE *file,char createFile[30],int n)
{
    fgetc(stdin);

    printf("\t\t\t\t\tEnter Name\t\t: ");
    fgets(user.name,30,stdin);
    user.name[strlen(user.name)-1]=0;

    printf("\t\t\t\t\tEnter Number\t\t: ");
    fgets(user.phonenumber,15,stdin);
    user.phonenumber[strlen(user.phonenumber)-1] = 0;

    printf("\t\t\t\t\tEnter NID\t\t: ");
    fgets(user.nid,20,stdin);
    user.nid[strlen(user.nid)-1] = 0;

    printf("\t\t\t\t\tEnter Gmail\t\t: ");
    fgets(user.gmail,30,stdin);
    user.gmail[strlen(user.gmail)-1] = 0;

    printf("\t\t\t\t\tCreate Username\t\t: ");
    fgets(user.user_name,20,stdin);
    user.user_name[strlen(user.user_name)-1] = 0;

    strcpy(createFile,user.user_name);
    file = fopen(strcat(createFile,".dat"),"r");
    fread(&user,sizeof(struct userinfo),1,file);
    fclose(file);
    if(file!=NULL)
    {
        printf("\t\t\t\t\tUsername taken before! Try again\n\n");
    }
    else
    {
        printf("\t\t\t\t\tCreate Password\t\t: ");
        fgets(user.password,30,stdin);
        user.password[strlen(user.password)-1]=0;

        printf("\t\t\t\t\tReEnter Password\t: ");
        fgets(user.Re_enter_pass,30,stdin);
        user.Re_enter_pass[strlen(user.Re_enter_pass)-1]=0;

        if(!strcmp(user.password,user.Re_enter_pass))
        {
            strcpy(createFile,user.user_name);
            file = fopen(strcat(createFile,".dat"),"w");
            fwrite(&user,sizeof(struct userinfo),1,file);
            fclose(file);
            if(fwrite!=NULL)
            {
                printf("\n\t\t\t\t\tAccount registered successfully!\n");
            }
            else
            {
                printf("\n\t\t\t\t\tSomething went wrong! Please try again.\n");
            }
        }
    }
}
int main()
{
    system("COLOR B");
    int n;
    struct userinfo user;
    char login_password[30],login_userName[30], login_user_ac[15];
    char createFile[30];
    char ch;
    int n1=00,n2=00;//n1=100 for management password generator && n2=200 admin password generator
    FILE *file;
    FILE *pass_file;

    while(1)
    {
        printf("\t\t\t\t\t____________________________________\n\n");
        printf("\t\t\t\t\t      ONLINE BANKING SYSTEM\n");
        printf("\t\t\t\t\t____________________________________\n\n");
        printf("\t\t\t\t\t  1.APPLY FOR CREATE AC\n");
        printf("\t\t\t\t\t  2.LOGIN INTO USER AC\n");
        printf("\t\t\t\t\t  3.BANK MANAGEMENT\n");
        printf("\t\t\t\t\t  4.ABOUT US\n");
        printf("\t\t\t\t\t  5.HELP LINE\n");
        printf("\t\t\t\t\t  6.EXIT\n");
        printf("\t\t\t\t\t____________________________________\n\n");
        printf("\t\t\t\t\tChoose an option: ");
        scanf("%d",&n);
        fgetc(stdin);
        if(n==1)
        {
            apply_user_Ac(file,createFile,n);
            printf("\n\n");
            cont_loop(n);
        }
        if(n==2)
        {
            n=0;
            system("cls");
            printf("\t\t\t\t\t____________________________________\n\n");
            printf("\t\t\t\t\t        LOGIN INTO ACCOUNT\n");
            printf("\t\t\t\t\t____________________________________\n");
            printf("\n\t\t\t\t\tEnter AC Number:  ");
            scanf("%s",&login_user_ac);

            strcpy(createFile,login_user_ac);;
            file = fopen(strcat(createFile," "),"r");
            fread(&user,sizeof(struct userinfo),1,file);
            if(file==NULL)
            {
                system("cls");
                printf("\t\t\t\t\t____________________________________\n\n");
                printf("\t\t\t\t\t   GIVEN ACCOUNT NOT REGISTERED!\n");
                printf("\t\t\t\t\t____________________________________\n\n");
                cont_loop(n);
            }
            else
            {
                fgetc(stdin);
                printf("\t\t\t\t\tEnter Password :  ");
                fgets(user.login_pass,15,stdin);
                user.login_pass[strlen(user.login_pass)-1] = 0;

                if(!strcmp(user.password,user.login_pass))
                {
                    while(1)
                    {
                        system("cls");
                        printf("\t\t\t\t\t____________________________________\n\n");
                        printf("\t\t\t\t\t      ONLINE BANKING SYSTEM\n");
                        printf("\t\t\t\t\t____________________________________\n");
                        printf("\t\t\t\t\tAC Holder Name: %s\n\n",user.name);
                        printf("\t\t\t\t\t 1.GO TO TRANSACTION PAGE\n");
                        printf("\t\t\t\t\t 2.CHANGE PASSWORD\n");
                        printf("\t\t\t\t\t 3.YOUR DETAILS\n");
                        printf("\t\t\t\t\t 4.BACK\n");
                        printf("\t\t\t\t\t 5.EXIT\n");
                        printf("\t\t\t\t\t____________________________________\n");
                        printf("\t\t\t\t\tChoose an option: ");
                        scanf("%d",&n);

                        if(n==1)
                        {
                            while(1)
                            {
                                n=0;
                                system("cls");
                                printf("\t\t\t\t\t____________________________________\n\n");
                                printf("\t\t\t\t\t       TRANSACTION PAGE\n");
                                printf("\t\t\t\t\t____________________________________\n");
                                printf("\t\t\t\t\tAC Holder Name: %s\n\n",user.name);
                                printf("\t\t\t\t\t 1.CHECK BALANCE\n");
                                printf("\t\t\t\t\t 2.WITHDRAW AMOUNT\n");
                                printf("\t\t\t\t\t 3.TRANSFER AMOUNT\n");
                                printf("\t\t\t\t\t 4.STATEMENT\n");
                                printf("\t\t\t\t\t 5.BACK\n");
                                printf("\t\t\t\t\t 6.EXIT\n");
                                printf("\t\t\t\t\t____________________________________\n");
                                printf("\t\t\t\t\tChoose an option: ");
                                scanf("\t\t\t\t\t\t%d",&n);

                                if(n==5)
                                {
                                    n=0;
                                    break;
                                }
                                if(n==6)
                                {
                                    n=0;
                                    exit(0);
                                }
                            }
                        }
                        if(n==3)
                        {
                            system("cls");
                            printf("\t\t\t\t\t________________________________________\n\n");
                            printf("\t\t\t\t\t            YOUR DETAILS\n");
                            printf("\t\t\t\t\t________________________________________\n");
                            printf("\n\t\t\t\t\tAC Holder\t: %s\n",user.name);
                            printf("\t\t\t\t\tAC number\t: %s\n",user.phonenumber);
                            printf("\t\t\t\t\tNID\t\t: %s\n",user.nid);
                            printf("\t\t\t\t\tGmail AC\t: %s\n",user.gmail);
                            printf("\t\t\t\t\t________________________________________\n");
                            cont_loop(n);
                        }
                        if(n==4)
                        {
                            n=0;
                            break;
                        }
                        if(n==5)
                        {
                            exit(0);
                        }
                    }
                }
                else
                {
                    system("cls");
                    printf("\t\t\t\t\t____________________________________\n\n");
                    printf("\t\t\t\t\t       WRONG PASSWORD! TRY AGAIN\n");
                    printf("\t\t\t\t\t____________________________________\n\n");
                    cont_loop(n);

                }
            }
        }
        //fgetc(stdin);
        if(n==3)
        {
            system("cls");
            if(n1==100)
            {
                printf("\t\t\t\t\t____________________________________\n\n");
                printf("\t\t\t\t\t     GENERATE MANAGEMENT PASSWORD\n");
                printf("\t\t\t\t\t____________________________________\n\n");
                pass_file = fopen("manag_pass.txt","w");
                printf("\t\t\t\t\tCreate Password  : ");
                fgets(user.pass_1,30,stdin);
                user.pass_1[strlen(user.pass_1)-1]=0;

                printf("\t\t\t\t\tReEnter Password : ");
                fgets(user.pass_2,30,stdin);
                user.pass_2[strlen(user.pass_2)-1]=0;
                fwrite(&user,sizeof(struct userinfo),1,pass_file);
                fclose(pass_file);

                system("cls");
                printf("\t\t\t\t\t____________________________________\n\n");
                printf("\t\t\t\t\t      ONLINE BANKING SYSTEM\n");
                printf("\t\t\t\t\t____________________________________\n\n");
                printf("\t\t\t\t\tPassword Successfully Setup!\n");
                printf("\t\t\t\t\t      !!Warning!!\n");
                printf("\t\t\t\t\tStop Password generator after setup.\n\n");
                printf("\t\t\t\t\t____________________________________\n\n");
                cont_loop(n);
            }
            else
            {
                pass_file = fopen("manag_pass.txt","r");
                fread(&user,sizeof(struct userinfo),1,pass_file);
                printf("\t\t\t\t\t____________________________________\n\n");
                printf("\t\t\t\t\t      ONLINE BANKING SYSTEM\n");
                printf("\t\t\t\t\t____________________________________\n\n");
                printf("\t\t\t\t\tEnter password: ");
                fgets(login_password,30,stdin);
                login_password[strlen(login_password)-1]=0;
                fclose(pass_file);

                if(!strcmp(user.pass_2,login_password))
                {
                    while(1)
                    {

                        n=0;
                        system("cls");
                        printf("\t\t\t\t\t____________________________________\n\n");
                        printf("\t\t\t\t\t      ONLINE BANKING SYSTEM\n");
                        printf("\t\t\t\t\t____________________________________\n\n");
                        printf("\t\t\t\t\t  1.LOGIN MANAGEMENT AC\n");
                        printf("\t\t\t\t\t  2.ADMIN PANEL\n");
                        printf("\t\t\t\t\t  3.BACK\n");
                        printf("\t\t\t\t\t  4.EXIT\n");
                        printf("\t\t\t\t\t____________________________________\n\n");
                        printf("\t\t\t\t\tChoose an option: ");
                        scanf("%d",&n);
                        // cont_loop(n);

                        if(n==1)
                        {
                            n=0;
                            system("cls");
                            printf("\t\t\t\t\t____________________________________\n\n");
                            printf("\t\t\t\t\t      LOGIN INTO MANAGEMENT AC\n");
                            printf("\t\t\t\t\t____________________________________\n\n");
                            printf("\t\t\t\t\tEnter User Name: ");
                            scanf("%s",&login_userName);
                            strcpy(createFile,login_userName);
                            file = fopen(strcat(createFile,".dat"),"r");
                            fread(&user,sizeof(struct userinfo),1,file);
                            fclose(file);

                            if(file==NULL)
                            {
                                printf("\n\t\t\t\t\tAccount Invalid\n\n");
                                cont_loop(n);
                            }
                            else
                            {
                                fgetc(stdin);
                                printf("\t\t\t\t\tEnter Password : ");
                                fgets(login_password,30,stdin);
                                login_password[strlen(login_password)-1]=0;
                                if(!strcmp(user.password,login_password))
                                {
                                    while(1)
                                    {
                                        system("cls");
                                        printf("\t\t\t\t_____________________________________________________________\n\n");
                                        printf("\t\t\t\t                WELCOME TO MANAGEMENT PANEL\n");
                                        printf("\t\t\t\t_____________________________________________________________\n");
                                        printf("\t\t\t\tManagement Holder: %s\n\n",user.name);
                                        printf("\t\t\t\t--------------------                   --------------------\n");
                                        printf("\t\t\t\t  1.USER INFO                            2.LOGIN USER AC\n");
                                        printf("\t\t\t\t--------------------                   --------------------\n\n");
                                        printf("\t\t\t\t--------------------                   --------------------\n");
                                        printf("\t\t\t\t  3.USER APPLY                           4.CREATE USER AC\n");
                                        printf("\t\t\t\t--------------------                   --------------------\n\n");
                                        printf("\t\t\t\t--------------------                   --------------------\n");
                                        printf("\t\t\t\t  5.MANAGEMENT INFO                      6.CHANGE PASSWORD\n");
                                        printf("\t\t\t\t--------------------                   --------------------\n\n");

                                        printf("\t\t\t\t                        ----------\n");
                                        printf("\t\t\t\t                         7.BACK\n");
                                        printf("\t\t\t\t                        ----------\n\n");
                                        printf("\t\t\t\t                        ----------\n");
                                        printf("\t\t\t\t                         8.EXIT\n");
                                        printf("\t\t\t\t                        ----------\n");
                                        printf("\t\t\t\t_____________________________________________________________\n\n");
                                        printf("\t\t\t\tChoose an option: ");
                                        scanf("%d",&n);

                                        if(n==4)
                                        {
                                            n=0;
                                            system("cls");
                                            crecate_user_Ac(file,createFile,n);
                                            cont_loop(n);
                                        }
                                        if(n==7)
                                        {
                                            n=0;
                                            break;
                                        }
                                    }
                                }
                                else
                                {
                                    system("cls");
                                    printf("\t\t\t\t\t____________________________________\n\n");
                                    printf("\t\t\t\t\t       WRONG PASSWORD! TRY AGAN\n");
                                    printf("\t\t\t\t\t____________________________________\n\n");
                                    cont_loop(n);
                                }
                                //cont_loop(n);
                            }
                        }
                        fgetc(stdin);
                        if(n==2)
                        {
                            system("cls");
                            if(n2==200)
                            {
                                printf("\t\t\t\t\t____________________________________\n\n");
                                printf("\t\t\t\t\t       GENERATE ADMIN PASSWORD\n");
                                printf("\t\t\t\t\t____________________________________\n\n");
                                pass_file = fopen("admin_pass.txt","w");
                                printf("\t\t\t\t\tCreate Password  : ");
                                fgets(user.pass_1,30,stdin);
                                user.pass_1[strlen(user.pass_1)-1]=0;

                                printf("\t\t\t\t\tReEnter Password : ");
                                fgets(user.pass_2,30,stdin);
                                user.pass_2[strlen(user.pass_2)-1]=0;
                                fwrite(&user,sizeof(struct userinfo),1,pass_file);
                                fclose(pass_file);

                                system("cls");
                                printf("\t\t\t\t\t____________________________________\n\n");
                                printf("\t\t\t\t\t      ONLINE BANKING SYSTEM\n");
                                printf("\t\t\t\t\t____________________________________\n\n");
                                printf("\t\t\t\t\tPassword Successfully Setup!\n");
                                printf("\t\t\t\t\t      !!Warning!!\n");
                                printf("\t\t\t\t\tStop Password generator after setup.\n\n");
                                printf("\t\t\t\t\t____________________________________\n\n");
                                cont_loop(n);
                            }
                            else
                            {
                                pass_file = fopen("admin_pass.txt","r");
                                fread(&user,sizeof(struct userinfo),1,pass_file);
                                printf("\t\t\t\t\t____________________________________\n\n");
                                printf("\t\t\t\t\t      ONLINE BANKING SYSTEM\n");
                                printf("\t\t\t\t\t____________________________________\n\n");
                                printf("\t\t\t\t\tEnter password: ");
                                fgets(login_password,30,stdin);
                                login_password[strlen(login_password)-1]=0;
                                fclose(pass_file);
                                if(!strcmp(user.pass_2,login_password))
                                {

                                    while(1)
                                    {
                                        n=0;
                                        system("cls");
                                        printf("\t\t\t\t\t____________________________________\n\n");
                                        printf("\t\t\t\t\t      ONLINE BANKING SYSTEM\n");
                                        printf("\t\t\t\t\t____________________________________\n\n");
                                        printf("\t\t\t\t\t1.CREATE ADMIN AC\n");
                                        printf("\t\t\t\t\t2.LOGIN ADMIN AC\n");
                                        printf("\t\t\t\t\t3.BACK\n");
                                        printf("\t\t\t\t\t4.EXIT\n");
                                        printf("\t\t\t\t\t____________________________________\n");
                                        printf("\t\t\t\t\tChoose an option: ");
                                        scanf("%d",&n);
                                        //Create Admin panel AC
                                        //Create Admin panel AC
                                        if(n==1)
                                        {
                                            system("cls");
                                            printf("\t\t\t\t\t____________________________________\n\n");
                                            printf("\t\t\t\t\t       CREATE ADMIN AC\n");
                                            printf("\t\t\t\t\t____________________________________\n\n");

                                            crecate_Admin_Ac(file,createFile,n);
                                            cont_loop(n);
                                        }
                                        //Login into admin AC
                                        //Login into admin AC
                                        if(n==2)
                                        {
                                            n=0;
                                            system("cls");
                                            printf("\t\t\t\t\t____________________________________\n\n");
                                            printf("\t\t\t\t\t       LOGIN INTO ADMIN AC\n");
                                            printf("\t\t\t\t\t____________________________________\n\n");

                                            printf("\t\t\t\t\tEnter User Name: ");
                                            scanf("%s",&login_userName);

                                            strcpy(createFile,login_userName);
                                            file = fopen(strcat(createFile,".docx"),"r");
                                            fread(&user,sizeof(struct userinfo),1,file);
                                            fclose(file);

                                            if(file==NULL)
                                            {
                                                printf("\n\t\t\t\t\tAccount Invalid\n\n");
                                                cont_loop(n);
                                            }
                                            else
                                            {
                                                fgetc(stdin);
                                                printf("\t\t\t\t\tEnter Password : ");
                                                fgets(login_password,30,stdin);
                                                login_password[strlen(login_password)-1]=0;
                                                if(!strcmp(user.password,login_password))
                                                {
                                                    while(1)
                                                    {
                                                        n=0;
                                                        system("cls");
                                                        printf("\t\t\t\t_______________________________________________________________\n\n");
                                                        printf("\t\t\t\t                   WELCOME TO ADMIN PANEL\n");
                                                        printf("\t\t\t\t_______________________________________________________________\n");
                                                        printf("\t\t\t\tAdmin Holder: %s\n\n",user.name);
                                                        printf("\t\t\t\t--------------------                     ----------------------\n");
                                                        printf("\t\t\t\t  1.TOTAL BALANCE                          2.STATEMENT\n");
                                                        printf("\t\t\t\t----------------------                   ----------------------\n\n");
                                                        printf("\t\t\t\t----------------------                   ----------------------\n");
                                                        printf("\t\t\t\t  3.CLIENT INFO                            4.UPDATE CLIENT INFO\n");
                                                        printf("\t\t\t\t----------------------                   ----------------------\n\n");
                                                        printf("\t\t\t\t----------------------                   ----------------------\n");
                                                        printf("\t\t\t\t  5.MANAGEMENT INFO                        6.UPDATE MANAGE. INFO\n");
                                                        printf("\t\t\t\t----------------------                   ----------------------\n\n");
                                                        printf("\t\t\t\t----------------------                   ----------------------\n");
                                                        printf("\t\t\t\t  7.CREATE MANAGE. AC                      8.CHANGE PASSWORD\n");
                                                        printf("\t\t\t\t----------------------                   ----------------------\n\n");

                                                        printf("\t\t\t\t                          ----------\n");
                                                        printf("\t\t\t\t                           9.BACK\n");
                                                        printf("\t\t\t\t                          ----------\n\n");
                                                        printf("\t\t\t\t                          ----------\n");
                                                        printf("\t\t\t\t                           10.EXIT\n");
                                                        printf("\t\t\t\t                          ----------\n");
                                                        printf("\t\t\t\t_______________________________________________________________\n\n");
                                                        printf("\t\t\t\tChoose an option: ");
                                                        scanf("%d",&n);
                                                        if(n==7)
                                                        {
                                                            n=0;
                                                            system("cls");
                                                            printf("\t\t\t\t\t_______________________________\n");
                                                            printf("\n\t\t\t\t\t CREATE MANAGEMENT AC\n");
                                                            printf("\t\t\t\t\t_______________________________\n");

                                                            crecate_management_Ac(file,createFile,n);
                                                            cont_loop(n);
                                                            continue;
                                                        }
                                                        if(n==9)
                                                        {
                                                            n=0;
                                                            break;
                                                        }
                                                        if(n==10)
                                                        {
                                                            n=0;
                                                            exit(0);
                                                        }
                                                        system("cls");
                                                    }
                                                }
                                                else
                                                {
                                                    system("cls");
                                                    printf("\t\t\t\t\t____________________________________\n\n");
                                                    printf("\t\t\t\t\t       WRONG PASSWORD! TRY AGAIN\n");
                                                    printf("\t\t\t\t\t____________________________________\n\n");
                                                    cont_loop(n);
                                                }
                                            }
                                        }
                                        if(n==3)
                                        {
                                            n=0;
                                            break;
                                        }
                                        if(n==4)
                                        {
                                            n=0;
                                            exit(0);
                                        }
                                        system("cls");
                                    }
                                }
                                else
                                {
                                    system("cls");
                                    printf("\t\t\t\t\t____________________________________\n\n");
                                    printf("\t\t\t\t\t       WRONG PASSWORD! TRY AGAIN\n");
                                    printf("\t\t\t\t\t____________________________________\n\n");
                                    cont_loop(n);
                                }
                            }
                        }
                        if(n==3)
                        {
                            n=0;
                            break;
                        }
                        if(n==4)
                        {
                            n=0;
                            exit(1);
                        }
                        system("cls");
                    }
                }
                else
                {
                    system("cls");
                    printf("\t\t\t\t\t____________________________________\n\n");
                    printf("\t\t\t\t\t       WRONG PASSWORD! TRY AGAIN\n");
                    printf("\t\t\t\t\t____________________________________\n\n");
                    cont_loop(n);
                }
            }
        }
        if(n==4)
        {
            n=0;
            system("cls");
            printf("\t\t\t\t\t________________________________________\n\n");
            printf("\t\t\t\t\t Upcoming features will available soon!\n");
            printf("\t\t\t\t\t________________________________________\n\n");
            cont_loop(n);
        }
        if(n==5)
        {
            n=0;
            system("cls");
            printf("\t\t\t\t\t________________________________________\n\n");
            printf("\t\t\t\t\t Upcoming features will available soon!\n");
            printf("\t\t\t\t\t________________________________________\n\n");
            cont_loop(n);
        }
        if(n==6)
        {
            exit(1);
        }
        system("cls");
    }
    return 0;
}
