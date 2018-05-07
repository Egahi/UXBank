#include "ATM_BankAcct.h"

ATM_BankAcct::ATM_BankAcct(char name[40], int num, double balance, int ATM_num, int pin)
{
	strcpy(acctName, name);
	acctNumber = num;
	ATM_acctNumber = ATM_num;
	PIN = pin;
	acctBalance = balance;
}

void ATM_BankAcct::Withdraw(double cash)
{
	if (cash < 0)
	{
		cout << "INVALID AMOUNT!\n";
	}
	else if (acctBalance < cash + 2.50)
	{
		cout << "Not enough Funds\n";
	}
	else
	{
		acctBalance -= cash;
		acctBalance -= 2.50;
	}
}
void ATM_BankAcct::Deposit(double cash)
{
	if (cash < 0)
	{
		cout << "INVALID AMOUNT!\n";
	}
	else if (acctBalance < 1)
	{
		cout << "Not enough Funds\n";
	}
	else
	{
		if (acctBalance < 1000)
		{
			acctBalance -= 1;
		}

		acctBalance += cash;
	}
}