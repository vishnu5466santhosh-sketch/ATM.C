#include<stdio.h>
int main()
{
int pin=1234;
int epin;
int choice;
float balance=50000;
float amount;
printf("======= WELCOME TO ATM =======\n");
printf("enter the pin:\n");
scanf("%d",&epin);
if(pin!=epin)
{
printf("Invalid pin\n");
return 0;
}
printf("\n login successful");
do
{
printf("\n=======ATM MENU=======\n");
printf("1.Check Balance\n");
printf("2.Deposit Money\n");
printf("3.Withdraw Money\n");
printf("4.Exit\n");
printf("enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
printf("Your Balance:Rs.%.2f\n",balance);
break;
case 2:
printf("Enter the deposite amount:");
scanf("%f",&amount);
if(amount>0)
{
balance = balance + amount;
printf("Money Deposited Successfully\n");
printf("The New Balance:Rs.%.2f",balance);
}
else
{
printf("Invalid Amount\n");
}
break;
case 3:
printf("Enter the amount to withdraw:");
scanf("%f",&amount);
if(amount<=0)
{
printf("Invalid Amount\n");
}
else if(amount<=balance)
{
balance = balance - amount;
printf("\n Please collect your cash\n");
printf("Remaining Balance:",balance);
}
else
{
printf("Insufficient Balance\n");
}
break;
case 4:
printf("THANK YOU FOR USING OUR ATM\n");
break;
default:
printf("Invalid choice\n");
}
}
while(choice!=4);
return 0;
}




