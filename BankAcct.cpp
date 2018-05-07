#include "BankAcct.h"
#include <cstdlib>

BankAcct::BankAcct(char name[40], int num, double balance)
{
	strcpy(acctName, name);
	acctNumber = num;
	acctBalance = balance;
}

void BankAcct::Deposit(double cash)
{
	if (cash < 0)
	{
		// can't deposit a negative amount!
		cout << "INVALID AMOUNT!\n";
	}
	else
	{
		acctBalance += cash;
	}
}

void BankAcct::Withdraw(double cash)
{
	if (cash < 0)
	{
		// can't withdraw a negative amount
		cout << "INVALID AMOUNT!\n";
	}
	else if (acctBalance < cash)
	{
		// can't withdraw more than amount in account
		cout << "Not enough Funds\n";
	}
	else
	{
		acctBalance -= cash;
	}
}

void BankAcct::ShowAll()
{
	cout << "\n\nAccount Name:\t\t" << acctName << endl
		 << "Account Number:\t\t" << acctNumber << endl
		 << "Account Balance:\t" << acctBalance << endl;
}