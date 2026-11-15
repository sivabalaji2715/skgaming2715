#include<stdio.h>
struct bank
{
	int account_no;
	char name[50];
	float balance;
};
void deposit(struct bank * b)
{
	float amount;
	printf("Enter deposit amount:");
	scanf("%f",&amount);
	if(amount>0)
	{
		b->balance= b-> balance+amount;
		printf("Deposit succesful!\n");
	}
	else
	{
		printf("Invalid amount !\n");
	}
}
void withdraw(struct bank * b)
{
	float amount;
	printf("Enter withdraw amount:");
	scanf("%f",&amount);
	if(amount<=0)
	{
		printf("Invalid amount!\n");
		scanf("%f",&amount);
		if(amount<=0)
		{
			printf("Invalid amount!\n");
		}
		else if(amount >b->balance)
		{
			printf("Insuficient balance!\n");
		}
		else
		{
			b->balance =b->balance-amount;
			printf("Withdraw sucessfully!\n");
		}
	}
	void display(struct bank * b)
	{
		printf("Account details\n");
		printf("Account number:%d\n",b.account_no);
		printf("Account holder:%s\n",b.name);
		printf("Available balance:%.2f\n",b.balance);
	}
	int main()
	{
		struct bank b;
		int choice;
		printf("Enter account number");
		scanf("%49s",&b.account_no);
		printf("Enter account holder name");
		scanf("%49s",b.name);
		printf("Enter intial balance:");
		scanf("%f",&b.balance);
	
	do
	{
		printf("BANK MENU\n");
		printf("1.depo:sit\n");
		printf("2.withdraw\n");
		printf("3.display balance\n");
		printf("4.Exit\n");
		printf("Enter your choice:");
		scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			deposit(&b);
			break;
		case 2:
			withdraw(&b);
			break;
		case 3:
			display (b);
			break;
		case 4:
			printf("Thankyou\n");
			break;
		default:
			printf("Invalid choice!\n");
	}
	
	}while (choice!=4);

	return 0;
}






