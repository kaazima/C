// Write a C program for ATM transaction

#include <stdio.h>
int main()
{
    float cash=2000,deposit,withdraw;
    int option,pin;
    char check;
    while(pin!=7658)
    {
        printf("Enter pin number\n");
        scanf("%d",&pin);
        if(pin!=7658)
            printf("Enter a valid pin number\n");
    }
    do
    {
        printf("******Welcome to ATM service******\n");
        printf("Enter 1.Check balance, 2.Withdraw cash, 3.Deposit cash, 4.Exit\n");
        scanf("%d",&option);
        switch(option)
        {
            case 1:
            printf("Your account balance is Rs.%.2f\n",cash);
            break;
            case 2:
            printf("Enter the amount to withdraw\n");
            scanf("%f",&withdraw);
            if((int)withdraw%100!=0)
                printf("Enter amount in multiples of 100\n");
            else if(withdraw>cash)
                printf("You don't have enough money to withdraw\n");
            else
            {
                cash-=withdraw;
                printf("Please collect cash\n");
                printf("Balance after withdrawing amount is %.2f\n",cash);
            }
            break;
            case 3:
            printf("Enter the amount to deposit\n");
            scanf("%f",&deposit);
            cash+=deposit;
            printf("Balance after depositing amount is %.2f\n",cash);
            break;
            case 4:
            break;
            default:
            printf("Invalid option entered\n");
        }
        printf("Do you want to continue?(y/n)\n");
        scanf("%c",&check);
        scanf("%c",&check);
    }while(check=='y' || check=='Y');
    printf("******Thanks for using our ATM service******");
}

/*Output:
Enter pin number
5452
Enter a valid pin number
Enter pin number
7658
******Welcome to ATM service******
Enter 1.Check balance, 2.Withdraw cash, 3.Deposit cash, 4.Exit
1
Your account balance is Rs.2000.00
Do you want to continue?(y/n)
y
******Welcome to ATM service******
Enter 1.Check balance, 2.Withdraw cash, 3.Deposit cash, 4.Exit
2
Enter the amount to withdraw
500
Please collect cash
Balance after withdrawing amount is 1500.00
Do you want to continue?(y/n)
y
******Welcome to ATM service******
Enter 1.Check balance, 2.Withdraw cash, 3.Deposit cash, 4.Exit
3
Enter the amount to deposit
1000
Balance after depositing amount is 2500.00
Do you want to continue?(y/n)
n
******Thanks for using our ATM service*******/