//banking application code .
#include<stdio.h>
void main()
{
    float amount=122.34;
    float deposite;
    float withdraw;
    int option;
    do
    {
        puts("please select from below options:");
        puts("1.View Balance");
        puts("2.Deposit");
        puts("3.Withdraw");
        puts("4.Exit");
        puts("Enter the desired option:");
        scanf("%d",&option);
        switch(option)
        {
        case 1:
            printf("Your current balance is:%f Rupees \n",amount);
            break;
        case 2:
            printf("Enter amount to deposit:\n");
            scanf("%f",&deposite);
            if(deposite>=0)
            {
                amount+=deposite;
                printf("You have deposited: %f Rupees \n",deposite);
                printf("Your current balance is: %f Rupees \n",amount);
            }
            else
            {
                puts("Negative deposit not allowed \n");

            }
            break;
        case 3:
            printf("Enter the withdraw amount:");
            scanf("%f",&withdraw);
            if(withdraw<=amount)
            {
                amount-=withdraw;
                printf("You have withdraw: %f Rupees \n",withdraw);
                printf("You current amount is:%f Rupees \n",amount);
            }
            else
            {
                printf("Negative or invalid amount withdraw amount\n");

            }

          }

       }
       while(option!=4);
       return 0;

}
