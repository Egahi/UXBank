#include "Gold_BankAcct.h"

Gold_BankAcct::Gold_BankAcct(char name[40], int num, double balance, int ATM_num, int pin, double rate)
{
	strcpy(acctName, name);
	acctNumber = num;
	ATM_acctNumber = ATM_num;
	PIN = pin;
	acctBalance = balance;
	interestRate = rate;
}

void Gold_BankAcct::Withdraw(double cash)
{
	if (acctBalance < 20000)
	{
		acctBalance -= 2.50;
	}

	acctBalance -= cash;
}

void Gold_BankAcct::Deposit(double cash)
{
	if (acctBalance >= 5000)
	{
		acctBalance += (interestRate * acctBalance);
	}

	if (acctBalance < 20000)
	{
		acctBalance -= 1;
	}

	acctBalance += cash;
}